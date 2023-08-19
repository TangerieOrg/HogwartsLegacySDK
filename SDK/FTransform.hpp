#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FTransform {
    FQuat Rotation; // 0x0
    FVector Translation; // 0x10
    char pad_1c[0x4];
    FVector Scale3D; // 0x20
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
