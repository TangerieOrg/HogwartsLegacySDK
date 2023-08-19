#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_Clamp_Float : public FRigUnit {
    float Value; // 0x8
    float Min; // 0xc
    float Max; // 0x10
    float Result; // 0x14
}; // Size: 0x18
#pragma pack(pop)
