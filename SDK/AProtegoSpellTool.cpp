#include "AActor.hpp"
#include "AChannelingSpellTool.hpp"
#include "AMunitionType_Base.hpp"
#include "AProtegoSpellTool.hpp"
#include "FDamageResult.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMultiFX2Handle.hpp"
#include "FProtegoEffectsData.hpp"
#include "FProtegoLevelData.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPrimitiveComponent.hpp"
void AProtegoSpellTool::QueueParryTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.QueueParryTimerExpired"));
    struct Params_QueueParryTimerExpired {
    }; // Size: 0x0
    Params_QueueParryTimerExpired params{};
    ProcessEvent(func, &params);
}
AProtegoSpellTool* AProtegoSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ProtegoSpellTool");
    return (AProtegoSpellTool*)res;
}
bool AProtegoSpellTool::WasParryAbilityEventSent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.WasParryAbilityEventSent"));
    struct Params_WasParryAbilityEventSent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WasParryAbilityEventSent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AProtegoSpellTool::UpdateShieldEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.UpdateShieldEffects"));
    struct Params_UpdateShieldEffects {
    }; // Size: 0x0
    Params_UpdateShieldEffects params{};
    ProcessEvent(func, &params);
}
void AProtegoSpellTool::StateChanged(bool bInHideShield) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.StateChanged"));
    struct Params_StateChanged {
        bool bInHideShield; // 0x0
    }; // Size: 0x1
    Params_StateChanged params{};
    params.bInHideShield = (bool)bInHideShield;
    ProcessEvent(func, &params);
}
void AProtegoSpellTool::TurnOnProtegoEffects(bool bInShowActivateEffect, bool bInShowLoopEffect, int32_t InEffectIdx) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.TurnOnProtegoEffects"));
    struct Params_TurnOnProtegoEffects {
        bool bInShowActivateEffect; // 0x0
        bool bInShowLoopEffect; // 0x1
        char pad_2[0x2];
        int32_t InEffectIdx; // 0x4
    }; // Size: 0x8
    Params_TurnOnProtegoEffects params{};
    params.bInShowActivateEffect = (bool)bInShowActivateEffect;
    params.bInShowLoopEffect = (bool)bInShowLoopEffect;
    params.InEffectIdx = (int32_t)InEffectIdx;
    ProcessEvent(func, &params);
}
void AProtegoSpellTool::TurnOffProtegoEffects(bool bInShowDeactivateEffect, int32_t InEffectIdx) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.TurnOffProtegoEffects"));
    struct Params_TurnOffProtegoEffects {
        bool bInShowDeactivateEffect; // 0x0
        char pad_1[0x3];
        int32_t InEffectIdx; // 0x4
    }; // Size: 0x8
    Params_TurnOffProtegoEffects params{};
    params.bInShowDeactivateEffect = (bool)bInShowDeactivateEffect;
    params.InEffectIdx = (int32_t)InEffectIdx;
    ProcessEvent(func, &params);
}
void AProtegoSpellTool::StartShieldSkinEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.StartShieldSkinEffects"));
    struct Params_StartShieldSkinEffects {
    }; // Size: 0x0
    Params_StartShieldSkinEffects params{};
    ProcessEvent(func, &params);
}
void AProtegoSpellTool::StartShieldEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.StartShieldEffects"));
    struct Params_StartShieldEffects {
    }; // Size: 0x0
    Params_StartShieldEffects params{};
    ProcessEvent(func, &params);
}
void AProtegoSpellTool::ShutOffProtegoTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.ShutOffProtegoTimerExpired"));
    struct Params_ShutOffProtegoTimerExpired {
    }; // Size: 0x0
    Params_ShutOffProtegoTimerExpired params{};
    ProcessEvent(func, &params);
}
bool AProtegoSpellTool::ShouldShieldBeOn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.ShouldShieldBeOn"));
    struct Params_ShouldShieldBeOn {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldShieldBeOn params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AProtegoSpellTool::ParryWindowStackChanged(int32_t NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.ParryWindowStackChanged"));
    struct Params_ParryWindowStackChanged {
        int32_t NewValue; // 0x0
    }; // Size: 0x4
    Params_ParryWindowStackChanged params{};
    params.NewValue = (int32_t)NewValue;
    ProcessEvent(func, &params);
}
void AProtegoSpellTool::OnDeflectedAttack(FDamageResult& DamageResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.OnDeflectedAttack"));
    struct Params_OnDeflectedAttack {
        FDamageResult DamageResult; // 0x0
    }; // Size: 0x58
    Params_OnDeflectedAttack params{};
    params.DamageResult = (FDamageResult)DamageResult;
    ProcessEvent(func, &params);
    DamageResult = params.DamageResult;
}
bool AProtegoSpellTool::IsDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.IsDisabled"));
    struct Params_IsDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AProtegoSpellTool::Hit(FHitResult& HitResult, AMunitionType_Base* MunitionInstance, AActor* HitObject, UPrimitiveComponent* OverlappedComp, bool bUnblockable, bool bOverlap, bool bMunitionImpact) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.Hit"));
    struct Params_Hit {
        FHitResult HitResult; // 0x0
        AMunitionType_Base* MunitionInstance; // 0x88
        AActor* HitObject; // 0x90
        UPrimitiveComponent* OverlappedComp; // 0x98
        bool bUnblockable; // 0xa0
        bool bOverlap; // 0xa1
        bool bMunitionImpact; // 0xa2
    }; // Size: 0xa3
    Params_Hit params{};
    params.HitResult = (FHitResult)HitResult;
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.HitObject = (AActor*)HitObject;
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.bUnblockable = (bool)bUnblockable;
    params.bOverlap = (bool)bOverlap;
    params.bMunitionImpact = (bool)bMunitionImpact;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
}
void AProtegoSpellTool::HideProtego(bool bInHide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.HideProtego"));
    struct Params_HideProtego {
        bool bInHide; // 0x0
    }; // Size: 0x1
    Params_HideProtego params{};
    params.bInHide = (bool)bInHide;
    ProcessEvent(func, &params);
}
float AProtegoSpellTool::GetProtegoShieldIntensityValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.GetProtegoShieldIntensityValue"));
    struct Params_GetProtegoShieldIntensityValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetProtegoShieldIntensityValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AActor* AProtegoSpellTool::GetLastInstigator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.GetLastInstigator"));
    struct Params_GetLastInstigator {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLastInstigator params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
AActor* AProtegoSpellTool::GetAttackingActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.GetAttackingActor"));
    struct Params_GetAttackingActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttackingActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void AProtegoSpellTool::EndShieldSkinEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.EndShieldSkinEffects"));
    struct Params_EndShieldSkinEffects {
    }; // Size: 0x0
    Params_EndShieldSkinEffects params{};
    ProcessEvent(func, &params);
}
void AProtegoSpellTool::EndShieldEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.EndShieldEffects"));
    struct Params_EndShieldEffects {
    }; // Size: 0x0
    Params_EndShieldEffects params{};
    ProcessEvent(func, &params);
}
bool AProtegoSpellTool::CreateLinkToAttackingActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ProtegoSpellTool.CreateLinkToAttackingActor"));
    struct Params_CreateLinkToAttackingActor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CreateLinkToAttackingActor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
