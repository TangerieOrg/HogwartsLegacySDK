#pragma once
#include <cstdint>
#include "EConcurrencyVolumeScaleMode.hpp"
#include "EMaxConcurrentResolutionRule\Type.hpp"
#pragma pack(push, 1)
struct FSoundConcurrencySettings {
    int32_t MaxCount; // 0x0
    uint8_t bLimitToOwner : 1; // 0x4
    uint8_t pad_bitfield_4_1 : 7;
    char pad_5[0x3];
    EMaxConcurrentResolutionRule::Type ResolutionRule; // 0x8
    char pad_9[0x3];
    float RetriggerTime; // 0xc
    float VolumeScale; // 0x10
    EConcurrencyVolumeScaleMode VolumeScaleMode; // 0x14
    float VolumeScaleAttackTime; // 0x18
    uint8_t bVolumeScaleCanRelease : 1; // 0x1c
    uint8_t pad_bitfield_1c_1 : 7;
    char pad_1d[0x3];
    float VolumeScaleReleaseTime; // 0x20
    float VoiceStealReleaseTime; // 0x24
}; // Size: 0x28
#pragma pack(pop)
