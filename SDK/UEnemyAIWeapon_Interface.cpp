#include "EEnemyBuffTypeEnum.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "UCapsuleComponent.hpp"
#include "UEnemyAIWeapon_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UMeshComponent.hpp"
#include "USceneComponent.hpp"
bool UEnemyAIWeapon_Interface::ShowWeaponStartFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.ShowWeaponStartFX"));
    struct Params_ShowWeaponStartFX {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShowWeaponStartFX params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UEnemyAIWeapon_Interface* UEnemyAIWeapon_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIWeapon_Interface");
    return (UEnemyAIWeapon_Interface*)res;
}
bool UEnemyAIWeapon_Interface::InterfaceWeaponRigidBodyDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.InterfaceWeaponRigidBodyDeactivate"));
    struct Params_InterfaceWeaponRigidBodyDeactivate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InterfaceWeaponRigidBodyDeactivate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::WeaponStored() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.WeaponStored"));
    struct Params_WeaponStored {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WeaponStored params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponSpawnStoredWeaponFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponSpawnStoredWeaponFx"));
    struct Params_EventWeaponSpawnStoredWeaponFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponSpawnStoredWeaponFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::StartWeaponSwing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.StartWeaponSwing"));
    struct Params_StartWeaponSwing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StartWeaponSwing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::SpawnStoredWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.SpawnStoredWeapon"));
    struct Params_SpawnStoredWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SpawnStoredWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponTriggerProtegoFx(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponTriggerProtegoFx"));
    struct Params_EventWeaponTriggerProtegoFx {
        FHitResult HitResult; // 0x0
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_EventWeaponTriggerProtegoFx params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::InterfaceWeaponRigidBodyActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.InterfaceWeaponRigidBodyActivate"));
    struct Params_InterfaceWeaponRigidBodyActivate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InterfaceWeaponRigidBodyActivate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventTransientWeaponDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventTransientWeaponDeactivate"));
    struct Params_EventTransientWeaponDeactivate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventTransientWeaponDeactivate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::InterfaceWeaponAcquire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.InterfaceWeaponAcquire"));
    struct Params_InterfaceWeaponAcquire {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InterfaceWeaponAcquire params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::HideWeaponStopFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.HideWeaponStopFX"));
    struct Params_HideWeaponStopFX {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HideWeaponStopFX params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
USceneComponent* UEnemyAIWeapon_Interface::GetSceneComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.GetSceneComponent"));
    struct Params_GetSceneComponent {
        USceneComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSceneComponent params{};
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
UMeshComponent* UEnemyAIWeapon_Interface::GetMeshComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.GetMeshComponent"));
    struct Params_GetMeshComponent {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMeshComponent params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
UCapsuleComponent* UEnemyAIWeapon_Interface::GetCapsuleComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.GetCapsuleComponent"));
    struct Params_GetCapsuleComponent {
        UCapsuleComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCapsuleComponent params{};
    ProcessEvent(func, &params);
    return (UCapsuleComponent*)params.ReturnValue;
}
UMeshComponent* UEnemyAIWeapon_Interface::FireWeaponAOE1() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.FireWeaponAOE1"));
    struct Params_FireWeaponAOE1 {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_FireWeaponAOE1 params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponDeactivateLiteFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponDeactivateLiteFx"));
    struct Params_EventWeaponDeactivateLiteFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDeactivateLiteFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponTriggerThrownFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponTriggerThrownFx"));
    struct Params_EventWeaponTriggerThrownFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponTriggerThrownFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventTransientWeaponPoweredUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventTransientWeaponPoweredUp"));
    struct Params_EventTransientWeaponPoweredUp {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventTransientWeaponPoweredUp params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponTriggerImpactFx(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponTriggerImpactFx"));
    struct Params_EventWeaponTriggerImpactFx {
        FHitResult HitResult; // 0x0
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_EventWeaponTriggerImpactFx params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponDestroyedFx(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponDestroyedFx"));
    struct Params_EventWeaponDestroyedFx {
        FHitResult HitResult; // 0x0
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_EventWeaponDestroyedFx params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponTriggerGenericImpactFx(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponTriggerGenericImpactFx"));
    struct Params_EventWeaponTriggerGenericImpactFx {
        FHitResult HitResult; // 0x0
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_EventWeaponTriggerGenericImpactFx params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponThrownPawnStabFx(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponThrownPawnStabFx"));
    struct Params_EventWeaponThrownPawnStabFx {
        FHitResult HitResult; // 0x0
        bool ReturnValue; // 0x88
    }; // Size: 0x89
    Params_EventWeaponThrownPawnStabFx params{};
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::ActivateWeaponThreat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.ActivateWeaponThreat"));
    struct Params_ActivateWeaponThreat {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ActivateWeaponThreat params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponMeleePawnSlashFx(FHitResult& HitResult, FGameplayTagContainer& InMunitionTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponMeleePawnSlashFx"));
    struct Params_EventWeaponMeleePawnSlashFx {
        FHitResult HitResult; // 0x0
        FGameplayTagContainer InMunitionTagContainer; // 0x88
        bool ReturnValue; // 0xa8
    }; // Size: 0xa9
    Params_EventWeaponMeleePawnSlashFx params{};
    params.HitResult = (FHitResult)HitResult;
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    InMunitionTagContainer = params.InMunitionTagContainer;
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponMeleeAttackStartFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponMeleeAttackStartFx"));
    struct Params_EventWeaponMeleeAttackStartFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponMeleeAttackStartFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponImpactGlowFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponImpactGlowFx"));
    struct Params_EventWeaponImpactGlowFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponImpactGlowFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemyAIWeapon_Interface::EventDisableRangedPawnCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventDisableRangedPawnCollision"));
    struct Params_EventDisableRangedPawnCollision {
    }; // Size: 0x0
    Params_EventDisableRangedPawnCollision params{};
    ProcessEvent(func, &params);
}
bool UEnemyAIWeapon_Interface::EventWeaponFireAOE1Fx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponFireAOE1Fx"));
    struct Params_EventWeaponFireAOE1Fx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponFireAOE1Fx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponDisarmedFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponDisarmedFx"));
    struct Params_EventWeaponDisarmedFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDisarmedFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EnableShieldCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EnableShieldCollision"));
    struct Params_EnableShieldCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EnableShieldCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponDisarmedForRecoveryFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponDisarmedForRecoveryFx"));
    struct Params_EventWeaponDisarmedForRecoveryFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDisarmedForRecoveryFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::DisablePhysicsSim() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.DisablePhysicsSim"));
    struct Params_DisablePhysicsSim {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisablePhysicsSim params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponDeactivateHeavyFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponDeactivateHeavyFx"));
    struct Params_EventWeaponDeactivateHeavyFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDeactivateHeavyFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponDeactivatedFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponDeactivatedFx"));
    struct Params_EventWeaponDeactivatedFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDeactivatedFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponDeactivateBuffEmitterFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponDeactivateBuffEmitterFx"));
    struct Params_EventWeaponDeactivateBuffEmitterFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDeactivateBuffEmitterFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponActivateLiteFx() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponActivateLiteFx"));
    struct Params_EventWeaponActivateLiteFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponActivateLiteFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventWeaponActivateBuffEmitterFx(EEnemyBuffTypeEnum InBuffType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventWeaponActivateBuffEmitterFx"));
    struct Params_EventWeaponActivateBuffEmitterFx {
        EEnemyBuffTypeEnum InBuffType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_EventWeaponActivateBuffEmitterFx params{};
    params.InBuffType = (EEnemyBuffTypeEnum)InBuffType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::DeactivateWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.DeactivateWeapon"));
    struct Params_DeactivateWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DeactivateWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventTransientWeaponActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventTransientWeaponActivate"));
    struct Params_EventTransientWeaponActivate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventTransientWeaponActivate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EventTrackPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EventTrackPoints"));
    struct Params_EventTrackPoints {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventTrackPoints params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EnablePhysicsSim() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EnablePhysicsSim"));
    struct Params_EnablePhysicsSim {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EnablePhysicsSim params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EnableMeleeCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EnableMeleeCollision"));
    struct Params_EnableMeleeCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EnableMeleeCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::EnableCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.EnableCollision"));
    struct Params_EnableCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EnableCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::DisableShieldCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.DisableShieldCollision"));
    struct Params_DisableShieldCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableShieldCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::DisableMeleeCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.DisableMeleeCollision"));
    struct Params_DisableMeleeCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableMeleeCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::DisableCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.DisableCollision"));
    struct Params_DisableCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::DeactivateWeaponThreat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.DeactivateWeaponThreat"));
    struct Params_DeactivateWeaponThreat {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DeactivateWeaponThreat params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemyAIWeapon_Interface::ActivateWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIWeapon_Interface.ActivateWeapon"));
    struct Params_ActivateWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ActivateWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
