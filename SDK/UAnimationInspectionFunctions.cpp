#include "EBoneEvaluationRootMode.hpp"
#include "FBlendSampleData.hpp"
#include "FTransform.hpp"
#include "UAnimSequence.hpp"
#include "UAnimSequenceBase.hpp"
#include "UAnimationInspectionFunctions.hpp"
#include "UBlendSpaceBase.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "USkeletalMesh.hpp"
UAnimationInspectionFunctions* UAnimationInspectionFunctions::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationInspectionFunctions");
    return (UAnimationInspectionFunctions*)res;
}
bool UAnimationInspectionFunctions::SetBlendSpaceFraction(UBlendSpaceBase* BlendSpace, float Fraction, TArray<FBlendSampleData>& OutSampleData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.SetBlendSpaceFraction"));
    struct Params_SetBlendSpaceFraction {
        UBlendSpaceBase* BlendSpace; // 0x0
        float Fraction; // 0x8
        char pad_c[0x4];
        TArray<FBlendSampleData> OutSampleData; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SetBlendSpaceFraction params{};
    params.BlendSpace = (UBlendSpaceBase*)BlendSpace;
    params.Fraction = (float)Fraction;
    params.OutSampleData = (TArray<FBlendSampleData>)OutSampleData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutSampleData = params.OutSampleData;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetSocketsInAnimationSpaceFromClip(USkeletalMesh* SkeletalMesh, UAnimSequence* AnimationAsset, float EvaluationTime, TArray<FName>& SocketNameArray, TArray<FTransform>& TransformArray, int32_t LoopCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetSocketsInAnimationSpaceFromClip"));
    struct Params_GetSocketsInAnimationSpaceFromClip {
        USkeletalMesh* SkeletalMesh; // 0x0
        UAnimSequence* AnimationAsset; // 0x8
        float EvaluationTime; // 0x10
        char pad_14[0x4];
        TArray<FName> SocketNameArray; // 0x18
        TArray<FTransform> TransformArray; // 0x28
        int32_t LoopCount; // 0x38
        bool ReturnValue; // 0x3c
    }; // Size: 0x3d
    Params_GetSocketsInAnimationSpaceFromClip params{};
    params.SkeletalMesh = (USkeletalMesh*)SkeletalMesh;
    params.AnimationAsset = (UAnimSequence*)AnimationAsset;
    params.EvaluationTime = (float)EvaluationTime;
    params.SocketNameArray = (TArray<FName>)SocketNameArray;
    params.TransformArray = (TArray<FTransform>)TransformArray;
    params.LoopCount = (int32_t)LoopCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TransformArray = params.TransformArray;
    SocketNameArray = params.SocketNameArray;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetSocketInAnimationSpaceFromClip(USkeletalMesh* SkeletalMesh, UAnimSequence* AnimationAsset, float EvaluationTime, FName SocketName, FTransform& Transform, int32_t LoopCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetSocketInAnimationSpaceFromClip"));
    struct Params_GetSocketInAnimationSpaceFromClip {
        USkeletalMesh* SkeletalMesh; // 0x0
        UAnimSequence* AnimationAsset; // 0x8
        float EvaluationTime; // 0x10
        FName SocketName; // 0x14
        char pad_1c[0x4];
        FTransform Transform; // 0x20
        int32_t LoopCount; // 0x50
        bool ReturnValue; // 0x54
    }; // Size: 0x55
    Params_GetSocketInAnimationSpaceFromClip params{};
    params.SkeletalMesh = (USkeletalMesh*)SkeletalMesh;
    params.AnimationAsset = (UAnimSequence*)AnimationAsset;
    params.EvaluationTime = (float)EvaluationTime;
    params.SocketName = (FName)SocketName;
    params.Transform = (FTransform)Transform;
    params.LoopCount = (int32_t)LoopCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetBonesInAnimationSpaceFromClip(UAnimSequence* AnimationAsset, float EvaluationTime, TArray<FName>& BoneNameArray, TArray<FTransform>& TransformArray, int32_t LoopCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetBonesInAnimationSpaceFromClip"));
    struct Params_GetBonesInAnimationSpaceFromClip {
        UAnimSequence* AnimationAsset; // 0x0
        float EvaluationTime; // 0x8
        char pad_c[0x4];
        TArray<FName> BoneNameArray; // 0x10
        TArray<FTransform> TransformArray; // 0x20
        int32_t LoopCount; // 0x30
        bool ReturnValue; // 0x34
    }; // Size: 0x35
    Params_GetBonesInAnimationSpaceFromClip params{};
    params.AnimationAsset = (UAnimSequence*)AnimationAsset;
    params.EvaluationTime = (float)EvaluationTime;
    params.BoneNameArray = (TArray<FName>)BoneNameArray;
    params.TransformArray = (TArray<FTransform>)TransformArray;
    params.LoopCount = (int32_t)LoopCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BoneNameArray = params.BoneNameArray;
    TransformArray = params.TransformArray;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetRootInAnimationSpaceFromClip(UAnimSequenceBase* AnimationAsset, float EvaluationTime, FTransform& Transform, int32_t LoopCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetRootInAnimationSpaceFromClip"));
    struct Params_GetRootInAnimationSpaceFromClip {
        UAnimSequenceBase* AnimationAsset; // 0x0
        float EvaluationTime; // 0x8
        char pad_c[0x4];
        FTransform Transform; // 0x10
        int32_t LoopCount; // 0x40
        bool ReturnValue; // 0x44
    }; // Size: 0x45
    Params_GetRootInAnimationSpaceFromClip params{};
    params.AnimationAsset = (UAnimSequenceBase*)AnimationAsset;
    params.EvaluationTime = (float)EvaluationTime;
    params.Transform = (FTransform)Transform;
    params.LoopCount = (int32_t)LoopCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetRootInAnimationSpaceFromBlendSpace(UBlendSpaceBase* BlendSpace, TArray<FBlendSampleData>& SampleData, FTransform& Transform, int32_t LoopCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetRootInAnimationSpaceFromBlendSpace"));
    struct Params_GetRootInAnimationSpaceFromBlendSpace {
        UBlendSpaceBase* BlendSpace; // 0x0
        TArray<FBlendSampleData> SampleData; // 0x8
        char pad_18[0x8];
        FTransform Transform; // 0x20
        int32_t LoopCount; // 0x50
        bool ReturnValue; // 0x54
    }; // Size: 0x55
    Params_GetRootInAnimationSpaceFromBlendSpace params{};
    params.BlendSpace = (UBlendSpaceBase*)BlendSpace;
    params.SampleData = (TArray<FBlendSampleData>)SampleData;
    params.Transform = (FTransform)Transform;
    params.LoopCount = (int32_t)LoopCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SampleData = params.SampleData;
    Transform = params.Transform;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetBonesInParentSpaceFromClip(UAnimSequenceBase* AnimationAsset, float EvaluationTime, TArray<FName>& BoneNameArray, TArray<FTransform>& TransformArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetBonesInParentSpaceFromClip"));
    struct Params_GetBonesInParentSpaceFromClip {
        UAnimSequenceBase* AnimationAsset; // 0x0
        float EvaluationTime; // 0x8
        char pad_c[0x4];
        TArray<FName> BoneNameArray; // 0x10
        TArray<FTransform> TransformArray; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetBonesInParentSpaceFromClip params{};
    params.AnimationAsset = (UAnimSequenceBase*)AnimationAsset;
    params.EvaluationTime = (float)EvaluationTime;
    params.BoneNameArray = (TArray<FName>)BoneNameArray;
    params.TransformArray = (TArray<FTransform>)TransformArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TransformArray = params.TransformArray;
    BoneNameArray = params.BoneNameArray;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetComponentInWorldSpaceFromAlignedRoot(UAnimSequence* AnimationAsset, FTransform AnimationInWorldSpace, FTransform RootInAnimationSpace, FTransform& Transform, int32_t LoopCount, EBoneEvaluationRootMode RootModeSetting) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetComponentInWorldSpaceFromAlignedRoot"));
    struct Params_GetComponentInWorldSpaceFromAlignedRoot {
        UAnimSequence* AnimationAsset; // 0x0
        char pad_8[0x8];
        FTransform AnimationInWorldSpace; // 0x10
        FTransform RootInAnimationSpace; // 0x40
        FTransform Transform; // 0x70
        int32_t LoopCount; // 0xa0
        EBoneEvaluationRootMode RootModeSetting; // 0xa4
        bool ReturnValue; // 0xa5
    }; // Size: 0xa6
    Params_GetComponentInWorldSpaceFromAlignedRoot params{};
    params.AnimationAsset = (UAnimSequence*)AnimationAsset;
    params.AnimationInWorldSpace = (FTransform)AnimationInWorldSpace;
    params.RootInAnimationSpace = (FTransform)RootInAnimationSpace;
    params.Transform = (FTransform)Transform;
    params.LoopCount = (int32_t)LoopCount;
    params.RootModeSetting = (EBoneEvaluationRootMode)RootModeSetting;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetBonesInParentSpaceFromBlendSpace(UBlendSpaceBase* BlendSpaceAsset, float EvaluationTime, float ParameterX, float ParameterY, TArray<FName>& BoneNameArray, TArray<FTransform>& TransformArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetBonesInParentSpaceFromBlendSpace"));
    struct Params_GetBonesInParentSpaceFromBlendSpace {
        UBlendSpaceBase* BlendSpaceAsset; // 0x0
        float EvaluationTime; // 0x8
        float ParameterX; // 0xc
        float ParameterY; // 0x10
        char pad_14[0x4];
        TArray<FName> BoneNameArray; // 0x18
        TArray<FTransform> TransformArray; // 0x28
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_GetBonesInParentSpaceFromBlendSpace params{};
    params.BlendSpaceAsset = (UBlendSpaceBase*)BlendSpaceAsset;
    params.EvaluationTime = (float)EvaluationTime;
    params.ParameterX = (float)ParameterX;
    params.ParameterY = (float)ParameterY;
    params.BoneNameArray = (TArray<FName>)BoneNameArray;
    params.TransformArray = (TArray<FTransform>)TransformArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BoneNameArray = params.BoneNameArray;
    TransformArray = params.TransformArray;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetBoneInParentSpaceFromClip(UAnimSequenceBase* AnimationAsset, float EvaluationTime, FName BoneName, FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetBoneInParentSpaceFromClip"));
    struct Params_GetBoneInParentSpaceFromClip {
        UAnimSequenceBase* AnimationAsset; // 0x0
        float EvaluationTime; // 0x8
        FName BoneName; // 0xc
        char pad_14[0xc];
        FTransform Transform; // 0x20
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_GetBoneInParentSpaceFromClip params{};
    params.AnimationAsset = (UAnimSequenceBase*)AnimationAsset;
    params.EvaluationTime = (float)EvaluationTime;
    params.BoneName = (FName)BoneName;
    params.Transform = (FTransform)Transform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetBoneInParentSpaceFromBlendSpace(UBlendSpaceBase* BlendSpaceAsset, float EvaluationTime, float ParameterX, float ParameterY, FName BoneName, FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetBoneInParentSpaceFromBlendSpace"));
    struct Params_GetBoneInParentSpaceFromBlendSpace {
        UBlendSpaceBase* BlendSpaceAsset; // 0x0
        float EvaluationTime; // 0x8
        float ParameterX; // 0xc
        float ParameterY; // 0x10
        FName BoneName; // 0x14
        char pad_1c[0x4];
        FTransform Transform; // 0x20
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_GetBoneInParentSpaceFromBlendSpace params{};
    params.BlendSpaceAsset = (UBlendSpaceBase*)BlendSpaceAsset;
    params.EvaluationTime = (float)EvaluationTime;
    params.ParameterX = (float)ParameterX;
    params.ParameterY = (float)ParameterY;
    params.BoneName = (FName)BoneName;
    params.Transform = (FTransform)Transform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    return (bool)params.ReturnValue;
}
bool UAnimationInspectionFunctions::GetBoneInAnimationSpaceFromClip(UAnimSequence* AnimationAsset, float EvaluationTime, FName BoneName, FTransform& Transform, int32_t LoopCount, EBoneEvaluationRootMode RootModeSetting) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetBoneInAnimationSpaceFromClip"));
    struct Params_GetBoneInAnimationSpaceFromClip {
        UAnimSequence* AnimationAsset; // 0x0
        float EvaluationTime; // 0x8
        FName BoneName; // 0xc
        char pad_14[0xc];
        FTransform Transform; // 0x20
        int32_t LoopCount; // 0x50
        EBoneEvaluationRootMode RootModeSetting; // 0x54
        bool ReturnValue; // 0x55
    }; // Size: 0x56
    Params_GetBoneInAnimationSpaceFromClip params{};
    params.AnimationAsset = (UAnimSequence*)AnimationAsset;
    params.EvaluationTime = (float)EvaluationTime;
    params.BoneName = (FName)BoneName;
    params.Transform = (FTransform)Transform;
    params.LoopCount = (int32_t)LoopCount;
    params.RootModeSetting = (EBoneEvaluationRootMode)RootModeSetting;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    return (bool)params.ReturnValue;
}
float UAnimationInspectionFunctions::GetBlendSpaceDuration(UBlendSpaceBase* BlendSpace, TArray<FBlendSampleData>& SampleData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationInspectionFunctions.GetBlendSpaceDuration"));
    struct Params_GetBlendSpaceDuration {
        UBlendSpaceBase* BlendSpace; // 0x0
        TArray<FBlendSampleData> SampleData; // 0x8
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetBlendSpaceDuration params{};
    params.BlendSpace = (UBlendSpaceBase*)BlendSpace;
    params.SampleData = (TArray<FBlendSampleData>)SampleData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SampleData = params.SampleData;
    return (float)params.ReturnValue;
}
