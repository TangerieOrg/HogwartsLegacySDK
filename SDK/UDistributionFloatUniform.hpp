#pragma once
#include <cstdint>
#include "UDistributionFloat.hpp"
#pragma pack(push, 1)
class UDistributionFloatUniform : public UDistributionFloat {
public:
    float Min; // 0x38
    float Max; // 0x3c
    static UDistributionFloatUniform* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
