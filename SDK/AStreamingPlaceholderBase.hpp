#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AStreamingPlaceholderBase : public AActor {
public:
    char pad_248[0x18];
    static AStreamingPlaceholderBase* StaticClass();
    void WaitUntilLoadIsComplete();
    void TriggerLoad(bool bInSpawnWhenReady, bool bForceBlockingLoad);
    void SpawnObject(bool bBlockingLoadIfNotLoaded);
    void ReleaseObject();
}; // Size: 0x260
#pragma pack(pop)
