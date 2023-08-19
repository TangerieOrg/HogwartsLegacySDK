#pragma once
#include <cstdint>
#include "AActor.hpp"
class UWorldFXAudioComponent;
#pragma pack(push, 1)
class AWorldFXAudioActor : public AActor {
public:
    UWorldFXAudioComponent* SFXComponent; // 0x248
    static AWorldFXAudioActor* StaticClass();
    void SetSpawnAttached(bool bNewSpawnAttached);
    void GetSpawnAttached(bool& bIsSpawnAttached);
    void ForceRefreshPreview();
}; // Size: 0x250
#pragma pack(pop)
