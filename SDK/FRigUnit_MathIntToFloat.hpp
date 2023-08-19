#pragma once
#include <cstdint>
#include "FRigUnit_MathIntBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase {
    int32_t Value; // 0x8
    float Result; // 0xc
}; // Size: 0x10
#pragma pack(pop)
