#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENoMountZoneVersion : uint8_t {
    NoVersion = 0,
    UniqueNameFix = 1,
    GroundShieldVFX = 2,
    LatestVersion = 2,
    ENoMountZoneVersion_MAX = 3,
};
#pragma pack(pop)
