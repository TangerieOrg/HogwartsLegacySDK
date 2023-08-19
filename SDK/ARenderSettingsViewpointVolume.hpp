#pragma once
#include <cstdint>
#include "ARenderSettingsViewpointVolumeBase.hpp"
#pragma pack(push, 1)
class ARenderSettingsViewpointVolume : public ARenderSettingsViewpointVolumeBase {
public:
    float ViewpointLerp; // 0x290
    char pad_294[0x4];
    static ARenderSettingsViewpointVolume* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
