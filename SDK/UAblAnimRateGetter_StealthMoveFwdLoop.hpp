#pragma once
#include <cstdint>
#include "UAblAnimRateGetter.hpp"
#pragma pack(push, 1)
class UAblAnimRateGetter_StealthMoveFwdLoop : public UAblAnimRateGetter {
public:
    float MinWadingAnimRate; // 0x28
    char pad_2c[0x4];
    static UAblAnimRateGetter_StealthMoveFwdLoop* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
