#pragma once
#include <cstdint>
#include "AActor.hpp"
class UWorldFXPresetComponent;
#pragma pack(push, 1)
class AWorldFXPresetListActor : public AActor {
public:
    TArray<UWorldFXPresetComponent*> Presets; // 0x248
    static AWorldFXPresetListActor* StaticClass();
    void SetSpawnAttachedOverride(bool bNewSpawnAttached);
    void ResetCascadeParameters();
    void RefreshCascadeParameters();
    void GetSpawnAttached(bool& bIsSpawnAttached);
    void ForceRefreshPreviews();
    void ClearSpawnAttachedOverride();
}; // Size: 0x258
#pragma pack(pop)
