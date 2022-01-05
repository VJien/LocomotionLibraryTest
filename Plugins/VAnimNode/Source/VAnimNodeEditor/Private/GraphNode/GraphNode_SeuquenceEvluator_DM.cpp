// Fill out your copyright notice in the Description page of Project Settings.


#include "GraphNode/GraphNode_SeuquenceEvluator_DM.h"
#include "IAnimBlueprintNodeOverrideAssetsContext.h"
#include "ToolMenuSection.h"
#include "ToolMenu.h"
#include "Animation/AnimComposite.h"
#include "Kismet2/CompilerResultsLog.h"
#include "AnimGraph/Public/AnimGraphCommands.h"

#define LOCTEXT_NAMESPACE "UAnimGraphNode_DistanceMatchPlayer"

UGraphNode_SeuquenceEvluator_DM::UGraphNode_SeuquenceEvluator_DM(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText UGraphNode_SeuquenceEvluator_DM::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	UEdGraphPin* SequencePin = FindPin(GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_SequenceEvaluator_DM, Sequence));
	return GetNodeTitleHelper(TitleType, SequencePin, LOCTEXT("PlayerDesc", "Sequence Evaluator"));
}

FSlateIcon UGraphNode_SeuquenceEvluator_DM::GetIconAndTint(FLinearColor& OutColor) const
{
	return FSlateIcon("EditorStyle", "ClassIcon.AnimSequence");
}

FText UGraphNode_SeuquenceEvluator_DM::GetMenuCategory() const
{
	return FText::FromString("Distance Matching");
}

void UGraphNode_SeuquenceEvluator_DM::ValidateAnimNodeDuringCompilation(USkeleton* ForSkeleton,
	FCompilerResultsLog& MessageLog)
{
	UAnimGraphNode_AssetPlayerBase::ValidateAnimNodeDuringCompilation(ForSkeleton, MessageLog);

	ValidateAnimNodeDuringCompilationHelper(ForSkeleton, MessageLog, MyNode.GetSequence(), UAnimSequenceBase::StaticClass(), FindPin(GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_SequenceEvaluator_DM, Sequence)), GET_MEMBER_NAME_CHECKED(FAnimNode_SequenceEvaluator_DM, Sequence));
}

void UGraphNode_SeuquenceEvluator_DM::PreloadRequiredAssets()
{
	UAnimGraphNode_AssetPlayerBase	::PreloadRequiredAssets();
	PreloadObject(MyNode.GetSequence());
}

void UGraphNode_SeuquenceEvluator_DM::BakeDataDuringCompilation(FCompilerResultsLog& MessageLog)
{
	UAnimBlueprint* AnimBlueprint = GetAnimBlueprint();
	AnimBlueprint->FindOrAddGroup(MyNode.GetGroupName());
}

bool UGraphNode_SeuquenceEvluator_DM::DoesSupportTimeForTransitionGetter() const
{
	return true;
}

UAnimationAsset* UGraphNode_SeuquenceEvluator_DM::GetAnimationAsset() const
{
	UAnimSequenceBase* Sequence = MyNode.GetSequence();
	UEdGraphPin* SequencePin = FindPin(GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_SequenceEvaluator_DM, Sequence));
	if (SequencePin != nullptr && Sequence == nullptr)
	{
		Sequence = Cast<UAnimSequenceBase>(SequencePin->DefaultObject);
	}

	return Sequence;
}

const TCHAR* UGraphNode_SeuquenceEvluator_DM::GetTimePropertyName() const
{
	return TEXT("ExplicitTime");
}

UScriptStruct* UGraphNode_SeuquenceEvluator_DM::GetTimePropertyStruct() const
{
	return FAnimNode_SequenceEvaluator_DM::StaticStruct();
}

void UGraphNode_SeuquenceEvluator_DM::GetAllAnimationSequencesReferred(TArray<UAnimationAsset*>& AnimationAssets) const
{
	if(MyNode.GetSequence())
	{
		HandleAnimReferenceCollection(MyNode.Sequence, AnimationAssets);
	}
}

void UGraphNode_SeuquenceEvluator_DM::ReplaceReferredAnimations(
	const TMap<UAnimationAsset*, UAnimationAsset*>& AnimAssetReplacementMap)
{
	HandleAnimReferenceReplacement(MyNode.Sequence, AnimAssetReplacementMap);
}

EAnimAssetHandlerType UGraphNode_SeuquenceEvluator_DM::SupportsAssetClass(const UClass* AssetClass) const
{
	if (AssetClass->IsChildOf(UAnimSequence::StaticClass()) || AssetClass->IsChildOf(UAnimComposite::StaticClass()))
	{
		return EAnimAssetHandlerType::Supported;
	}
	else
	{
		return EAnimAssetHandlerType::NotSupported;
	}
}

void UGraphNode_SeuquenceEvluator_DM::OnOverrideAssets(IAnimBlueprintNodeOverrideAssetsContext& InContext) const
{
	if(InContext.GetAssets().Num() > 0)
	{
		if (UAnimSequenceBase* Sequence = Cast<UAnimSequenceBase>(InContext.GetAssets()[0]))
		{
			FAnimNode_SequenceEvaluator_DM& AnimNode = InContext.GetAnimNode<FAnimNode_SequenceEvaluator_DM>();
			AnimNode.SetSequence(Sequence);
		}
	}
}

void UGraphNode_SeuquenceEvluator_DM::GetNodeContextMenuActions(UToolMenu* Menu,
	UGraphNodeContextMenuContext* Context) const
{
	if (!Context->bIsDebugging)
	{
		// add an option to convert to a regular sequence player
		{
			FToolMenuSection& Section = Menu->AddSection("AnimGraphNodeSequenceEvaluator", LOCTEXT("SequenceEvaluatorHeading", "Sequence Evaluator"));
			Section.AddMenuEntry(FAnimGraphCommands::Get().OpenRelatedAsset);
			Section.AddMenuEntry(FAnimGraphCommands::Get().ConvertToSeqPlayer);
		}
	}
}

void UGraphNode_SeuquenceEvluator_DM::GetMenuActions(FBlueprintActionDatabaseRegistrar& InActionRegistrar) const
{
	GetMenuActionsHelper(
		InActionRegistrar,
		GetClass(),
		{ UAnimSequence::StaticClass() },
		{ },
		[](const FAssetData& InAssetData, UClass* InClass)
		{
			if(InAssetData.IsValid())
			{
				const FString TagValue = InAssetData.GetTagValueRef<FString>(GET_MEMBER_NAME_CHECKED(UAnimSequence, AdditiveAnimType));
				if(const bool bKnownToBeAdditive = (!TagValue.IsEmpty() && !TagValue.Equals(TEXT("AAT_None"))))
				{
					return FText::Format(LOCTEXT("MenuDescFormatAdditive", "Evaluate '{0}' (additive)"), FText::FromName(InAssetData.AssetName));
				}
				else
				{
					return FText::Format(LOCTEXT("MenuDescFormat", "Evaluate '{0}'"), FText::FromName(InAssetData.AssetName));
				}
			}
			else
			{
				return LOCTEXT("MenuDesc", "Sequence Evaluator");
			}
		},
		[](const FAssetData& InAssetData, UClass* InClass)
		{
			if(InAssetData.IsValid())
			{
				const FString TagValue = InAssetData.GetTagValueRef<FString>(GET_MEMBER_NAME_CHECKED(UAnimSequence, AdditiveAnimType));
				if(const bool bKnownToBeAdditive = (!TagValue.IsEmpty() && !TagValue.Equals(TEXT("AAT_None"))))
				{
					return FText::Format(LOCTEXT("MenuDescTooltipFormat", "Evaluate (additive)\n'{0}'"), FText::FromName(InAssetData.ObjectPath));
				}
				else
				{
					return FText::Format(LOCTEXT("MenuDescTooltipFormat", "Evaluate\n'{0}'"), FText::FromName(InAssetData.ObjectPath));
				}
			}
			else
			{
				return LOCTEXT("MenuDescTooltip", "Sequence Evaluator");
			}
		},
		[](UEdGraphNode* InNewNode, bool bInIsTemplateNode, const FAssetData InAssetData)
		{
			UAnimGraphNode_AssetPlayerBase::SetupNewNode(InNewNode, bInIsTemplateNode, InAssetData);
		});
}

void UGraphNode_SeuquenceEvluator_DM::SetAnimationAsset(UAnimationAsset* Asset)
{
	if (UAnimSequenceBase* Seq =  Cast<UAnimSequence>(Asset))
	{
		MyNode.SetSequence(Seq);
	}
}


#undef LOCTEXT_NAMESPACE
