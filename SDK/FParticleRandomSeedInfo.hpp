#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FParticleRandomSeedInfo {
    FName ParameterName; // 0x0
    uint8_t bGetSeedFromInstance : 1; // 0x8
    uint8_t bInstanceSeedIsIndex : 1; // 0x8
    uint8_t bResetSeedOnEmitterLooping : 1; // 0x8
    uint8_t bRandomlySelectSeedArray : 1; // 0x8
    uint8_t pad_bitfield_8_4 : 4;
    char pad_9[0x7];
    TArray<int32_t> RandomSeeds; // 0x10
}; // Size: 0x20
#pragma pack(pop)
