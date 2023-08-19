#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETravelType : uint8_t {
    TRAVEL_Absolute = 0,
    TRAVEL_Partial = 1,
    TRAVEL_Relative = 2,
    TRAVEL_MAX = 3,
};
#pragma pack(pop)
