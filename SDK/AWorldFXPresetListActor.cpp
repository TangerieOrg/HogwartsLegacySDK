#include "AActor.hpp"
#include "AWorldFXPresetListActor.hpp"
#include "UFunction.hpp"
#include "UWorldFXPresetComponent.hpp"
void AWorldFXPresetListActor::ClearSpawnAttachedOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetListActor.ClearSpawnAttachedOverride"));
    struct Params_ClearSpawnAttachedOverride {
    }; // Size: 0x0
    Params_ClearSpawnAttachedOverride params{};
    ProcessEvent(func, &params);
}
void AWorldFXPresetListActor::ResetCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetListActor.ResetCascadeParameters"));
    struct Params_ResetCascadeParameters {
    }; // Size: 0x0
    Params_ResetCascadeParameters params{};
    ProcessEvent(func, &params);
}
AWorldFXPresetListActor* AWorldFXPresetListActor::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXPresetListActor");
    return (AWorldFXPresetListActor*)res;
}
void AWorldFXPresetListActor::ForceRefreshPreviews() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetListActor.ForceRefreshPreviews"));
    struct Params_ForceRefreshPreviews {
    }; // Size: 0x0
    Params_ForceRefreshPreviews params{};
    ProcessEvent(func, &params);
}
void AWorldFXPresetListActor::SetSpawnAttachedOverride(bool bNewSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetListActor.SetSpawnAttachedOverride"));
    struct Params_SetSpawnAttachedOverride {
        bool bNewSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_SetSpawnAttachedOverride params{};
    params.bNewSpawnAttached = (bool)bNewSpawnAttached;
    ProcessEvent(func, &params);
}
void AWorldFXPresetListActor::RefreshCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetListActor.RefreshCascadeParameters"));
    struct Params_RefreshCascadeParameters {
    }; // Size: 0x0
    Params_RefreshCascadeParameters params{};
    ProcessEvent(func, &params);
}
void AWorldFXPresetListActor::GetSpawnAttached(bool& bIsSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXPresetListActor.GetSpawnAttached"));
    struct Params_GetSpawnAttached {
        bool bIsSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_GetSpawnAttached params{};
    params.bIsSpawnAttached = (bool)bIsSpawnAttached;
    ProcessEvent(func, &params);
    bIsSpawnAttached = params.bIsSpawnAttached;
}
