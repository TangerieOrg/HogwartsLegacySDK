#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable {
    FName InstructionName; // 0x68
    FLinearColor Color; // 0x70
}; // Size: 0x80
#pragma pack(pop)
