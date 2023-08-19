#pragma once
#include <cstdint>
#include "UAblAnimRateGetter.hpp"
#pragma pack(push, 1)
class UAblAnimRateGetter_Random : public UAblAnimRateGetter {
public:
    float MinPlayRate; // 0x28
    float MaxPlayRate; // 0x2c
    static UAblAnimRateGetter_Random* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
