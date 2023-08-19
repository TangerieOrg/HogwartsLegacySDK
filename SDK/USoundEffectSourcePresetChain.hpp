#pragma once
#include <cstdint>
#include "FSourceEffectChainEntry.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USoundEffectSourcePresetChain : public UObject {
public:
    TArray<FSourceEffectChainEntry> Chain; // 0x28
    uint8_t bPlayEffectChainTails : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x7];
    static USoundEffectSourcePresetChain* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
