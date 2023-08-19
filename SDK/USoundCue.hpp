#pragma once
#include <cstdint>
#include "FSoundAttenuationSettings.hpp"
#include "USoundBase.hpp"
class USoundNode;
#pragma pack(push, 1)
class USoundCue : public USoundBase {
public:
    uint8_t bPrimeOnLoad : 1; // 0x170
    uint8_t pad_bitfield_170_1 : 7;
    char pad_171[0x7];
    USoundNode* FirstNode; // 0x178
    float VolumeMultiplier; // 0x180
    float PitchMultiplier; // 0x184
    FSoundAttenuationSettings AttenuationOverrides; // 0x188
    float SubtitlePriority; // 0x528
    char pad_52c[0x4];
    uint8_t bOverrideAttenuation : 1; // 0x530
    uint8_t bExcludeFromRandomNodeBranchCulling : 1; // 0x530
    uint8_t pad_bitfield_530_2 : 6;
    char pad_531[0x3];
    int32_t CookedQualityIndex; // 0x534
    uint8_t bHasPlayWhenSilent : 1; // 0x538
    uint8_t pad_bitfield_538_1 : 7;
    char pad_539[0xf];
    static USoundCue* StaticClass();
}; // Size: 0x548
#pragma pack(pop)
