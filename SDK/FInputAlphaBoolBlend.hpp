#pragma once
#include <cstdint>
#include "EAlphaBlendOption.hpp"
#include "FAlphaBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FInputAlphaBoolBlend {
    float BlendInTime; // 0x0
    float BlendOutTime; // 0x4
    EAlphaBlendOption BlendOption; // 0x8
    bool bInitialized; // 0x9
    char pad_a[0x6];
    UCurveFloat* CustomCurve; // 0x10
    FAlphaBlend AlphaBlend; // 0x18
}; // Size: 0x48
#pragma pack(pop)
