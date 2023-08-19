#include "AActor.hpp"
#include "AWorldFXActor.hpp"
#include "UFunction.hpp"
#include "UWorldFXComponent.hpp"
void AWorldFXActor::SetSpawnAttached(bool bNewSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXActor.SetSpawnAttached"));
    struct Params_SetSpawnAttached {
        bool bNewSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_SetSpawnAttached params{};
    params.bNewSpawnAttached = (bool)bNewSpawnAttached;
    ProcessEvent(func, &params);
}
AWorldFXActor* AWorldFXActor::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXActor");
    return (AWorldFXActor*)res;
}
void AWorldFXActor::ResetCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXActor.ResetCascadeParameters"));
    struct Params_ResetCascadeParameters {
    }; // Size: 0x0
    Params_ResetCascadeParameters params{};
    ProcessEvent(func, &params);
}
void AWorldFXActor::RefreshCascadeParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXActor.RefreshCascadeParameters"));
    struct Params_RefreshCascadeParameters {
    }; // Size: 0x0
    Params_RefreshCascadeParameters params{};
    ProcessEvent(func, &params);
}
void AWorldFXActor::GetSpawnAttached(bool& bIsSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXActor.GetSpawnAttached"));
    struct Params_GetSpawnAttached {
        bool bIsSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_GetSpawnAttached params{};
    params.bIsSpawnAttached = (bool)bIsSpawnAttached;
    ProcessEvent(func, &params);
    bIsSpawnAttached = params.bIsSpawnAttached;
}
void AWorldFXActor::ForceRefreshPreview() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXActor.ForceRefreshPreview"));
    struct Params_ForceRefreshPreview {
    }; // Size: 0x0
    Params_ForceRefreshPreview params{};
    ProcessEvent(func, &params);
}
