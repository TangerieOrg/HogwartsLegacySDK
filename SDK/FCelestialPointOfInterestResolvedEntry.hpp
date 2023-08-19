#pragma once
#include <cstdint>
#include "ECelestialPointOfInterestType.hpp"
#include "FTableRowBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCelestialPointOfInterestResolvedEntry : public FTableRowBase {
    FName Name; // 0x8
    ECelestialPointOfInterestType Type; // 0x10
    char pad_11[0x3];
    FVector DirectionToStar; // 0x14
    FName HighlightConstellation; // 0x20
    FName HighlightStar; // 0x28
}; // Size: 0x30
#pragma pack(pop)
