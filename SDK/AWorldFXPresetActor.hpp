#pragma once
#include <cstdint>
#include "AActor.hpp"
class UWorldFXPresetComponent;
#pragma pack(push, 1)
class AWorldFXPresetActor : public AActor {
public:
    UWorldFXPresetComponent* FXComponent; // 0x248
    static AWorldFXPresetActor* StaticClass();
    void SetSpawnAttachedOverride(bool bNewSpawnAttached);
    void ResetCascadeParameters();
    void RefreshCascadeParameters();
    void GetSpawnAttached(bool& bIsSpawnAttached);
    void ForceRefreshPreview();
    void ClearSpawnAttachedOverride(bool bNewSpawnAttached);
}; // Size: 0x250
#pragma pack(pop)
