#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDoorFastTravelType : uint8_t {
    NotUsingFastTravel = 0,
    TravelToOtherSideOfDoor = 1,
    TravelToNamedLocation = 2,
    TravelToDifferentNamedLocationBasedOnSide = 3,
    EDoorFastTravelType_MAX = 4,
};
#pragma pack(pop)
