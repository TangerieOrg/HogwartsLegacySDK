#pragma once
#include <cstdint>
#include "FAnimatedLightSettings.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UAnimatedLightSettingsAsset : public UDataAsset {
public:
    FAnimatedLightSettings Settings; // 0x30
    char pad_64[0x4];
    static UAnimatedLightSettingsAsset* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
