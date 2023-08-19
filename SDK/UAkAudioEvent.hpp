#pragma once
#include <cstdint>
#include "UAkAssetBase.hpp"
class UAkAudioBank;
class UAkAssetPlatformData;
#pragma pack(push, 1)
class UAkAudioEvent : public UAkAssetBase {
public:
    char pad_50[0x50];
    UAkAudioBank* RequiredBank; // 0xa0
    char pad_a8[0x8];
    UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb0
    float MaxAttenuationRadius; // 0xb8
    bool IsInfinite; // 0xbc
    char pad_bd[0x3];
    float MinimumDuration; // 0xc0
    float MaximumDuration; // 0xc4
    char pad_c8[0x8];
    static UAkAudioEvent* StaticClass();
    float GetMinimumDuration();
    float GetMaximumDuration();
    float GetMaxAttenuationRadius();
    bool GetIsInfinite();
}; // Size: 0xd0
#pragma pack(pop)
