#include "AActor.hpp"
#include "ACharacter.hpp"
#include "EMovementMode.hpp"
#include "ENetworkSmoothingMode.hpp"
#include "FCharacterMovementComponentPostPhysicsTickFunction.hpp"
#include "FFindFloorResult.hpp"
#include "FHitResult.hpp"
#include "FNavAvoidanceMask.hpp"
#include "FQuat.hpp"
#include "FRootMotionMovementParams.hpp"
#include "FRootMotionSourceGroup.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UFunction.hpp"
#include "UPawnMovementComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
UCharacterMovementComponent* UCharacterMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CharacterMovementComponent");
    return (UCharacterMovementComponent*)res;
}
void UCharacterMovementComponent::SetGroupsToAvoid(int32_t GroupFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetGroupsToAvoid"));
    struct Params_SetGroupsToAvoid {
        int32_t GroupFlags; // 0x0
    }; // Size: 0x4
    Params_SetGroupsToAvoid params{};
    params.GroupFlags = (int32_t)GroupFlags;
    ProcessEvent(func, &params);
}
void UCharacterMovementComponent::SetMovementMode(EMovementMode NewMovementMode, uint8_t NewCustomMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetMovementMode"));
    struct Params_SetMovementMode {
        EMovementMode NewMovementMode; // 0x0
        uint8_t NewCustomMode; // 0x1
    }; // Size: 0x2
    Params_SetMovementMode params{};
    params.NewMovementMode = (EMovementMode)NewMovementMode;
    params.NewCustomMode = (uint8_t)NewCustomMode;
    ProcessEvent(func, &params);
}
void UCharacterMovementComponent::SetGroupsToIgnoreMask(FNavAvoidanceMask& GroupMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetGroupsToIgnoreMask"));
    struct Params_SetGroupsToIgnoreMask {
        FNavAvoidanceMask GroupMask; // 0x0
    }; // Size: 0x4
    Params_SetGroupsToIgnoreMask params{};
    params.GroupMask = (FNavAvoidanceMask)GroupMask;
    ProcessEvent(func, &params);
    GroupMask = params.GroupMask;
}
void UCharacterMovementComponent::SetWalkableFloorAngle(float InWalkableFloorAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetWalkableFloorAngle"));
    struct Params_SetWalkableFloorAngle {
        float InWalkableFloorAngle; // 0x0
    }; // Size: 0x4
    Params_SetWalkableFloorAngle params{};
    params.InWalkableFloorAngle = (float)InWalkableFloorAngle;
    ProcessEvent(func, &params);
}
void UCharacterMovementComponent::SetGroupsToAvoidMask(FNavAvoidanceMask& GroupMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetGroupsToAvoidMask"));
    struct Params_SetGroupsToAvoidMask {
        FNavAvoidanceMask GroupMask; // 0x0
    }; // Size: 0x4
    Params_SetGroupsToAvoidMask params{};
    params.GroupMask = (FNavAvoidanceMask)GroupMask;
    ProcessEvent(func, &params);
    GroupMask = params.GroupMask;
}
float UCharacterMovementComponent::GetMaxAcceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetMaxAcceleration"));
    struct Params_GetMaxAcceleration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxAcceleration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCharacterMovementComponent::SetWalkableFloorZ(float InWalkableFloorZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetWalkableFloorZ"));
    struct Params_SetWalkableFloorZ {
        float InWalkableFloorZ; // 0x0
    }; // Size: 0x4
    Params_SetWalkableFloorZ params{};
    params.InWalkableFloorZ = (float)InWalkableFloorZ;
    ProcessEvent(func, &params);
}
float UCharacterMovementComponent::K2_GetWalkableFloorZ() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.K2_GetWalkableFloorZ"));
    struct Params_K2_GetWalkableFloorZ {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_K2_GetWalkableFloorZ params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCharacterMovementComponent::SetGroupsToIgnore(int32_t GroupFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetGroupsToIgnore"));
    struct Params_SetGroupsToIgnore {
        int32_t GroupFlags; // 0x0
    }; // Size: 0x4
    Params_SetGroupsToIgnore params{};
    params.GroupFlags = (int32_t)GroupFlags;
    ProcessEvent(func, &params);
}
void UCharacterMovementComponent::SetAvoidanceGroupMask(FNavAvoidanceMask& GroupMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetAvoidanceGroupMask"));
    struct Params_SetAvoidanceGroupMask {
        FNavAvoidanceMask GroupMask; // 0x0
    }; // Size: 0x4
    Params_SetAvoidanceGroupMask params{};
    params.GroupMask = (FNavAvoidanceMask)GroupMask;
    ProcessEvent(func, &params);
    GroupMask = params.GroupMask;
}
void UCharacterMovementComponent::SetAvoidanceGroup(int32_t GroupFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetAvoidanceGroup"));
    struct Params_SetAvoidanceGroup {
        int32_t GroupFlags; // 0x0
    }; // Size: 0x4
    Params_SetAvoidanceGroup params{};
    params.GroupFlags = (int32_t)GroupFlags;
    ProcessEvent(func, &params);
}
FVector UCharacterMovementComponent::GetLastUpdateVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetLastUpdateVelocity"));
    struct Params_GetLastUpdateVelocity {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLastUpdateVelocity params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UCharacterMovementComponent::GetMaxJumpHeightWithJumpTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetMaxJumpHeightWithJumpTime"));
    struct Params_GetMaxJumpHeightWithJumpTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxJumpHeightWithJumpTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCharacterMovementComponent::SetAvoidanceEnabled(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.SetAvoidanceEnabled"));
    struct Params_SetAvoidanceEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetAvoidanceEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
float UCharacterMovementComponent::K2_GetWalkableFloorAngle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.K2_GetWalkableFloorAngle"));
    struct Params_K2_GetWalkableFloorAngle {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_K2_GetWalkableFloorAngle params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UCharacterMovementComponent::GetMaxBrakingDeceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetMaxBrakingDeceleration"));
    struct Params_GetMaxBrakingDeceleration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxBrakingDeceleration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UCharacterMovementComponent::K2_GetModifiedMaxAcceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.K2_GetModifiedMaxAcceleration"));
    struct Params_K2_GetModifiedMaxAcceleration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_K2_GetModifiedMaxAcceleration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCharacterMovementComponent::K2_FindFloor(FVector CapsuleLocation, FFindFloorResult& FloorResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.K2_FindFloor"));
    struct Params_K2_FindFloor {
        FVector CapsuleLocation; // 0x0
        FFindFloorResult FloorResult; // 0xc
    }; // Size: 0xa0
    Params_K2_FindFloor params{};
    params.CapsuleLocation = (FVector)CapsuleLocation;
    params.FloorResult = (FFindFloorResult)FloorResult;
    ProcessEvent(func, &params);
    FloorResult = params.FloorResult;
}
void UCharacterMovementComponent::K2_ComputeFloorDist(FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, FFindFloorResult& FloorResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.K2_ComputeFloorDist"));
    struct Params_K2_ComputeFloorDist {
        FVector CapsuleLocation; // 0x0
        float LineDistance; // 0xc
        float SweepDistance; // 0x10
        float SweepRadius; // 0x14
        FFindFloorResult FloorResult; // 0x18
    }; // Size: 0xac
    Params_K2_ComputeFloorDist params{};
    params.CapsuleLocation = (FVector)CapsuleLocation;
    params.LineDistance = (float)LineDistance;
    params.SweepDistance = (float)SweepDistance;
    params.SweepRadius = (float)SweepRadius;
    params.FloorResult = (FFindFloorResult)FloorResult;
    ProcessEvent(func, &params);
    FloorResult = params.FloorResult;
}
bool UCharacterMovementComponent::IsWalking() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.IsWalking"));
    struct Params_IsWalking {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWalking params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterMovementComponent::IsWalkable(FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.IsWalkable"));
    struct Params_IsWalkable {
        FHitResult Hit; // 0x0
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_IsWalkable params{};
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
    return (bool)params.ReturnValue;
}
float UCharacterMovementComponent::GetValidPerchRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetValidPerchRadius"));
    struct Params_GetValidPerchRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetValidPerchRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCharacterMovementComponent::ClearAccumulatedForces() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.ClearAccumulatedForces"));
    struct Params_ClearAccumulatedForces {
    }; // Size: 0x0
    Params_ClearAccumulatedForces params{};
    ProcessEvent(func, &params);
}
float UCharacterMovementComponent::GetPerchRadiusThreshold() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetPerchRadiusThreshold"));
    struct Params_GetPerchRadiusThreshold {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPerchRadiusThreshold params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UPrimitiveComponent* UCharacterMovementComponent::GetMovementBase() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetMovementBase"));
    struct Params_GetMovementBase {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMovementBase params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
float UCharacterMovementComponent::GetMinAnalogSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetMinAnalogSpeed"));
    struct Params_GetMinAnalogSpeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinAnalogSpeed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UCharacterMovementComponent::GetMaxJumpHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetMaxJumpHeight"));
    struct Params_GetMaxJumpHeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxJumpHeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRotator UCharacterMovementComponent::GetLastUpdateRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetLastUpdateRotation"));
    struct Params_GetLastUpdateRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLastUpdateRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector UCharacterMovementComponent::GetLastUpdateLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetLastUpdateLocation"));
    struct Params_GetLastUpdateLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLastUpdateLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UCharacterMovementComponent::GetImpartedMovementBaseVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetImpartedMovementBaseVelocity"));
    struct Params_GetImpartedMovementBaseVelocity {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetImpartedMovementBaseVelocity params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UCharacterMovementComponent::GetCurrentAcceleration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetCurrentAcceleration"));
    struct Params_GetCurrentAcceleration {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetCurrentAcceleration params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
ACharacter* UCharacterMovementComponent::GetCharacterOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetCharacterOwner"));
    struct Params_GetCharacterOwner {
        ACharacter* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCharacterOwner params{};
    ProcessEvent(func, &params);
    return (ACharacter*)params.ReturnValue;
}
float UCharacterMovementComponent::GetAnalogInputModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.GetAnalogInputModifier"));
    struct Params_GetAnalogInputModifier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAnalogInputModifier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCharacterMovementComponent::DisableMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.DisableMovement"));
    struct Params_DisableMovement {
    }; // Size: 0x0
    Params_DisableMovement params{};
    ProcessEvent(func, &params);
}
void UCharacterMovementComponent::CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.CapsuleTouched"));
    struct Params_CapsuleTouched {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_CapsuleTouched params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void UCharacterMovementComponent::CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.CalcVelocity"));
    struct Params_CalcVelocity {
        float DeltaTime; // 0x0
        float Friction; // 0x4
        bool bFluid; // 0x8
        char pad_9[0x3];
        float BrakingDeceleration; // 0xc
    }; // Size: 0x10
    Params_CalcVelocity params{};
    params.DeltaTime = (float)DeltaTime;
    params.Friction = (float)Friction;
    params.bFluid = (bool)bFluid;
    params.BrakingDeceleration = (float)BrakingDeceleration;
    ProcessEvent(func, &params);
}
void UCharacterMovementComponent::AddImpulse(FVector Impulse, bool bVelocityChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.AddImpulse"));
    struct Params_AddImpulse {
        FVector Impulse; // 0x0
        bool bVelocityChange; // 0xc
    }; // Size: 0xd
    Params_AddImpulse params{};
    params.Impulse = (FVector)Impulse;
    params.bVelocityChange = (bool)bVelocityChange;
    ProcessEvent(func, &params);
}
void UCharacterMovementComponent::AddForce(FVector Force) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CharacterMovementComponent.AddForce"));
    struct Params_AddForce {
        FVector Force; // 0x0
    }; // Size: 0xc
    Params_AddForce params{};
    params.Force = (FVector)Force;
    ProcessEvent(func, &params);
}
