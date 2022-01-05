// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_SequenceEvaluator.h"
#include "AnimNode_SequenceEvaluator_DM.generated.h"

/**
 * 
 */
USTRUCT(BlueprintInternalUseOnly)
struct  VANIMNODE_API FAnimNode_SequenceEvaluator_DM: public FAnimNode_SequenceEvaluatorBase
{
	GENERATED_BODY()
	friend class UAnimGraphNode_SequenceEvaluator_DM;
public:
#if WITH_EDITORONLY_DATA
	// The group name (NAME_None if it is not part of any group)
	UPROPERTY(EditAnywhere, Category=Sync, meta=(FoldProperty))
	FName GroupName = NAME_None;

	// The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)
	UPROPERTY(EditAnywhere, Category=Sync, meta=(FoldProperty))
	TEnumAsByte<EAnimGroupRole::Type> GroupRole = EAnimGroupRole::CanBeLeader;

	// How synchronization is determined
	UPROPERTY(EditAnywhere, Category=Sync, meta=(FoldProperty))
	EAnimSyncMethod Method = EAnimSyncMethod::DoNotSync;

	// If true, "Relevant anim" nodes that look for the highest weighted animation in a state will ignore this node
	UPROPERTY(EditAnywhere, Category=Relevancy, meta=(FoldProperty, PinHiddenByDefault))
	bool bIgnoreForRelevancyTest = false;
	
	// The animation sequence asset to evaluate
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinHiddenByDefault, FoldProperty))
	TObjectPtr<UAnimSequenceBase> Sequence = nullptr;

	// The time at which to evaluate the associated sequence
	UPROPERTY(EditAnywhere, Category=Settings, meta=(PinShownByDefault, FoldProperty))
	float ExplicitTime = 0.0f;

	/** This only works if bTeleportToExplicitTime is false OR this node is set to use SyncGroup */
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinHiddenByDefault, FoldProperty))
	bool bShouldLoop = true;

	/** If true, teleport to explicit time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)
	If false, will advance time (will trigger notifies, extract root motion if applicable, etc.)
	Note: using a sync group forces advancing time regardless of what this option is set to. */
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinHiddenByDefault, FoldProperty))
	bool bTeleportToExplicitTime = true;

	/** What to do when SequenceEvaluator is reinitialized */
	UPROPERTY(EditAnywhere, Category = Settings, meta=(DisplayAfter="StartPosition", FoldProperty))
	TEnumAsByte<ESequenceEvalReinit::Type> ReinitializationBehavior = ESequenceEvalReinit::ExplicitTime;

	// The start up position, it only applies when ReinitializationBehavior == StartPosition. Only used when bTeleportToExplicitTime is false.
	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinHiddenByDefault, FoldProperty))
	float StartPosition = 0.0f;
#endif

public:
	// FAnimNode_SequenceEvaluatorBase interface
	virtual bool SetSequence(UAnimSequenceBase* InSequence) override;
	virtual UAnimSequenceBase* GetSequence() const override;
	virtual float GetExplicitTime() const override;
	virtual bool SetExplicitTime(float InTime) override;
	virtual bool GetShouldLoop() const override;
	virtual bool GetTeleportToExplicitTime() const override;
	virtual TEnumAsByte<ESequenceEvalReinit::Type> GetReinitializationBehavior() const override;
	virtual float GetStartPosition() const override;

	// FAnimNode_AssetPlayerBase interface
	virtual FName GetGroupName() const override;
	virtual EAnimGroupRole::Type GetGroupRole() const override;
	virtual EAnimSyncMethod GetGroupMethod() const override;
	virtual bool GetIgnoreForRelevancyTest() const override;
	virtual bool SetGroupName(FName InGroupName) override;
	virtual bool SetGroupRole(EAnimGroupRole::Type InRole) override;
	virtual bool SetGroupMethod(EAnimSyncMethod InMethod) override;
	virtual bool SetIgnoreForRelevancyTest(bool bInIgnoreForRelevancyTest) override;
	
};
