#pragma once
#include <cstdint>
#include "FEulerTransform.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_ConvertTransform : public FRigUnit {
    char pad_8[0x8];
    FTransform Input; // 0x10
    FEulerTransform Result; // 0x40
    char pad_64[0xc];
}; // Size: 0x70
#pragma pack(pop)
