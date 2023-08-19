#pragma once
#include <cstdint>
#include "FRigUnit_MathIntBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase {
    int32_t Value; // 0x8
    int32_t Minimum; // 0xc
    int32_t Maximum; // 0x10
    int32_t Result; // 0x14
}; // Size: 0x18
#pragma pack(pop)
