#pragma once
#include <cstdint>
#include "ECelestialPointOfInterestType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCelestialPointOfInterest {
    FName Name; // 0x0
    ECelestialPointOfInterestType Type; // 0x8
    char pad_9[0x3];
    float AzimuthDegrees; // 0xc
    float AltitudeDegrees; // 0x10
    FVector TopographicDirection; // 0x14
    FName HighlightConstellation; // 0x20
    FName HighlightStar; // 0x28
}; // Size: 0x30
#pragma pack(pop)
