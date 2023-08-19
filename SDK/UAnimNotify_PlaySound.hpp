#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
class USoundBase;
#pragma pack(push, 1)
class UAnimNotify_PlaySound : public UAnimNotify {
public:
    USoundBase* Sound; // 0x38
    float VolumeMultiplier; // 0x40
    float PitchMultiplier; // 0x44
    uint8_t bFollow : 1; // 0x48
    uint8_t pad_bitfield_48_1 : 7;
    char pad_49[0x3];
    FName AttachName; // 0x4c
    char pad_54[0x4];
    static UAnimNotify_PlaySound* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
