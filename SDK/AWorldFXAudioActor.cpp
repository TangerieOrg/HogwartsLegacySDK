#include "AActor.hpp"
#include "AWorldFXAudioActor.hpp"
#include "UFunction.hpp"
#include "UWorldFXAudioComponent.hpp"
AWorldFXAudioActor* AWorldFXAudioActor::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXAudioActor");
    return (AWorldFXAudioActor*)res;
}
void AWorldFXAudioActor::SetSpawnAttached(bool bNewSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXAudioActor.SetSpawnAttached"));
    struct Params_SetSpawnAttached {
        bool bNewSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_SetSpawnAttached params{};
    params.bNewSpawnAttached = (bool)bNewSpawnAttached;
    ProcessEvent(func, &params);
}
void AWorldFXAudioActor::GetSpawnAttached(bool& bIsSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXAudioActor.GetSpawnAttached"));
    struct Params_GetSpawnAttached {
        bool bIsSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_GetSpawnAttached params{};
    params.bIsSpawnAttached = (bool)bIsSpawnAttached;
    ProcessEvent(func, &params);
    bIsSpawnAttached = params.bIsSpawnAttached;
}
void AWorldFXAudioActor::ForceRefreshPreview() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXAudioActor.ForceRefreshPreview"));
    struct Params_ForceRefreshPreview {
    }; // Size: 0x0
    Params_ForceRefreshPreview params{};
    ProcessEvent(func, &params);
}
