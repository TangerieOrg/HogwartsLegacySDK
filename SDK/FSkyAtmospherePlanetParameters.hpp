#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FSkyAtmospherePlanetParameters {
    float BottomRadius; // 0x0
    float AtmosphereHeight; // 0x4
    FColor GroundAlbedo; // 0x8
}; // Size: 0xc
#pragma pack(pop)
