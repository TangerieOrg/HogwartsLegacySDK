#pragma once
#include <cstdint>
#include "UAblAnimRateGetter.hpp"
#pragma pack(push, 1)
class UAblAnimRateGetter_WandCast : public UAblAnimRateGetter {
public:
    float FireWandFrame; // 0x28
    char pad_2c[0x4];
    static UAblAnimRateGetter_WandCast* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
