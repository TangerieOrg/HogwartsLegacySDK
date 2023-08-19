#include "FObjectStateData.hpp"
#include "UAkAudioEvent.hpp"
#include "UBaseStateComponent.hpp"
#include "UFunction.hpp"
#include "UObjectStateComponent.hpp"
UObjectStateComponent* UObjectStateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectStateComponent");
    return (UObjectStateComponent*)res;
}
void UObjectStateComponent::SetDamageable(bool bDamageable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateComponent.SetDamageable"));
    struct Params_SetDamageable {
        bool bDamageable; // 0x0
    }; // Size: 0x1
    Params_SetDamageable params{};
    params.bDamageable = (bool)bDamageable;
    ProcessEvent(func, &params);
}
void UObjectStateComponent::SetHitSfx(UAkAudioEvent* InSfx) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateComponent.SetHitSfx"));
    struct Params_SetHitSfx {
        UAkAudioEvent* InSfx; // 0x0
    }; // Size: 0x8
    Params_SetHitSfx params{};
    params.InSfx = (UAkAudioEvent*)InSfx;
    ProcessEvent(func, &params);
}
void UObjectStateComponent::SetTargetable(bool bTargetable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateComponent.SetTargetable"));
    struct Params_SetTargetable {
        bool bTargetable; // 0x0
    }; // Size: 0x1
    Params_SetTargetable params{};
    params.bTargetable = (bool)bTargetable;
    ProcessEvent(func, &params);
}
void UObjectStateComponent::SetStartBroken(bool StartBroken) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateComponent.SetStartBroken"));
    struct Params_SetStartBroken {
        bool StartBroken; // 0x0
    }; // Size: 0x1
    Params_SetStartBroken params{};
    params.StartBroken = (bool)StartBroken;
    ProcessEvent(func, &params);
}
void UObjectStateComponent::SetImportant(bool bImportant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateComponent.SetImportant"));
    struct Params_SetImportant {
        bool bImportant; // 0x0
    }; // Size: 0x1
    Params_SetImportant params{};
    params.bImportant = (bool)bImportant;
    ProcessEvent(func, &params);
}
void UObjectStateComponent::SetNeverAffectNavmesh(bool NeverAffectNavmesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateComponent.SetNeverAffectNavmesh"));
    struct Params_SetNeverAffectNavmesh {
        bool NeverAffectNavmesh; // 0x0
    }; // Size: 0x1
    Params_SetNeverAffectNavmesh params{};
    params.NeverAffectNavmesh = (bool)NeverAffectNavmesh;
    ProcessEvent(func, &params);
}
void UObjectStateComponent::SetCanHighlight(bool bCanHighlight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateComponent.SetCanHighlight"));
    struct Params_SetCanHighlight {
        bool bCanHighlight; // 0x0
    }; // Size: 0x1
    Params_SetCanHighlight params{};
    params.bCanHighlight = (bool)bCanHighlight;
    ProcessEvent(func, &params);
}
void UObjectStateComponent::SetBaseHealth(float baseHealth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateComponent.SetBaseHealth"));
    struct Params_SetBaseHealth {
        float baseHealth; // 0x0
    }; // Size: 0x4
    Params_SetBaseHealth params{};
    params.baseHealth = (float)baseHealth;
    ProcessEvent(func, &params);
}
