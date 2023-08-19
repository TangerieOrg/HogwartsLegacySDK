#pragma once
#include <cstdint>
#include "FOverlapEffectsHandlerInstancedFoliageBVHTestEntry.hpp"
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerInstancedFoliageBVHTest : public UOverlapEffectsHandlerMinimumSpeedBase {
public:
    TArray<FOverlapEffectsHandlerInstancedFoliageBVHTestEntry> TypeEvents; // 0x50
    int32_t UpdateRateMS; // 0x60
    char pad_64[0x4];
    static UOverlapEffectsHandlerInstancedFoliageBVHTest* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
