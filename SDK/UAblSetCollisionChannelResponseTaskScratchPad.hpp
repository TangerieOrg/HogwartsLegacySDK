#pragma once
#include <cstdint>
#include "FCollisionLayerResponseEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblSetCollisionChannelResponseTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<FCollisionLayerResponseEntry> PreviousCollisionValues; // 0x28
    static UAblSetCollisionChannelResponseTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
