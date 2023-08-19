#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class ALandscapeCullingExclusionVolume : public AVolume {
public:
    static ALandscapeCullingExclusionVolume* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
