#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECelestialPointOfInterestType : uint8_t {
    Unknown = 0,
    Star = 1,
    MajorConstellation = 2,
    Constellation = 3,
    Zodiac = 4,
    MessierObject = 5,
    ECelestialPointOfInterestType_MAX = 6,
};
#pragma pack(pop)
