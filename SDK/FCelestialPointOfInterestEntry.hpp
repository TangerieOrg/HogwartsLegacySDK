#pragma once
#include <cstdint>
#include "ECelestialPointOfInterestType.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FCelestialPointOfInterestEntry : public FTableRowBase {
    ECelestialPointOfInterestType Type; // 0x8
    char pad_9[0x3];
    FName HighlightConstellation; // 0xc
    FName HighlightStar; // 0x14
    float RightAscentionHours; // 0x1c
    float RightAscentionMinutes; // 0x20
    float RightAscentionSeconds; // 0x24
    float DeclinationDegrees; // 0x28
    float DeclinationMinutes; // 0x2c
    float DeclinationSeconds; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
