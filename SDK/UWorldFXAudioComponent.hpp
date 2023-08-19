#pragma once
#include <cstdint>
#include "FWorldFXAudioEvent.hpp"
#include "FWorldFXAudioTracker.hpp"
#include "USceneComponent.hpp"
class UWorldFXRule;
#pragma pack(push, 1)
class UWorldFXAudioComponent : public USceneComponent {
public:
    FWorldFXAudioEvent SFX; // 0x220
    FWorldFXAudioTracker Tracker; // 0x280
    bool bSpawnAttached; // 0x290
    char pad_291[0xf];
    static UWorldFXAudioComponent* StaticClass();
    void SetSpawnAttached(bool bNewSpawnAttached);
    void GetSpawnAttached(bool& bIsSpawnAttached);
    void ForceRefreshPreview();
}; // Size: 0x2a0
#pragma pack(pop)
