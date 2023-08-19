#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "ETargetType\Type.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UTargetTypeBase;
class AActor;
class UClass;
#pragma pack(push, 1)
class UTargetTracker : public UObject {
public:
    char pad_28[0x80];
    static UTargetTracker* StaticClass();
    void RemoveTargetByPtr(ETargetID::Type InTargetID, UTargetTypeBase* InTargetToRemove);
    void RemoveTarget(ETargetID::Type InTargetID, bool bCheckForEmptyList);
    bool IsTargetListEmptyThisFrame();
    void GetTargets();
    FVector GetTargetLocation(ETargetID::Type InTargetID);
    UTargetTypeBase* GetTargetByID(ETargetID::Type InTargetType);
    AActor* GetTargetActor(ETargetID::Type InTargetID);
    float GetComputedPriority(ETargetID::Type InTargetID);
    ETargetID::Type GetBestTargetID();
    UTargetTypeBase* GetBestTarget();
    FVector ComputeTargetLocation(FVector ProjectFromLocation, float ProjectDistance);
    FVector ComputeDirectionToTargetOfType(FVector SourceLocation, ETargetID::Type InTargetID, bool bFlattenInXYPlane, bool bNormalize);
    FVector ComputeDirection(FVector SourceLocation, bool bFlattenInXYPlane, bool bNormalize);
    static FVector ComputeCameraDirection(AActor* InActor, bool bFlattenInXYPlane);
    bool AnyValidTargetsByType(ETargetType::Type InTargetType);
    bool AnyValidTargetsByID(ETargetID::Type InTargetID);
    bool AnyValidTargets();
    UTargetTypeBase* AddTarget_StaticWorldDirection(FVector InStaticWorldDirection, ETargetID::Type InTargetID);
    UTargetTypeBase* AddTarget_Location(FVector InTargetLocation, ETargetID::Type InTargetID);
    UTargetTypeBase* AddTarget_DesiredDirection(ETargetID::Type InTargetID);
    UTargetTypeBase* AddTarget_Custom(UClass* TargetClass, ETargetID::Type InTargetID);
    UTargetTypeBase* AddTarget_CameraDirection(ETargetID::Type InTargetID);
    UTargetTypeBase* AddTarget_ActorWithOffset(AActor* InTargetActor, FVector& InTargetOffset, ETargetID::Type InTargetID);
    UTargetTypeBase* AddTarget_Actor(AActor* InTargetActor, ETargetID::Type InTargetID);
}; // Size: 0xa8
#pragma pack(pop)
