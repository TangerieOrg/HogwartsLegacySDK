#pragma once
#include <cstdint>
#include "UAblBlendWeightMultiplierGetter.hpp"
#pragma pack(push, 1)
class UAblBlendWeightMultiplierGetter_FallBlend : public UAblBlendWeightMultiplierGetter {
public:
    float BlendSpeed; // 0x28
    char pad_2c[0x4];
    static UAblBlendWeightMultiplierGetter_FallBlend* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
