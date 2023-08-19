#pragma once
#include <cstdint>
class UOverlapEffectsHandlerEffect;
#pragma pack(push, 1)
struct FOverlapEffectsHandlerInstancedFoliageBVHTestEntry {
    TArray<void*> FoliageTypes; // 0x0
    TArray<UOverlapEffectsHandlerEffect*> Effects; // 0x10
    float ActorXYBoundsPercent; // 0x20
    float NextUpdate; // 0x24
    bool bReadyToTest; // 0x28
    char pad_29[0x7];
}; // Size: 0x30
#pragma pack(pop)
