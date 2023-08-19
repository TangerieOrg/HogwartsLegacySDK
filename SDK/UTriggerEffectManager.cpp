#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTriggerEffect.hpp"
#include "UTriggerEffectManager.hpp"
UTriggerEffectManager* UTriggerEffectManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.TriggerEffectManager");
    return (UTriggerEffectManager*)res;
}
void UTriggerEffectManager::ResumeTriggerEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.TriggerEffectManager.ResumeTriggerEffects"));
    struct Params_ResumeTriggerEffects {
    }; // Size: 0x0
    Params_ResumeTriggerEffects params{};
    ProcessEvent(func, &params);
}
void UTriggerEffectManager::PauseTriggerEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.TriggerEffectManager.PauseTriggerEffects"));
    struct Params_PauseTriggerEffects {
    }; // Size: 0x0
    Params_PauseTriggerEffects params{};
    ProcessEvent(func, &params);
}
void UTriggerEffectManager::DeactivateTriggerEffect(UTriggerEffect* TriggerEffect, int32_t ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.TriggerEffectManager.DeactivateTriggerEffect"));
    struct Params_DeactivateTriggerEffect {
        UTriggerEffect* TriggerEffect; // 0x0
        int32_t ControllerId; // 0x8
    }; // Size: 0xc
    Params_DeactivateTriggerEffect params{};
    params.TriggerEffect = (UTriggerEffect*)TriggerEffect;
    params.ControllerId = (int32_t)ControllerId;
    ProcessEvent(func, &params);
}
void UTriggerEffectManager::ActivateTriggerEffect(UTriggerEffect* TriggerEffect, int32_t ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.TriggerEffectManager.ActivateTriggerEffect"));
    struct Params_ActivateTriggerEffect {
        UTriggerEffect* TriggerEffect; // 0x0
        int32_t ControllerId; // 0x8
    }; // Size: 0xc
    Params_ActivateTriggerEffect params{};
    params.TriggerEffect = (UTriggerEffect*)TriggerEffect;
    params.ControllerId = (int32_t)ControllerId;
    ProcessEvent(func, &params);
}
