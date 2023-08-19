#include "AActor.hpp"
#include "ABP_DarkWizardWand_C.hpp"
#include "AEnemyAIWeapon.hpp"
#include "EEnemyBuffTypeEnum.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMultiFX2Var.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
bool ABP_DarkWizardWand_C::EventWeaponDeactivateHeavyFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDeactivateHeavyFx"));
    struct Params_EventWeaponDeactivateHeavyFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDeactivateHeavyFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ABP_DarkWizardWand_C* ABP_DarkWizardWand_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C");
    return (ABP_DarkWizardWand_C*)res;
}
bool ABP_DarkWizardWand_C::EventWeaponMeleePawnSlashFx(FHitResult& HitResult, FGameplayTagContainer& InMunitionTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponMeleePawnSlashFx"));
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
bool ABP_DarkWizardWand_C::DisableShieldCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.DisableShieldCollision"));
    struct Params_DisableShieldCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableShieldCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventTransientWeaponPoweredUp() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventTransientWeaponPoweredUp"));
    struct Params_EventTransientWeaponPoweredUp {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventTransientWeaponPoweredUp params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::ActivateWeaponThreat() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.ActivateWeaponThreat"));
    struct Params_ActivateWeaponThreat {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ActivateWeaponThreat params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventTransientWeaponActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventTransientWeaponActivate"));
    struct Params_EventTransientWeaponActivate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventTransientWeaponActivate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::HideWeaponStopFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.HideWeaponStopFX"));
    struct Params_HideWeaponStopFX {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HideWeaponStopFX params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::ShowWeaponStartFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.ShowWeaponStartFX"));
    struct Params_ShowWeaponStartFX {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShowWeaponStartFX params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::ActivateWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.ActivateWeapon"));
    struct Params_ActivateWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ActivateWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::DeactivateWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.DeactivateWeapon"));
    struct Params_DeactivateWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DeactivateWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_DarkWizardWand_C::ExecuteUbergraph_BP_DarkWizardWand(int32_t EntryPoint, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_DisableMeleeCollision_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.ExecuteUbergraph_BP_DarkWizardWand"));
    struct Params_ExecuteUbergraph_BP_DarkWizardWand {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue; // 0x8
        bool CallFunc_DisableMeleeCollision_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ExecuteUbergraph_BP_DarkWizardWand params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_SpawnSystemAttached_ReturnValue = (UNiagaraComponent*)CallFunc_SpawnSystemAttached_ReturnValue;
    params.CallFunc_DisableMeleeCollision_ReturnValue = (bool)CallFunc_DisableMeleeCollision_ReturnValue;
    ProcessEvent(func, &params);
}
bool ABP_DarkWizardWand_C::EnableCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EnableCollision"));
    struct Params_EnableCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EnableCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponDisarmedForRecoveryFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDisarmedForRecoveryFx"));
    struct Params_EventWeaponDisarmedForRecoveryFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDisarmedForRecoveryFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::DeactivateWeaponThreat() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.DeactivateWeaponThreat"));
    struct Params_DeactivateWeaponThreat {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DeactivateWeaponThreat params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMeshComponent* ABP_DarkWizardWand_C::FireWeaponAOE1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.FireWeaponAOE1"));
    struct Params_FireWeaponAOE1 {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_FireWeaponAOE1 params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EnableShieldCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EnableShieldCollision"));
    struct Params_EnableShieldCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EnableShieldCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponSpawnStoredWeaponFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponSpawnStoredWeaponFx"));
    struct Params_EventWeaponSpawnStoredWeaponFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponSpawnStoredWeaponFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::SpawnStoredWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.SpawnStoredWeapon"));
    struct Params_SpawnStoredWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SpawnStoredWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponDeactivatedFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDeactivatedFx"));
    struct Params_EventWeaponDeactivatedFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDeactivatedFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::StartWeaponSwing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.StartWeaponSwing"));
    struct Params_StartWeaponSwing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StartWeaponSwing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::WeaponStored() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.WeaponStored"));
    struct Params_WeaponStored {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WeaponStored params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventTrackPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventTrackPoints"));
    struct Params_EventTrackPoints {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventTrackPoints params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventTransientWeaponDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventTransientWeaponDeactivate"));
    struct Params_EventTransientWeaponDeactivate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventTransientWeaponDeactivate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponTriggerImpactFx(FHitResult& HitResult, FVector CallFunc_GetSocketLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponTriggerImpactFx"));
    struct Params_EventWeaponTriggerImpactFx {
        FHitResult HitResult; // 0x0
        bool ReturnValue; // 0x88
        char pad_89[0x3];
        FVector CallFunc_GetSocketLocation_ReturnValue; // 0x8c
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue; // 0x98
    }; // Size: 0xa0
    Params_EventWeaponTriggerImpactFx params{};
    params.HitResult = (FHitResult)HitResult;
    params.CallFunc_GetSocketLocation_ReturnValue = (FVector)CallFunc_GetSocketLocation_ReturnValue;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponImpactGlowFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponImpactGlowFx"));
    struct Params_EventWeaponImpactGlowFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponImpactGlowFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponMeleeAttackStartFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponMeleeAttackStartFx"));
    struct Params_EventWeaponMeleeAttackStartFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponMeleeAttackStartFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponFireAOE1Fx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponFireAOE1Fx"));
    struct Params_EventWeaponFireAOE1Fx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponFireAOE1Fx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponDisarmedFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDisarmedFx"));
    struct Params_EventWeaponDisarmedFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDisarmedFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponThrownPawnStabFx(FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponThrownPawnStabFx"));
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
bool ABP_DarkWizardWand_C::EnablePhysicsSim(bool CallFunc_IsAnySimulatingPhysics_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EnablePhysicsSim"));
    struct Params_EnablePhysicsSim {
        bool ReturnValue; // 0x0
        bool CallFunc_IsAnySimulatingPhysics_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_EnablePhysicsSim params{};
    params.CallFunc_IsAnySimulatingPhysics_ReturnValue = (bool)CallFunc_IsAnySimulatingPhysics_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponActivateBuffEmitterFx(EEnemyBuffTypeEnum InBuffType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponActivateBuffEmitterFx"));
    struct Params_EventWeaponActivateBuffEmitterFx {
        EEnemyBuffTypeEnum InBuffType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_EventWeaponActivateBuffEmitterFx params{};
    params.InBuffType = (EEnemyBuffTypeEnum)InBuffType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponDeactivateBuffEmitterFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDeactivateBuffEmitterFx"));
    struct Params_EventWeaponDeactivateBuffEmitterFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDeactivateBuffEmitterFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::InterfaceWeaponAcquire() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.InterfaceWeaponAcquire"));
    struct Params_InterfaceWeaponAcquire {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InterfaceWeaponAcquire params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponTriggerProtegoFx(FHitResult& HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FRotator CallFunc_MakeRotationFromAxes_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponTriggerProtegoFx"));
    struct Params_EventWeaponTriggerProtegoFx {
        FHitResult HitResult; // 0x0
        bool ReturnValue; // 0x88
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x89
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x8a
        char pad_8b[0x1];
        float CallFunc_BreakHitResult_Time; // 0x8c
        float CallFunc_BreakHitResult_Distance; // 0x90
        FVector CallFunc_BreakHitResult_Location; // 0x94
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0xa0
        FVector CallFunc_BreakHitResult_Normal; // 0xac
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0xb8
        char pad_c4[0x4];
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0xc8
        AActor* CallFunc_BreakHitResult_HitActor; // 0xd0
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0xd8
        FName CallFunc_BreakHitResult_HitBoneName; // 0xe0
        int32_t CallFunc_BreakHitResult_HitItem; // 0xe8
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0xec
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0xf0
        FVector CallFunc_BreakHitResult_TraceStart; // 0xf4
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x100
        FRotator CallFunc_MakeRotationFromAxes_ReturnValue; // 0x10c
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue; // 0x118
    }; // Size: 0x120
    Params_EventWeaponTriggerProtegoFx params{};
    params.HitResult = (FHitResult)HitResult;
    params.CallFunc_BreakHitResult_bBlockingHit = (bool)CallFunc_BreakHitResult_bBlockingHit;
    params.CallFunc_BreakHitResult_bInitialOverlap = (bool)CallFunc_BreakHitResult_bInitialOverlap;
    params.CallFunc_BreakHitResult_Time = (float)CallFunc_BreakHitResult_Time;
    params.CallFunc_BreakHitResult_Distance = (float)CallFunc_BreakHitResult_Distance;
    params.CallFunc_BreakHitResult_Location = (FVector)CallFunc_BreakHitResult_Location;
    params.CallFunc_BreakHitResult_ImpactPoint = (FVector)CallFunc_BreakHitResult_ImpactPoint;
    params.CallFunc_BreakHitResult_Normal = (FVector)CallFunc_BreakHitResult_Normal;
    params.CallFunc_BreakHitResult_ImpactNormal = (FVector)CallFunc_BreakHitResult_ImpactNormal;
    params.CallFunc_BreakHitResult_PhysMat = (UPhysicalMaterial*)CallFunc_BreakHitResult_PhysMat;
    params.CallFunc_BreakHitResult_HitActor = (AActor*)CallFunc_BreakHitResult_HitActor;
    params.CallFunc_BreakHitResult_HitComponent = (UPrimitiveComponent*)CallFunc_BreakHitResult_HitComponent;
    params.CallFunc_BreakHitResult_HitBoneName = (FName)CallFunc_BreakHitResult_HitBoneName;
    params.CallFunc_BreakHitResult_HitItem = (int32_t)CallFunc_BreakHitResult_HitItem;
    params.CallFunc_BreakHitResult_ElementIndex = (int32_t)CallFunc_BreakHitResult_ElementIndex;
    params.CallFunc_BreakHitResult_FaceIndex = (int32_t)CallFunc_BreakHitResult_FaceIndex;
    params.CallFunc_BreakHitResult_TraceStart = (FVector)CallFunc_BreakHitResult_TraceStart;
    params.CallFunc_BreakHitResult_TraceEnd = (FVector)CallFunc_BreakHitResult_TraceEnd;
    params.CallFunc_MakeRotationFromAxes_ReturnValue = (FRotator)CallFunc_MakeRotationFromAxes_ReturnValue;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::InterfaceWeaponRigidBodyActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.InterfaceWeaponRigidBodyActivate"));
    struct Params_InterfaceWeaponRigidBodyActivate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InterfaceWeaponRigidBodyActivate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::InterfaceWeaponRigidBodyDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.InterfaceWeaponRigidBodyDeactivate"));
    struct Params_InterfaceWeaponRigidBodyDeactivate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InterfaceWeaponRigidBodyDeactivate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_DarkWizardWand_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
bool ABP_DarkWizardWand_C::EventWeaponDestroyedFx(FHitResult& HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FRotator CallFunc_MakeRotationFromAxes_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDestroyedFx"));
    struct Params_EventWeaponDestroyedFx {
        FHitResult HitResult; // 0x0
        bool ReturnValue; // 0x88
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x89
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x8a
        char pad_8b[0x1];
        float CallFunc_BreakHitResult_Time; // 0x8c
        float CallFunc_BreakHitResult_Distance; // 0x90
        FVector CallFunc_BreakHitResult_Location; // 0x94
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0xa0
        FVector CallFunc_BreakHitResult_Normal; // 0xac
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0xb8
        char pad_c4[0x4];
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0xc8
        AActor* CallFunc_BreakHitResult_HitActor; // 0xd0
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0xd8
        FName CallFunc_BreakHitResult_HitBoneName; // 0xe0
        int32_t CallFunc_BreakHitResult_HitItem; // 0xe8
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0xec
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0xf0
        FVector CallFunc_BreakHitResult_TraceStart; // 0xf4
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x100
        FRotator CallFunc_MakeRotationFromAxes_ReturnValue; // 0x10c
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue; // 0x118
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1; // 0x120
    }; // Size: 0x128
    Params_EventWeaponDestroyedFx params{};
    params.HitResult = (FHitResult)HitResult;
    params.CallFunc_BreakHitResult_bBlockingHit = (bool)CallFunc_BreakHitResult_bBlockingHit;
    params.CallFunc_BreakHitResult_bInitialOverlap = (bool)CallFunc_BreakHitResult_bInitialOverlap;
    params.CallFunc_BreakHitResult_Time = (float)CallFunc_BreakHitResult_Time;
    params.CallFunc_BreakHitResult_Distance = (float)CallFunc_BreakHitResult_Distance;
    params.CallFunc_BreakHitResult_Location = (FVector)CallFunc_BreakHitResult_Location;
    params.CallFunc_BreakHitResult_ImpactPoint = (FVector)CallFunc_BreakHitResult_ImpactPoint;
    params.CallFunc_BreakHitResult_Normal = (FVector)CallFunc_BreakHitResult_Normal;
    params.CallFunc_BreakHitResult_ImpactNormal = (FVector)CallFunc_BreakHitResult_ImpactNormal;
    params.CallFunc_BreakHitResult_PhysMat = (UPhysicalMaterial*)CallFunc_BreakHitResult_PhysMat;
    params.CallFunc_BreakHitResult_HitActor = (AActor*)CallFunc_BreakHitResult_HitActor;
    params.CallFunc_BreakHitResult_HitComponent = (UPrimitiveComponent*)CallFunc_BreakHitResult_HitComponent;
    params.CallFunc_BreakHitResult_HitBoneName = (FName)CallFunc_BreakHitResult_HitBoneName;
    params.CallFunc_BreakHitResult_HitItem = (int32_t)CallFunc_BreakHitResult_HitItem;
    params.CallFunc_BreakHitResult_ElementIndex = (int32_t)CallFunc_BreakHitResult_ElementIndex;
    params.CallFunc_BreakHitResult_FaceIndex = (int32_t)CallFunc_BreakHitResult_FaceIndex;
    params.CallFunc_BreakHitResult_TraceStart = (FVector)CallFunc_BreakHitResult_TraceStart;
    params.CallFunc_BreakHitResult_TraceEnd = (FVector)CallFunc_BreakHitResult_TraceEnd;
    params.CallFunc_MakeRotationFromAxes_ReturnValue = (FRotator)CallFunc_MakeRotationFromAxes_ReturnValue;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponTriggerGenericImpactFx(FHitResult& HitResult, FVector CallFunc_GetSocketLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponTriggerGenericImpactFx"));
    struct Params_EventWeaponTriggerGenericImpactFx {
        FHitResult HitResult; // 0x0
        bool ReturnValue; // 0x88
        char pad_89[0x3];
        FVector CallFunc_GetSocketLocation_ReturnValue; // 0x8c
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue; // 0x98
    }; // Size: 0xa0
    Params_EventWeaponTriggerGenericImpactFx params{};
    params.HitResult = (FHitResult)HitResult;
    params.CallFunc_GetSocketLocation_ReturnValue = (FVector)CallFunc_GetSocketLocation_ReturnValue;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponTriggerThrownFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponTriggerThrownFx"));
    struct Params_EventWeaponTriggerThrownFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponTriggerThrownFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponActivateLiteFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponActivateLiteFx"));
    struct Params_EventWeaponActivateLiteFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponActivateLiteFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EventWeaponDeactivateLiteFx() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventWeaponDeactivateLiteFx"));
    struct Params_EventWeaponDeactivateLiteFx {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EventWeaponDeactivateLiteFx params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UCapsuleComponent* ABP_DarkWizardWand_C::GetCapsuleComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.GetCapsuleComponent"));
    struct Params_GetCapsuleComponent {
        UCapsuleComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCapsuleComponent params{};
    ProcessEvent(func, &params);
    return (UCapsuleComponent*)params.ReturnValue;
}
UMeshComponent* ABP_DarkWizardWand_C::GetMeshComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.GetMeshComponent"));
    struct Params_GetMeshComponent {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMeshComponent params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::DisableMeleeCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.DisableMeleeCollision"));
    struct Params_DisableMeleeCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableMeleeCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::DisableCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.DisableCollision"));
    struct Params_DisableCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisableCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::EnableMeleeCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EnableMeleeCollision"));
    struct Params_EnableMeleeCollision {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EnableMeleeCollision params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_DarkWizardWand_C::DisablePhysicsSim(bool CallFunc_IsAnySimulatingPhysics_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.DisablePhysicsSim"));
    struct Params_DisablePhysicsSim {
        bool ReturnValue; // 0x0
        bool CallFunc_IsAnySimulatingPhysics_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_DisablePhysicsSim params{};
    params.CallFunc_IsAnySimulatingPhysics_ReturnValue = (bool)CallFunc_IsAnySimulatingPhysics_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
USceneComponent* ABP_DarkWizardWand_C::GetSceneComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.GetSceneComponent"));
    struct Params_GetSceneComponent {
        USceneComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSceneComponent params{};
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
void ABP_DarkWizardWand_C::EventDisableRangedPawnCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/DarkWizard/BP_DarkWizardWand.BP_DarkWizardWand_C.EventDisableRangedPawnCollision"));
    struct Params_EventDisableRangedPawnCollision {
    }; // Size: 0x0
    Params_EventDisableRangedPawnCollision params{};
    ProcessEvent(func, &params);
}
