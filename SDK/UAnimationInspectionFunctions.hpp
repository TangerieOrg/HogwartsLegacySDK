#pragma once
#include <cstdint>
#include "EBoneEvaluationRootMode.hpp"
#include "FBlendSampleData.hpp"
#include "FTransform.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UBlendSpaceBase;
class USkeletalMesh;
class UAnimSequenceBase;
class UAnimSequence;
#pragma pack(push, 1)
class UAnimationInspectionFunctions : public UBlueprintFunctionLibrary {
public:
    static UAnimationInspectionFunctions* StaticClass();
    static bool SetBlendSpaceFraction(UBlendSpaceBase* BlendSpace, float Fraction, TArray<FBlendSampleData>& OutSampleData);
    static bool GetSocketsInAnimationSpaceFromClip(USkeletalMesh* SkeletalMesh, UAnimSequence* AnimationAsset, float EvaluationTime, TArray<FName>& SocketNameArray, TArray<FTransform>& TransformArray, int32_t LoopCount);
    static bool GetSocketInAnimationSpaceFromClip(USkeletalMesh* SkeletalMesh, UAnimSequence* AnimationAsset, float EvaluationTime, FName SocketName, FTransform& Transform, int32_t LoopCount);
    static bool GetRootInAnimationSpaceFromClip(UAnimSequenceBase* AnimationAsset, float EvaluationTime, FTransform& Transform, int32_t LoopCount);
    static bool GetRootInAnimationSpaceFromBlendSpace(UBlendSpaceBase* BlendSpace, TArray<FBlendSampleData>& SampleData, FTransform& Transform, int32_t LoopCount);
    static bool GetComponentInWorldSpaceFromAlignedRoot(UAnimSequence* AnimationAsset, FTransform AnimationInWorldSpace, FTransform RootInAnimationSpace, FTransform& Transform, int32_t LoopCount, EBoneEvaluationRootMode RootModeSetting);
    static bool GetBonesInParentSpaceFromClip(UAnimSequenceBase* AnimationAsset, float EvaluationTime, TArray<FName>& BoneNameArray, TArray<FTransform>& TransformArray);
    static bool GetBonesInParentSpaceFromBlendSpace(UBlendSpaceBase* BlendSpaceAsset, float EvaluationTime, float ParameterX, float ParameterY, TArray<FName>& BoneNameArray, TArray<FTransform>& TransformArray);
    static bool GetBonesInAnimationSpaceFromClip(UAnimSequence* AnimationAsset, float EvaluationTime, TArray<FName>& BoneNameArray, TArray<FTransform>& TransformArray, int32_t LoopCount);
    static bool GetBoneInParentSpaceFromClip(UAnimSequenceBase* AnimationAsset, float EvaluationTime, FName BoneName, FTransform& Transform);
    static bool GetBoneInParentSpaceFromBlendSpace(UBlendSpaceBase* BlendSpaceAsset, float EvaluationTime, float ParameterX, float ParameterY, FName BoneName, FTransform& Transform);
    static bool GetBoneInAnimationSpaceFromClip(UAnimSequence* AnimationAsset, float EvaluationTime, FName BoneName, FTransform& Transform, int32_t LoopCount, EBoneEvaluationRootMode RootModeSetting);
    static float GetBlendSpaceDuration(UBlendSpaceBase* BlendSpace, TArray<FBlendSampleData>& SampleData);
}; // Size: 0x28
#pragma pack(pop)
