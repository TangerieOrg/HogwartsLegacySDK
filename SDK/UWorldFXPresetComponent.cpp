#include "FDataTableRowHandle.hpp"
#include "FWorldFXAudioEventExtra.hpp"
#include "FWorldFXFull.hpp"
#include "UAkAudioEvent.hpp"
#include "UFunction.hpp"
#include "UWorldFXCascadeInstanceParametersBase.hpp"
#include "UWorldFXComponentBase.hpp"
#include "UWorldFXNiagaraSystemInitializer.hpp"
#include "UWorldFXPresetComponent.hpp"
#include "UWorldFXRule.hpp"
UWorldFXPresetComponent* UWorldFXPresetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXPresetComponent");
    return (UWorldFXPresetComponent*)res;
}
void UWorldFXPresetComponent::SetSpawnAttachedOverride(bool bNewSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetComponent.SetSpawnAttachedOverride"));
    struct Params_SetSpawnAttachedOverride {
        bool bNewSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_SetSpawnAttachedOverride params{};
    params.bNewSpawnAttached = (bool)bNewSpawnAttached;
    ProcessEvent(func, &params);
}
void UWorldFXPresetComponent::GetSpawnAttached(bool& bIsSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetComponent.GetSpawnAttached"));
    struct Params_GetSpawnAttached {
        bool bIsSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_GetSpawnAttached params{};
    params.bIsSpawnAttached = (bool)bIsSpawnAttached;
    ProcessEvent(func, &params);
    bIsSpawnAttached = params.bIsSpawnAttached;
}
void UWorldFXPresetComponent::ResetCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetComponent.ResetCascadeParameters"));
    struct Params_ResetCascadeParameters {
    }; // Size: 0x0
    Params_ResetCascadeParameters params{};
    ProcessEvent(func, &params);
}
void UWorldFXPresetComponent::RefreshCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetComponent.RefreshCascadeParameters"));
    struct Params_RefreshCascadeParameters {
    }; // Size: 0x0
    Params_RefreshCascadeParameters params{};
    ProcessEvent(func, &params);
}
void UWorldFXPresetComponent::ClearSpawnAttachedOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetComponent.ClearSpawnAttachedOverride"));
    struct Params_ClearSpawnAttachedOverride {
    }; // Size: 0x0
    Params_ClearSpawnAttachedOverride params{};
    ProcessEvent(func, &params);
}
