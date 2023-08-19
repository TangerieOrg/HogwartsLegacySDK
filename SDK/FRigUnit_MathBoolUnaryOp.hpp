#pragma once
#include <cstdint>
#include "FRigUnit_MathBoolBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase {
    bool Value; // 0x8
    bool Result; // 0x9
    char pad_a[0x6];
}; // Size: 0x10
#pragma pack(pop)
