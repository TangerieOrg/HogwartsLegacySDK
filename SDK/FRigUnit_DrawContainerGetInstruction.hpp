#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit {
    FName InstructionName; // 0x8
    FLinearColor Color; // 0x10
    FTransform Transform; // 0x20
}; // Size: 0x50
#pragma pack(pop)
