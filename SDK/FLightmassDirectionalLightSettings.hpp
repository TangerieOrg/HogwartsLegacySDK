#pragma once
#include <cstdint>
#include "FLightmassLightSettings.hpp"
#pragma pack(push, 1)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings {
    float LightSourceAngle; // 0xc
}; // Size: 0x10
#pragma pack(pop)
