// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VAnimNode/Public/Node/AnimNode_SequenceEvaluator_DM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SequenceEvaluator_DM() {}
// Cross Module References
	VANIMNODE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM();
	UPackage* Z_Construct_UPackage__Script_VAnimNode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SequenceEvaluator_DM>() == std::is_polymorphic<FAnimNode_SequenceEvaluatorBase>(), "USTRUCT FAnimNode_SequenceEvaluator_DM cannot be polymorphic unless super FAnimNode_SequenceEvaluatorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_DM;
class UScriptStruct* FAnimNode_SequenceEvaluator_DM::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_DM.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_DM.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM, Z_Construct_UPackage__Script_VAnimNode(), TEXT("AnimNode_SequenceEvaluator_DM"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_DM.OuterSingleton;
}
template<> VANIMNODE_API UScriptStruct* StaticStruct<FAnimNode_SequenceEvaluator_DM>()
{
	return FAnimNode_SequenceEvaluator_DM::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[];
#endif
		static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplicitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLoop_MetaData[];
#endif
		static void NewProp_bShouldLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportToExplicitTime_MetaData[];
#endif
		static void NewProp_bTeleportToExplicitTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportToExplicitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReinitializationBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReinitializationBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequenceEvaluator_DM>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name (NAME_None if it is not part of any group)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "ToolTip", "The group name (NAME_None if it is not part of any group)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_DM, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "ToolTip", "The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_DM, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupRole_MetaData)) }; // 3292049667
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How synchronization is determined\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "ToolTip", "How synchronization is determined" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_DM, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Method_MetaData)) }; // 4113553489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_SequenceEvaluator_DM*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator_DM), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bIgnoreForRelevancyTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bIgnoreForRelevancyTest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The animation sequence asset to evaluate\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to evaluate" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_DM, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ExplicitTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The time at which to evaluate the associated sequence\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The time at which to evaluate the associated sequence" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ExplicitTime = { "ExplicitTime", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_DM, ExplicitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ExplicitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ExplicitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bShouldLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** This only works if bTeleportToExplicitTime is false OR this node is set to use SyncGroup */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This only works if bTeleportToExplicitTime is false OR this node is set to use SyncGroup" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
	{
		((FAnimNode_SequenceEvaluator_DM*)Obj)->bShouldLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator_DM), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bShouldLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bShouldLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bTeleportToExplicitTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, teleport to explicit time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n\x09If false, will advance time (will trigger notifies, extract root motion if applicable, etc.)\n\x09Note: using a sync group forces advancing time regardless of what this option is set to. */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, teleport to explicit time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n      If false, will advance time (will trigger notifies, extract root motion if applicable, etc.)\n      Note: using a sync group forces advancing time regardless of what this option is set to." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bTeleportToExplicitTime_SetBit(void* Obj)
	{
		((FAnimNode_SequenceEvaluator_DM*)Obj)->bTeleportToExplicitTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bTeleportToExplicitTime = { "bTeleportToExplicitTime", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator_DM), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bTeleportToExplicitTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bTeleportToExplicitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bTeleportToExplicitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ReinitializationBehavior_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What to do when SequenceEvaluator is reinitialized */" },
		{ "DisplayAfter", "StartPosition" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "ToolTip", "What to do when SequenceEvaluator is reinitialized" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ReinitializationBehavior = { "ReinitializationBehavior", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_DM, ReinitializationBehavior), Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ReinitializationBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ReinitializationBehavior_MetaData)) }; // 654536455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start up position, it only applies when ReinitializationBehavior == StartPosition. Only used when bTeleportToExplicitTime is false.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Node/AnimNode_SequenceEvaluator_DM.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start up position, it only applies when ReinitializationBehavior == StartPosition. Only used when bTeleportToExplicitTime is false." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator_DM, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_StartPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_GroupRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bIgnoreForRelevancyTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ExplicitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bShouldLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_bTeleportToExplicitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_ReinitializationBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewProp_StartPosition,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VAnimNode,
		Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase,
		&NewStructOps,
		"AnimNode_SequenceEvaluator_DM",
		sizeof(FAnimNode_SequenceEvaluator_DM),
		alignof(FAnimNode_SequenceEvaluator_DM),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_DM.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_DM.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_DM.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNode_Public_Node_AnimNode_SequenceEvaluator_DM_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNode_Public_Node_AnimNode_SequenceEvaluator_DM_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SequenceEvaluator_DM::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM_Statics::NewStructOps, TEXT("AnimNode_SequenceEvaluator_DM"), &Z_Registration_Info_UScriptStruct_AnimNode_SequenceEvaluator_DM, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SequenceEvaluator_DM), 3018300433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNode_Public_Node_AnimNode_SequenceEvaluator_DM_h_1384716712(TEXT("/Script/VAnimNode"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNode_Public_Node_AnimNode_SequenceEvaluator_DM_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNode_Public_Node_AnimNode_SequenceEvaluator_DM_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
