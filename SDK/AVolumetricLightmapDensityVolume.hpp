#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FInt32Interval.hpp"
#pragma pack(push, 1)
class AVolumetricLightmapDensityVolume : public AVolume {
public:
    FInt32Interval AllowedMipLevelRange; // 0x280
    static AVolumetricLightmapDensityVolume* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
