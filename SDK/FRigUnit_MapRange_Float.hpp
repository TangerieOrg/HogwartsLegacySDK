#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_MapRange_Float : public FRigUnit {
    float Value; // 0x8
    float MinIn; // 0xc
    float MaxIn; // 0x10
    float MinOut; // 0x14
    float MaxOut; // 0x18
    float Result; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
