#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable {
    FName InstructionName; // 0x68
    float Thickness; // 0x70
    char pad_74[0x4];
}; // Size: 0x78
#pragma pack(pop)
