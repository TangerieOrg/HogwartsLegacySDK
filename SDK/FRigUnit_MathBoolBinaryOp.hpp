#pragma once
#include <cstdint>
#include "FRigUnit_MathBoolBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase {
    bool A; // 0x8
    bool B; // 0x9
    bool Result; // 0xa
    char pad_b[0x5];
}; // Size: 0x10
#pragma pack(pop)
