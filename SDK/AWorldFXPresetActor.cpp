#include "AActor.hpp"
#include "AWorldFXPresetActor.hpp"
#include "UFunction.hpp"
#include "UWorldFXPresetComponent.hpp"
void AWorldFXPresetActor::SetSpawnAttachedOverride(bool bNewSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetActor.SetSpawnAttachedOverride"));
    struct Params_SetSpawnAttachedOverride {
        bool bNewSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_SetSpawnAttachedOverride params{};
    params.bNewSpawnAttached = (bool)bNewSpawnAttached;
    ProcessEvent(func, &params);
}
AWorldFXPresetActor* AWorldFXPresetActor::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXPresetActor");
    return (AWorldFXPresetActor*)res;
}
void AWorldFXPresetActor::ResetCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetActor.ResetCascadeParameters"));
    struct Params_ResetCascadeParameters {
    }; // Size: 0x0
    Params_ResetCascadeParameters params{};
    ProcessEvent(func, &params);
}
void AWorldFXPresetActor::RefreshCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetActor.RefreshCascadeParameters"));
    struct Params_RefreshCascadeParameters {
    }; // Size: 0x0
    Params_RefreshCascadeParameters params{};
    ProcessEvent(func, &params);
}
void AWorldFXPresetActor::GetSpawnAttached(bool& bIsSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetActor.GetSpawnAttached"));
    struct Params_GetSpawnAttached {
        bool bIsSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_GetSpawnAttached params{};
    params.bIsSpawnAttached = (bool)bIsSpawnAttached;
    ProcessEvent(func, &params);
    bIsSpawnAttached = params.bIsSpawnAttached;
}
void AWorldFXPresetActor::ForceRefreshPreview() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetActor.ForceRefreshPreview"));
    struct Params_ForceRefreshPreview {
    }; // Size: 0x0
    Params_ForceRefreshPreview params{};
    ProcessEvent(func, &params);
}
void AWorldFXPresetActor::ClearSpawnAttachedOverride(bool bNewSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetActor.ClearSpawnAttachedOverride"));
    struct Params_ClearSpawnAttachedOverride {
        bool bNewSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_ClearSpawnAttachedOverride params{};
    params.bNewSpawnAttached = (bool)bNewSpawnAttached;
    ProcessEvent(func, &params);
}
