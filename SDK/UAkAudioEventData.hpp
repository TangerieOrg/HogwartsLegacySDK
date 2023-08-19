#pragma once
#include <cstdint>
#include "UAkAssetDataSwitchContainer.hpp"
#pragma pack(push, 1)
class UAkAudioEventData : public UAkAssetDataSwitchContainer {
public:
    float MaxAttenuationRadius; // 0xf0
    bool IsInfinite; // 0xf4
    char pad_f5[0x3];
    float MinimumDuration; // 0xf8
    float MaximumDuration; // 0xfc
    char pad_100[0x190];
    static UAkAudioEventData* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
