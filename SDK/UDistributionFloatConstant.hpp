#pragma once
#include <cstdint>
#include "UDistributionFloat.hpp"
#pragma pack(push, 1)
class UDistributionFloatConstant : public UDistributionFloat {
public:
    float Constant; // 0x38
    char pad_3c[0x4];
    static UDistributionFloatConstant* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
