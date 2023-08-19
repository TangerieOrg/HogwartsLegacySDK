#pragma once
#include <cstdint>
#include "EAlphaBlendOption.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FAlphaBlend {
    UCurveFloat* CustomCurve; // 0x0
    float BlendTime; // 0x8
    char pad_c[0x18];
    EAlphaBlendOption BlendOption; // 0x24
    char pad_25[0xb];
}; // Size: 0x30
#pragma pack(pop)
