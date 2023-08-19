#pragma once
#include <cstdint>
#include "FPlane.hpp"
#pragma pack(push, 1)
struct FMatrix {
    FPlane XPlane; // 0x0
    FPlane YPlane; // 0x10
    FPlane ZPlane; // 0x20
    FPlane WPlane; // 0x30
}; // Size: 0x40
#pragma pack(pop)
