#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigUnit_MathColorBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase {
    FLinearColor A; // 0x8
    FLinearColor B; // 0x18
    FLinearColor Result; // 0x28
}; // Size: 0x38
#pragma pack(pop)
