#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECalloutBlipType : uint8_t {
    Diamond = 0,
    Dot = 1,
    Door = 2,
    Vendor = 3,
    FastTravel = 4,
    ECalloutBlipType_MAX = 5,
};
#pragma pack(pop)
