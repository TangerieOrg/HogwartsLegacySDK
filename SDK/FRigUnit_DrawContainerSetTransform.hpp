#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable {
    FName InstructionName; // 0x68
    FTransform Transform; // 0x70
}; // Size: 0xa0
#pragma pack(pop)
