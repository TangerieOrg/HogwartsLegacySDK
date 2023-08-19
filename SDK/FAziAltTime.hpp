#pragma once
#include <cstdint>
#include "FAzimuthAltitude.hpp"
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FAziAltTime {
    FAzimuthAltitude AziAlt; // 0x0
    FDateTime DateTime; // 0x8
}; // Size: 0x10
#pragma pack(pop)
