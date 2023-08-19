#pragma once
#include <cstdint>
#include "USoundNodeAssetReferencer.hpp"
class USoundWave;
#pragma pack(push, 1)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer {
public:
    char pad_48[0x28];
    USoundWave* SoundWave; // 0x70
    char pad_78[0x8];
    uint8_t bLooping : 1; // 0x80
    uint8_t pad_bitfield_80_1 : 7;
    char pad_81[0x7];
    static USoundNodeWavePlayer* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
