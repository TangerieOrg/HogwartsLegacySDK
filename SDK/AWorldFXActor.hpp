#pragma once
#include <cstdint>
#include "AActor.hpp"
class UWorldFXComponent;
#pragma pack(push, 1)
class AWorldFXActor : public AActor {
public:
    UWorldFXComponent* FXComponent; // 0x248
    static AWorldFXActor* StaticClass();
    void SetSpawnAttached(bool bNewSpawnAttached);
    void ResetCascadeParameters();
    void RefreshCascadeParameters();
    void GetSpawnAttached(bool& bIsSpawnAttached);
    void ForceRefreshPreview();
}; // Size: 0x250
#pragma pack(pop)
