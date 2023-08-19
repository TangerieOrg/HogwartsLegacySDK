#pragma once
#include <cstdint>
class USoundClass;
#pragma pack(push, 1)
struct FSoundClassAdjuster {
    USoundClass* SoundClassObject; // 0x0
    float VolumeAdjuster; // 0x8
    float PitchAdjuster; // 0xc
    float LowPassFilterFrequency; // 0x10
    uint8_t bApplyToChildren : 1; // 0x14
    uint8_t pad_bitfield_14_1 : 7;
    char pad_15[0x3];
    float VoiceCenterChannelVolumeAdjuster; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
