#include "EEasingFuncType.hpp"
#include "ERelativeTransformSpace.hpp"
#include "FPositionHistory.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UKismetAnimationLibrary.hpp"
#include "USkeletalMeshComponent.hpp"
UKismetAnimationLibrary* UKismetAnimationLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimGraphRuntime.KismetAnimationLibrary");
    return (UKismetAnimationLibrary*)res;
}
float UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, FString LogPrefix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer"));
    struct Params_K2_EndProfilingTimer {
        bool bLog; // 0x0
        char pad_1[0x7];
        FString LogPrefix; // 0x8
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_K2_EndProfilingTimer params{};
    params.bLog = (bool)bLog;
    params.LogPrefix = (FString)LogPrefix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap"));
    struct Params_K2_MakePerlinNoiseAndRemap {
        float Value; // 0x0
        float RangeOutMin; // 0x4
        float RangeOutMax; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_K2_MakePerlinNoiseAndRemap params{};
    params.Value = (float)Value;
    params.RangeOutMin = (float)RangeOutMin;
    params.RangeOutMax = (float)RangeOutMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UKismetAnimationLibrary::K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK"));
    struct Params_K2_TwoBoneIK {
        FVector RootPos; // 0x0
        FVector JointPos; // 0xc
        FVector EndPos; // 0x18
        FVector JointTarget; // 0x24
        FVector Effector; // 0x30
        FVector OutJointPos; // 0x3c
        FVector OutEndPos; // 0x48
        bool bAllowStretching; // 0x54
        char pad_55[0x3];
        float StartStretchRatio; // 0x58
        float MaxStretchScale; // 0x5c
    }; // Size: 0x60
    Params_K2_TwoBoneIK params{};
    params.RootPos = (FVector)RootPos;
    params.JointPos = (FVector)JointPos;
    params.EndPos = (FVector)EndPos;
    params.JointTarget = (FVector)JointTarget;
    params.Effector = (FVector)Effector;
    params.OutJointPos = (FVector)OutJointPos;
    params.OutEndPos = (FVector)OutEndPos;
    params.bAllowStretching = (bool)bAllowStretching;
    params.StartStretchRatio = (float)StartStretchRatio;
    params.MaxStretchScale = (float)MaxStretchScale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RootPos = params.RootPos;
    OutEndPos = params.OutEndPos;
    EndPos = params.EndPos;
    JointPos = params.JointPos;
    JointTarget = params.JointTarget;
    Effector = params.Effector;
    OutJointPos = params.OutJointPos;
}
void UKismetAnimationLibrary::K2_StartProfilingTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer"));
    struct Params_K2_StartProfilingTimer {
    }; // Size: 0x0
    Params_K2_StartProfilingTimer params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap"));
    struct Params_K2_MakePerlinNoiseVectorAndRemap {
        float X; // 0x0
        float Y; // 0x4
        float Z; // 0x8
        float RangeOutMinX; // 0xc
        float RangeOutMaxX; // 0x10
        float RangeOutMinY; // 0x14
        float RangeOutMaxY; // 0x18
        float RangeOutMinZ; // 0x1c
        float RangeOutMaxZ; // 0x20
        FVector ReturnValue; // 0x24
    }; // Size: 0x30
    Params_K2_MakePerlinNoiseVectorAndRemap params{};
    params.X = (float)X;
    params.Y = (float)Y;
    params.Z = (float)Z;
    params.RangeOutMinX = (float)RangeOutMinX;
    params.RangeOutMaxX = (float)RangeOutMaxX;
    params.RangeOutMinY = (float)RangeOutMinY;
    params.RangeOutMaxY = (float)RangeOutMaxY;
    params.RangeOutMinZ = (float)RangeOutMinZ;
    params.RangeOutMaxZ = (float)RangeOutMaxZ;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FTransform UKismetAnimationLibrary::K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt"));
    struct Params_K2_LookAt {
        FTransform CurrentTransform; // 0x0
        FVector TargetPosition; // 0x30
        FVector LookAtVector; // 0x3c
        bool bUseUpVector; // 0x48
        char pad_49[0x3];
        FVector UpVector; // 0x4c
        float ClampConeInDegree; // 0x58
        char pad_5c[0x4];
        FTransform ReturnValue; // 0x60
    }; // Size: 0x90
    Params_K2_LookAt params{};
    params.CurrentTransform = (FTransform)CurrentTransform;
    params.TargetPosition = (FVector)TargetPosition;
    params.LookAtVector = (FVector)LookAtVector;
    params.bUseUpVector = (bool)bUseUpVector;
    params.UpVector = (FVector)UpVector;
    params.ClampConeInDegree = (float)ClampConeInDegree;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CurrentTransform = params.CurrentTransform;
    TargetPosition = params.TargetPosition;
    return (FTransform)params.ReturnValue;
}
float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(USkeletalMeshComponent* Component, FName SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, FName SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange"));
    struct Params_K2_DistanceBetweenTwoSocketsAndMapRange {
        USkeletalMeshComponent* Component; // 0x0
        FName SocketOrBoneNameA; // 0x8
        ERelativeTransformSpace SocketSpaceA; // 0x10
        char pad_11[0x3];
        FName SocketOrBoneNameB; // 0x14
        ERelativeTransformSpace SocketSpaceB; // 0x1c
        bool bRemapRange; // 0x1d
        char pad_1e[0x2];
        float InRangeMin; // 0x20
        float InRangeMax; // 0x24
        float OutRangeMin; // 0x28
        float OutRangeMax; // 0x2c
        float ReturnValue; // 0x30
    }; // Size: 0x34
    Params_K2_DistanceBetweenTwoSocketsAndMapRange params{};
    params.Component = (USkeletalMeshComponent*)Component;
    params.SocketOrBoneNameA = (FName)SocketOrBoneNameA;
    params.SocketSpaceA = (ERelativeTransformSpace)SocketSpaceA;
    params.SocketOrBoneNameB = (FName)SocketOrBoneNameB;
    params.SocketSpaceB = (ERelativeTransformSpace)SocketSpaceB;
    params.bRemapRange = (bool)bRemapRange;
    params.InRangeMin = (float)InRangeMin;
    params.InRangeMax = (float)InRangeMax;
    params.OutRangeMin = (float)OutRangeMin;
    params.OutRangeMax = (float)OutRangeMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets"));
    struct Params_K2_DirectionBetweenSockets {
        USkeletalMeshComponent* Component; // 0x0
        FName SocketOrBoneNameFrom; // 0x8
        FName SocketOrBoneNameTo; // 0x10
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_K2_DirectionBetweenSockets params{};
    params.Component = (USkeletalMeshComponent*)Component;
    params.SocketOrBoneNameFrom = (FName)SocketOrBoneNameFrom;
    params.SocketOrBoneNameTo = (FName)SocketOrBoneNameTo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets"));
    struct Params_K2_CalculateVelocityFromSockets {
        float DeltaSeconds; // 0x0
        char pad_4[0x4];
        USkeletalMeshComponent* Component; // 0x8
        FName SocketOrBoneName; // 0x10
        FName ReferenceSocketOrBone; // 0x18
        ERelativeTransformSpace SocketSpace; // 0x20
        char pad_21[0x3];
        FVector OffsetInBoneSpace; // 0x24
        FPositionHistory History; // 0x30
        int32_t NumberOfSamples; // 0x60
        float VelocityMin; // 0x64
        float VelocityMax; // 0x68
        EEasingFuncType EasingType; // 0x6c
        char pad_6d[0x3];
        FRuntimeFloatCurve CustomCurve; // 0x70
        float ReturnValue; // 0xf8
    }; // Size: 0xfc
    Params_K2_CalculateVelocityFromSockets params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    params.Component = (USkeletalMeshComponent*)Component;
    params.SocketOrBoneName = (FName)SocketOrBoneName;
    params.ReferenceSocketOrBone = (FName)ReferenceSocketOrBone;
    params.SocketSpace = (ERelativeTransformSpace)SocketSpace;
    params.OffsetInBoneSpace = (FVector)OffsetInBoneSpace;
    params.History = (FPositionHistory)History;
    params.NumberOfSamples = (int32_t)NumberOfSamples;
    params.VelocityMin = (float)VelocityMin;
    params.VelocityMax = (float)VelocityMax;
    params.EasingType = (EEasingFuncType)EasingType;
    params.CustomCurve = (FRuntimeFloatCurve)CustomCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    History = params.History;
    CustomCurve = params.CustomCurve;
    return (float)params.ReturnValue;
}
float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory"));
    struct Params_K2_CalculateVelocityFromPositionHistory {
        float DeltaSeconds; // 0x0
        FVector Position; // 0x4
        FPositionHistory History; // 0x10
        int32_t NumberOfSamples; // 0x40
        float VelocityMin; // 0x44
        float VelocityMax; // 0x48
        float ReturnValue; // 0x4c
    }; // Size: 0x50
    Params_K2_CalculateVelocityFromPositionHistory params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    params.Position = (FVector)Position;
    params.History = (FPositionHistory)History;
    params.NumberOfSamples = (int32_t)NumberOfSamples;
    params.VelocityMin = (float)VelocityMin;
    params.VelocityMax = (float)VelocityMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    History = params.History;
    return (float)params.ReturnValue;
}
