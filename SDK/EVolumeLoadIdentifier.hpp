#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVolumeLoadIdentifier : uint8_t {
    OutsideOnly = 0,
    NearHogwarts = 1,
    NearHogsmeade = 2,
    OverlandBig = 3,
    OverlandMedium = 4,
    OverlandSmall = 5,
    InsideLoaded = 6,
    LastItem = 7,
    EVolumeLoadIdentifier_MAX = 8,
};
#pragma pack(pop)
