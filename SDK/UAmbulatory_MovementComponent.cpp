#include "EPhysicalSurface.hpp"
#include "FAvaRootMotionWarper.hpp"
#include "FRotator.hpp"
#include "FSharedContinuousImpulseHelper.hpp"
#include "FVector.hpp"
#include "UAblAbilityComponent.hpp"
#include "UAble_MovementComponent.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
void UAmbulatory_MovementComponent::SetFallImpulse(FVector& Impulse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.SetFallImpulse"));
    struct Params_SetFallImpulse {
        FVector Impulse; // 0x0
    }; // Size: 0xc
    Params_SetFallImpulse params{};
    params.Impulse = (FVector)Impulse;
    ProcessEvent(func, &params);
    Impulse = params.Impulse;
}
UAmbulatory_MovementComponent* UAmbulatory_MovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.Ambulatory_MovementComponent");
    return (UAmbulatory_MovementComponent*)res;
}
void UAmbulatory_MovementComponent::ZeroVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.ZeroVelocity"));
    struct Params_ZeroVelocity {
    }; // Size: 0x0
    Params_ZeroVelocity params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_MovementComponent::ZeroLinearVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.ZeroLinearVelocity"));
    struct Params_ZeroLinearVelocity {
    }; // Size: 0x0
    Params_ZeroLinearVelocity params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_MovementComponent::SetFrictionOverride(float InFrictionOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.SetFrictionOverride"));
    struct Params_SetFrictionOverride {
        float InFrictionOverride; // 0x0
    }; // Size: 0x4
    Params_SetFrictionOverride params{};
    params.InFrictionOverride = (float)InFrictionOverride;
    ProcessEvent(func, &params);
}
void UAmbulatory_MovementComponent::UpdateSharedContinuousImpulse(FSharedContinuousImpulseHelper ImpulseContainer, FVector& InImpulse, bool bInIgnoreMass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.UpdateSharedContinuousImpulse"));
    struct Params_UpdateSharedContinuousImpulse {
        FSharedContinuousImpulseHelper ImpulseContainer; // 0x0
        FVector InImpulse; // 0x10
        bool bInIgnoreMass; // 0x1c
    }; // Size: 0x1d
    Params_UpdateSharedContinuousImpulse params{};
    params.ImpulseContainer = (FSharedContinuousImpulseHelper)ImpulseContainer;
    params.InImpulse = (FVector)InImpulse;
    params.bInIgnoreMass = (bool)bInIgnoreMass;
    ProcessEvent(func, &params);
    InImpulse = params.InImpulse;
}
FSharedContinuousImpulseHelper UAmbulatory_MovementComponent::SetSharedContinuousLinearImpulse(FVector& InImpulse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.SetSharedContinuousLinearImpulse"));
    struct Params_SetSharedContinuousLinearImpulse {
        FVector InImpulse; // 0x0
        char pad_c[0x4];
        FSharedContinuousImpulseHelper ReturnValue; // 0x10
    }; // Size: 0x20
    Params_SetSharedContinuousLinearImpulse params{};
    params.InImpulse = (FVector)InImpulse;
    ProcessEvent(func, &params);
    InImpulse = params.InImpulse;
    return (FSharedContinuousImpulseHelper)params.ReturnValue;
}
void UAmbulatory_MovementComponent::SetAllowTransitionalImpulse(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.SetAllowTransitionalImpulse"));
    struct Params_SetAllowTransitionalImpulse {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_SetAllowTransitionalImpulse params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_MovementComponent::HermesBindSurfaceTypeChanged() {}
float UAmbulatory_MovementComponent::GetSurfaceIncline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.GetSurfaceIncline"));
    struct Params_GetSurfaceIncline {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSurfaceIncline params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAmbulatory_MovementComponent::ClearTransitionalImpulse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.ClearTransitionalImpulse"));
    struct Params_ClearTransitionalImpulse {
    }; // Size: 0x0
    Params_ClearTransitionalImpulse params{};
    ProcessEvent(func, &params);
}
FVector UAmbulatory_MovementComponent::GetFallLineFlat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.GetFallLineFlat"));
    struct Params_GetFallLineFlat {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetFallLineFlat params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UAmbulatory_MovementComponent::ClearLastSurfaceType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.ClearLastSurfaceType"));
    struct Params_ClearLastSurfaceType {
    }; // Size: 0x0
    Params_ClearLastSurfaceType params{};
    ProcessEvent(func, &params);
}
FVector UAmbulatory_MovementComponent::GetFallLine() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.GetFallLine"));
    struct Params_GetFallLine {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetFallLine params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UAmbulatory_MovementComponent::GetFallAlongSurfaceDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.GetFallAlongSurfaceDistance"));
    struct Params_GetFallAlongSurfaceDistance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFallAlongSurfaceDistance params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EPhysicalSurface UAmbulatory_MovementComponent::GetCurrentSurfaceType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.GetCurrentSurfaceType"));
    struct Params_GetCurrentSurfaceType {
        EPhysicalSurface ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentSurfaceType params{};
    ProcessEvent(func, &params);
    return (EPhysicalSurface)params.ReturnValue;
}
FVector UAmbulatory_MovementComponent::GetAdditiveToRootMotionVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.GetAdditiveToRootMotionVelocity"));
    struct Params_GetAdditiveToRootMotionVelocity {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetAdditiveToRootMotionVelocity params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UAmbulatory_MovementComponent::ComputeSurfaceAccelerationDirection(bool& bFlatGround) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.ComputeSurfaceAccelerationDirection"));
    struct Params_ComputeSurfaceAccelerationDirection {
        bool bFlatGround; // 0x0
        char pad_1[0x3];
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_ComputeSurfaceAccelerationDirection params{};
    params.bFlatGround = (bool)bFlatGround;
    ProcessEvent(func, &params);
    bFlatGround = params.bFlatGround;
    return (FVector)params.ReturnValue;
}
void UAmbulatory_MovementComponent::ClearSharedContinuousImpulse(FSharedContinuousImpulseHelper ImpulseContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.ClearSharedContinuousImpulse"));
    struct Params_ClearSharedContinuousImpulse {
        FSharedContinuousImpulseHelper ImpulseContainer; // 0x0
    }; // Size: 0x10
    Params_ClearSharedContinuousImpulse params{};
    params.ImpulseContainer = (FSharedContinuousImpulseHelper)ImpulseContainer;
    ProcessEvent(func, &params);
}
void UAmbulatory_MovementComponent::ClearAdditiveToRootMotionVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.ClearAdditiveToRootMotionVelocity"));
    struct Params_ClearAdditiveToRootMotionVelocity {
    }; // Size: 0x0
    Params_ClearAdditiveToRootMotionVelocity params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_MovementComponent::AddToRootMotionVelocity(FVector InAdditiveToRootMotionVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_MovementComponent.AddToRootMotionVelocity"));
    struct Params_AddToRootMotionVelocity {
        FVector InAdditiveToRootMotionVelocity; // 0x0
    }; // Size: 0xc
    Params_AddToRootMotionVelocity params{};
    params.InAdditiveToRootMotionVelocity = (FVector)InAdditiveToRootMotionVelocity;
    ProcessEvent(func, &params);
}
