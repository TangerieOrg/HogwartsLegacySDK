#pragma once
#include <cstdint>
#include "FRigUnit_MathIntBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase {
    int32_t A; // 0x8
    int32_t B; // 0xc
    bool Result; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
