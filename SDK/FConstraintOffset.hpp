#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FConstraintOffset {
    FVector Translation; // 0x0
    char pad_c[0x4];
    FQuat Rotation; // 0x10
    FVector Scale; // 0x20
    char pad_2c[0x4];
    FTransform Parent; // 0x30
}; // Size: 0x60
#pragma pack(pop)
