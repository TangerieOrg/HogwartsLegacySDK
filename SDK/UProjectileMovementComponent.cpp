#include "FHitResult.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMovementComponent.hpp"
#include "UProjectileMovementComponent.hpp"
#include "USceneComponent.hpp"
UProjectileMovementComponent* UProjectileMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ProjectileMovementComponent");
    return (UProjectileMovementComponent*)res;
}
void UProjectileMovementComponent::ResetInterpolation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ProjectileMovementComponent.ResetInterpolation"));
    struct Params_ResetInterpolation {
    }; // Size: 0x0
    Params_ResetInterpolation params{};
    ProcessEvent(func, &params);
}
bool UProjectileMovementComponent::IsVelocityUnderSimulationThreshold() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ProjectileMovementComponent.IsVelocityUnderSimulationThreshold"));
    struct Params_IsVelocityUnderSimulationThreshold {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVelocityUnderSimulationThreshold params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UProjectileMovementComponent::SetInterpolatedComponent(USceneComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ProjectileMovementComponent.SetInterpolatedComponent"));
    struct Params_SetInterpolatedComponent {
        USceneComponent* Component; // 0x0
    }; // Size: 0x8
    Params_SetInterpolatedComponent params{};
    params.Component = (USceneComponent*)Component;
    ProcessEvent(func, &params);
}
bool UProjectileMovementComponent::IsInterpolationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ProjectileMovementComponent.IsInterpolationComplete"));
    struct Params_IsInterpolationComplete {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInterpolationComplete params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UProjectileMovementComponent::StopSimulating(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ProjectileMovementComponent.StopSimulating"));
    struct Params_StopSimulating {
        FHitResult HitResult; // 0x0
    }; // Size: 0x88
    Params_StopSimulating params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void UProjectileMovementComponent::SetVelocityInLocalSpace(FVector NewVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ProjectileMovementComponent.SetVelocityInLocalSpace"));
    struct Params_SetVelocityInLocalSpace {
        FVector NewVelocity; // 0x0
    }; // Size: 0xc
    Params_SetVelocityInLocalSpace params{};
    params.NewVelocity = (FVector)NewVelocity;
    ProcessEvent(func, &params);
}
void UProjectileMovementComponent::OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature"));
    struct Params_OnProjectileStopDelegate__DelegateSignature {
        FHitResult ImpactResult; // 0x0
    }; // Size: 0x88
    Params_OnProjectileStopDelegate__DelegateSignature params{};
    params.ImpactResult = (FHitResult)ImpactResult;
    ProcessEvent(func, &params);
    ImpactResult = params.ImpactResult;
}
void UProjectileMovementComponent::MoveInterpolationTarget(FVector& NewLocation, FRotator& NewRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ProjectileMovementComponent.MoveInterpolationTarget"));
    struct Params_MoveInterpolationTarget {
        FVector NewLocation; // 0x0
        FRotator NewRotation; // 0xc
    }; // Size: 0x18
    Params_MoveInterpolationTarget params{};
    params.NewLocation = (FVector)NewLocation;
    params.NewRotation = (FRotator)NewRotation;
    ProcessEvent(func, &params);
    NewLocation = params.NewLocation;
    NewRotation = params.NewRotation;
}
void UProjectileMovementComponent::OnProjectileBounceDelegate__DelegateSignature(FHitResult& ImpactResult, FVector& ImpactVelocity) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature"));
    struct Params_OnProjectileBounceDelegate__DelegateSignature {
        FHitResult ImpactResult; // 0x0
        FVector ImpactVelocity; // 0x88
    }; // Size: 0x94
    Params_OnProjectileBounceDelegate__DelegateSignature params{};
    params.ImpactResult = (FHitResult)ImpactResult;
    params.ImpactVelocity = (FVector)ImpactVelocity;
    ProcessEvent(func, &params);
    ImpactResult = params.ImpactResult;
    ImpactVelocity = params.ImpactVelocity;
}
FVector UProjectileMovementComponent::LimitVelocity(FVector NewVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ProjectileMovementComponent.LimitVelocity"));
    struct Params_LimitVelocity {
        FVector NewVelocity; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_LimitVelocity params{};
    params.NewVelocity = (FVector)NewVelocity;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
