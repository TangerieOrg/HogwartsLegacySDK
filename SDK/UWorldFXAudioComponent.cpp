#include "FWorldFXAudioEvent.hpp"
#include "FWorldFXAudioTracker.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UWorldFXAudioComponent.hpp"
#include "UWorldFXRule.hpp"
UWorldFXAudioComponent* UWorldFXAudioComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXAudioComponent");
    return (UWorldFXAudioComponent*)res;
}
void UWorldFXAudioComponent::SetSpawnAttached(bool bNewSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXAudioComponent.SetSpawnAttached"));
    struct Params_SetSpawnAttached {
        bool bNewSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_SetSpawnAttached params{};
    params.bNewSpawnAttached = (bool)bNewSpawnAttached;
    ProcessEvent(func, &params);
}
void UWorldFXAudioComponent::GetSpawnAttached(bool& bIsSpawnAttached) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXAudioComponent.GetSpawnAttached"));
    struct Params_GetSpawnAttached {
        bool bIsSpawnAttached; // 0x0
    }; // Size: 0x1
    Params_GetSpawnAttached params{};
    params.bIsSpawnAttached = (bool)bIsSpawnAttached;
    ProcessEvent(func, &params);
    bIsSpawnAttached = params.bIsSpawnAttached;
}
void UWorldFXAudioComponent::ForceRefreshPreview() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXAudioComponent.ForceRefreshPreview"));
    struct Params_ForceRefreshPreview {
    }; // Size: 0x0
    Params_ForceRefreshPreview params{};
    ProcessEvent(func, &params);
}
