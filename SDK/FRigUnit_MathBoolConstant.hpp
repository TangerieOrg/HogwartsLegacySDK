#pragma once
#include <cstdint>
#include "FRigUnit_MathBoolBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase {
    bool Value; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
