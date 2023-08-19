#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeOscillator : public USoundNode {
public:
    uint8_t bModulateVolume : 1; // 0x48
    uint8_t bModulatePitch : 1; // 0x48
    uint8_t pad_bitfield_48_2 : 6;
    char pad_49[0x3];
    float AmplitudeMin; // 0x4c
    float AmplitudeMax; // 0x50
    float FrequencyMin; // 0x54
    float FrequencyMax; // 0x58
    float OffsetMin; // 0x5c
    float OffsetMax; // 0x60
    float CenterMin; // 0x64
    float CenterMax; // 0x68
    char pad_6c[0x4];
    static USoundNodeOscillator* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
