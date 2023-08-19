#pragma once
#include <cstdint>
class USoundMix;
#pragma pack(push, 1)
struct FPassiveSoundMixModifier {
    USoundMix* SoundMix; // 0x0
    float MinVolumeThreshold; // 0x8
    float MaxVolumeThreshold; // 0xc
}; // Size: 0x10
#pragma pack(pop)
