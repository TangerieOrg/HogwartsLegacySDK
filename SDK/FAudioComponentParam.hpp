#pragma once
#include <cstdint>
class USoundWave;
#pragma pack(push, 1)
struct FAudioComponentParam {
    FName ParamName; // 0x0
    float FloatParam; // 0x8
    bool BoolParam; // 0xc
    char pad_d[0x3];
    int32_t IntParam; // 0x10
    char pad_14[0x4];
    USoundWave* SoundWaveParam; // 0x18
}; // Size: 0x20
#pragma pack(pop)
