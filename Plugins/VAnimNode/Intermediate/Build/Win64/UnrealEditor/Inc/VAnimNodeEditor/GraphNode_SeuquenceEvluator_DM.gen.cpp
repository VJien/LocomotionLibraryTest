// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VAnimNodeEditor/Public/GraphNode/GraphNode_SeuquenceEvluator_DM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphNode_SeuquenceEvluator_DM() {}
// Cross Module References
	VANIMNODEEDITOR_API UClass* Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_NoRegister();
	VANIMNODEEDITOR_API UClass* Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SequenceEvaluator();
	UPackage* Z_Construct_UPackage__Script_VAnimNodeEditor();
	VANIMNODE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM();
// End Cross Module References
	void UGraphNode_SeuquenceEvluator_DM::StaticRegisterNativesUGraphNode_SeuquenceEvluator_DM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphNode_SeuquenceEvluator_DM);
	UClass* Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_NoRegister()
	{
		return UGraphNode_SeuquenceEvluator_DM::StaticClass();
	}
	struct Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SequenceEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_VAnimNodeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GraphNode/GraphNode_SeuquenceEvluator_DM.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GraphNode/GraphNode_SeuquenceEvluator_DM.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::NewProp_MyNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GraphNode/GraphNode_SeuquenceEvluator_DM.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::NewProp_MyNode = { "MyNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphNode_SeuquenceEvluator_DM, MyNode), Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_DM, METADATA_PARAMS(Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::NewProp_MyNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::NewProp_MyNode_MetaData)) }; // 3018300433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::NewProp_MyNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphNode_SeuquenceEvluator_DM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::ClassParams = {
		&UGraphNode_SeuquenceEvluator_DM::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM()
	{
		if (!Z_Registration_Info_UClass_UGraphNode_SeuquenceEvluator_DM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphNode_SeuquenceEvluator_DM.OuterSingleton, Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGraphNode_SeuquenceEvluator_DM.OuterSingleton;
	}
	template<> VANIMNODEEDITOR_API UClass* StaticClass<UGraphNode_SeuquenceEvluator_DM>()
	{
		return UGraphNode_SeuquenceEvluator_DM::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphNode_SeuquenceEvluator_DM);
	struct Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNodeEditor_Public_GraphNode_GraphNode_SeuquenceEvluator_DM_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNodeEditor_Public_GraphNode_GraphNode_SeuquenceEvluator_DM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGraphNode_SeuquenceEvluator_DM, UGraphNode_SeuquenceEvluator_DM::StaticClass, TEXT("UGraphNode_SeuquenceEvluator_DM"), &Z_Registration_Info_UClass_UGraphNode_SeuquenceEvluator_DM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphNode_SeuquenceEvluator_DM), 1840671520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNodeEditor_Public_GraphNode_GraphNode_SeuquenceEvluator_DM_h_952789989(TEXT("/Script/VAnimNodeEditor"),
		Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNodeEditor_Public_GraphNode_GraphNode_SeuquenceEvluator_DM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test01_Plugins_VAnimNode_Source_VAnimNodeEditor_Public_GraphNode_GraphNode_SeuquenceEvluator_DM_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
