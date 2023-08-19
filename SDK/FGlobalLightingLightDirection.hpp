#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGlobalLightingLightDirection {
    FQuat Rotation; // 0x0
    FVector Direction; // 0x10
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
