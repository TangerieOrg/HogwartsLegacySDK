#pragma once
#include <cstdint>
#include "EEasingFuncType.hpp"
#include "ERelativeTransformSpace.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class USkeletalMeshComponent;
struct FPositionHistory;
struct FRuntimeFloatCurve;
#pragma pack(push, 1)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetAnimationLibrary* StaticClass();
    static void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
    static void K2_StartProfilingTimer();
    static FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
    static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
    static FTransform K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree);
    static float K2_EndProfilingTimer(bool bLog, FString LogPrefix);
    static float K2_DistanceBetweenTwoSocketsAndMapRange(USkeletalMeshComponent* Component, FName SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, FName SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
    static FVector K2_DirectionBetweenSockets(USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo);
    static float K2_CalculateVelocityFromSockets(float DeltaSeconds, USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve);
    static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax);
}; // Size: 0x28
#pragma pack(pop)
