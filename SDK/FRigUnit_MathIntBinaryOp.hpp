#pragma once
#include <cstdint>
#include "FRigUnit_MathIntBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase {
    int32_t A; // 0x8
    int32_t B; // 0xc
    int32_t Result; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
