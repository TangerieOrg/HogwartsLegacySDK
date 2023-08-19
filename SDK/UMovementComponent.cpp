#include "APhysicsVolume.hpp"
#include "EPlaneConstraintAxisSetting.hpp"
#include "FHitResult.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMovementComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
void UMovementComponent::SetPlaneConstraintNormal(FVector PlaneNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.SetPlaneConstraintNormal"));
    struct Params_SetPlaneConstraintNormal {
        FVector PlaneNormal; // 0x0
    }; // Size: 0xc
    Params_SetPlaneConstraintNormal params{};
    params.PlaneNormal = (FVector)PlaneNormal;
    ProcessEvent(func, &params);
}
UMovementComponent* UMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MovementComponent");
    return (UMovementComponent*)res;
}
void UMovementComponent::StopMovementImmediately() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.StopMovementImmediately"));
    struct Params_StopMovementImmediately {
    }; // Size: 0x0
    Params_StopMovementImmediately params{};
    ProcessEvent(func, &params);
}
void UMovementComponent::SnapUpdatedComponentToPlane() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.SnapUpdatedComponentToPlane"));
    struct Params_SnapUpdatedComponentToPlane {
    }; // Size: 0x0
    Params_SnapUpdatedComponentToPlane params{};
    ProcessEvent(func, &params);
}
bool UMovementComponent::K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult& OutHit, bool bSweep, bool bTeleport) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.K2_MoveUpdatedComponent"));
    struct Params_K2_MoveUpdatedComponent {
        FVector Delta; // 0x0
        FRotator NewRotation; // 0xc
        FHitResult OutHit; // 0x18
        bool bSweep; // 0xa0
        bool bTeleport; // 0xa1
        bool ReturnValue; // 0xa2
    }; // Size: 0xa3
    Params_K2_MoveUpdatedComponent params{};
    params.Delta = (FVector)Delta;
    params.NewRotation = (FRotator)NewRotation;
    params.OutHit = (FHitResult)OutHit;
    params.bSweep = (bool)bSweep;
    params.bTeleport = (bool)bTeleport;
    ProcessEvent(func, &params);
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
void UMovementComponent::SetUpdatedComponent(USceneComponent* NewUpdatedComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.SetUpdatedComponent"));
    struct Params_SetUpdatedComponent {
        USceneComponent* NewUpdatedComponent; // 0x0
    }; // Size: 0x8
    Params_SetUpdatedComponent params{};
    params.NewUpdatedComponent = (USceneComponent*)NewUpdatedComponent;
    ProcessEvent(func, &params);
}
void UMovementComponent::SetPlaneConstraintOrigin(FVector PlaneOrigin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.SetPlaneConstraintOrigin"));
    struct Params_SetPlaneConstraintOrigin {
        FVector PlaneOrigin; // 0x0
    }; // Size: 0xc
    Params_SetPlaneConstraintOrigin params{};
    params.PlaneOrigin = (FVector)PlaneOrigin;
    ProcessEvent(func, &params);
}
float UMovementComponent::K2_GetModifiedMaxSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.K2_GetModifiedMaxSpeed"));
    struct Params_K2_GetModifiedMaxSpeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_K2_GetModifiedMaxSpeed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMovementComponent::SetPlaneConstraintEnabled(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.SetPlaneConstraintEnabled"));
    struct Params_SetPlaneConstraintEnabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetPlaneConstraintEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
void UMovementComponent::SetPlaneConstraintFromVectors(FVector Forward, FVector Up) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.SetPlaneConstraintFromVectors"));
    struct Params_SetPlaneConstraintFromVectors {
        FVector Forward; // 0x0
        FVector Up; // 0xc
    }; // Size: 0x18
    Params_SetPlaneConstraintFromVectors params{};
    params.Forward = (FVector)Forward;
    params.Up = (FVector)Up;
    ProcessEvent(func, &params);
}
void UMovementComponent::SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.SetPlaneConstraintAxisSetting"));
    struct Params_SetPlaneConstraintAxisSetting {
        EPlaneConstraintAxisSetting NewAxisSetting; // 0x0
    }; // Size: 0x1
    Params_SetPlaneConstraintAxisSetting params{};
    params.NewAxisSetting = (EPlaneConstraintAxisSetting)NewAxisSetting;
    ProcessEvent(func, &params);
}
void UMovementComponent::PhysicsVolumeChanged(APhysicsVolume* NewVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.PhysicsVolumeChanged"));
    struct Params_PhysicsVolumeChanged {
        APhysicsVolume* NewVolume; // 0x0
    }; // Size: 0x8
    Params_PhysicsVolumeChanged params{};
    params.NewVolume = (APhysicsVolume*)NewVolume;
    ProcessEvent(func, &params);
}
float UMovementComponent::K2_GetMaxSpeedModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.K2_GetMaxSpeedModifier"));
    struct Params_K2_GetMaxSpeedModifier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_K2_GetMaxSpeedModifier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMovementComponent::GetGravityZ() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.GetGravityZ"));
    struct Params_GetGravityZ {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetGravityZ params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UMovementComponent::IsExceedingMaxSpeed(float MaxSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.IsExceedingMaxSpeed"));
    struct Params_IsExceedingMaxSpeed {
        float MaxSpeed; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsExceedingMaxSpeed params{};
    params.MaxSpeed = (float)MaxSpeed;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UMovementComponent::GetPlaneConstraintOrigin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.GetPlaneConstraintOrigin"));
    struct Params_GetPlaneConstraintOrigin {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPlaneConstraintOrigin params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UMovementComponent::GetPlaneConstraintNormal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.GetPlaneConstraintNormal"));
    struct Params_GetPlaneConstraintNormal {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPlaneConstraintNormal params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
EPlaneConstraintAxisSetting UMovementComponent::GetPlaneConstraintAxisSetting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.GetPlaneConstraintAxisSetting"));
    struct Params_GetPlaneConstraintAxisSetting {
        EPlaneConstraintAxisSetting ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlaneConstraintAxisSetting params{};
    ProcessEvent(func, &params);
    return (EPlaneConstraintAxisSetting)params.ReturnValue;
}
APhysicsVolume* UMovementComponent::GetPhysicsVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.GetPhysicsVolume"));
    struct Params_GetPhysicsVolume {
        APhysicsVolume* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPhysicsVolume params{};
    ProcessEvent(func, &params);
    return (APhysicsVolume*)params.ReturnValue;
}
float UMovementComponent::GetMaxSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.GetMaxSpeed"));
    struct Params_GetMaxSpeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxSpeed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UMovementComponent::ConstrainNormalToPlane(FVector Normal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.ConstrainNormalToPlane"));
    struct Params_ConstrainNormalToPlane {
        FVector Normal; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_ConstrainNormalToPlane params{};
    params.Normal = (FVector)Normal;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UMovementComponent::ConstrainLocationToPlane(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.ConstrainLocationToPlane"));
    struct Params_ConstrainLocationToPlane {
        FVector Location; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_ConstrainLocationToPlane params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UMovementComponent::ConstrainDirectionToPlane(FVector Direction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MovementComponent.ConstrainDirectionToPlane"));
    struct Params_ConstrainDirectionToPlane {
        FVector Direction; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_ConstrainDirectionToPlane params{};
    params.Direction = (FVector)Direction;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
