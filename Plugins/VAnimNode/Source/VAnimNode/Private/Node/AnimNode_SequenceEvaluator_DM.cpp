// Fill out your copyright notice in the Description page of Project Settings.


#include "Node/AnimNode_SequenceEvaluator_DM.h"

bool FAnimNode_SequenceEvaluator_DM::SetSequence(UAnimSequenceBase* InSequence)
{
	#if WITH_EDITORONLY_DATA
		Sequence = InSequence;
		GET_MUTABLE_ANIM_NODE_DATA(TObjectPtr<UAnimSequenceBase>, Sequence) = InSequence;
	#endif

		if(TObjectPtr<UAnimSequenceBase>* SequencePtr = GET_INSTANCE_ANIM_NODE_DATA_PTR(TObjectPtr<UAnimSequenceBase>, Sequence))
		{
			*SequencePtr = InSequence;
			return true;
		}

		return false;
}

UAnimSequenceBase* FAnimNode_SequenceEvaluator_DM::GetSequence() const
{
	return GET_ANIM_NODE_DATA(TObjectPtr<UAnimSequenceBase>, Sequence);
}

float FAnimNode_SequenceEvaluator_DM::GetExplicitTime() const
{
	return GET_ANIM_NODE_DATA(float, ExplicitTime);
}

bool FAnimNode_SequenceEvaluator_DM::SetExplicitTime(float InTime)
{
#if WITH_EDITORONLY_DATA
	ExplicitTime = InTime;
#endif

	if (float* ExplicitTimePtr = GET_INSTANCE_ANIM_NODE_DATA_PTR(float, ExplicitTime))
	{
		*ExplicitTimePtr = InTime;
		return true;
	}

	return false;
}

bool FAnimNode_SequenceEvaluator_DM::GetShouldLoop() const
{
	return GET_ANIM_NODE_DATA(bool, bShouldLoop);
}

bool FAnimNode_SequenceEvaluator_DM::GetTeleportToExplicitTime() const
{
	return GET_ANIM_NODE_DATA(bool, bTeleportToExplicitTime);
}

TEnumAsByte<ESequenceEvalReinit::Type> FAnimNode_SequenceEvaluator_DM::GetReinitializationBehavior() const
{
	return GET_ANIM_NODE_DATA(TEnumAsByte<ESequenceEvalReinit::Type>, ReinitializationBehavior);
}

float FAnimNode_SequenceEvaluator_DM::GetStartPosition() const
{
	return GET_ANIM_NODE_DATA(float, StartPosition);
}

FName FAnimNode_SequenceEvaluator_DM::GetGroupName() const
{
	return GET_ANIM_NODE_DATA(FName, GroupName);
}

EAnimGroupRole::Type FAnimNode_SequenceEvaluator_DM::GetGroupRole() const
{
	return GET_ANIM_NODE_DATA(TEnumAsByte<EAnimGroupRole::Type>, GroupRole);
}

EAnimSyncMethod FAnimNode_SequenceEvaluator_DM::GetGroupMethod() const
{
	return GET_ANIM_NODE_DATA(EAnimSyncMethod, Method);
}

bool FAnimNode_SequenceEvaluator_DM::GetIgnoreForRelevancyTest() const
{
	return GET_ANIM_NODE_DATA(bool, bIgnoreForRelevancyTest);
}

bool FAnimNode_SequenceEvaluator_DM::SetGroupName(FName InGroupName)
{
#if WITH_EDITORONLY_DATA	
	GroupName = InGroupName;
#endif

	if(FName* GroupNamePtr = GET_INSTANCE_ANIM_NODE_DATA_PTR(FName, GroupName))
	{
		*GroupNamePtr = InGroupName;
		return true;
	}

	return false;
}

bool FAnimNode_SequenceEvaluator_DM::SetGroupRole(EAnimGroupRole::Type InRole)
{
#if WITH_EDITORONLY_DATA
	GroupRole = InRole;
#endif

	if(TEnumAsByte<EAnimGroupRole::Type>* GroupRolePtr = GET_INSTANCE_ANIM_NODE_DATA_PTR(TEnumAsByte<EAnimGroupRole::Type>, GroupRole))
	{
		*GroupRolePtr = InRole;
		return true;
	}

	return false;	
}

bool FAnimNode_SequenceEvaluator_DM::SetGroupMethod(EAnimSyncMethod InMethod)
{
#if WITH_EDITORONLY_DATA
	Method = InMethod;
#endif

	if(EAnimSyncMethod* MethodPtr = GET_INSTANCE_ANIM_NODE_DATA_PTR(EAnimSyncMethod, Method))
	{
		*MethodPtr = InMethod;
		return true;
	}

	return false;
}

bool FAnimNode_SequenceEvaluator_DM::SetIgnoreForRelevancyTest(bool bInIgnoreForRelevancyTest)
{
#if WITH_EDITORONLY_DATA
	bIgnoreForRelevancyTest = bInIgnoreForRelevancyTest;
#endif

	if(bool* bIgnoreForRelevancyTestPtr = GET_INSTANCE_ANIM_NODE_DATA_PTR(bool, bIgnoreForRelevancyTest))
	{
		*bIgnoreForRelevancyTestPtr = bInIgnoreForRelevancyTest;
		return true;
	}

	return false;
}
