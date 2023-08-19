#pragma once
#include <cstdint>
#include "UAblAnimRateGetter.hpp"
#pragma pack(push, 1)
class UAblAnimRateGetter_Protego : public UAblAnimRateGetter {
public:
    int32_t ImpactFrame; // 0x28
    float MaxMultiplier; // 0x2c
    static UAblAnimRateGetter_Protego* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
