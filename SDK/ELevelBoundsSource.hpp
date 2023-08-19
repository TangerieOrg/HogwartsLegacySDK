#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELevelBoundsSource {
    Actors = 0,
    Landscape = 1,
    AllowUnloaded = 2,
    ELevelBoundsSource_MAX = 3,
};
#pragma pack(pop)
