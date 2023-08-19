#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPlayerCentricPostProcessingOverride {
    char pad_0[0x8];
    float PostProcessingViewpoint; // 0x8
    float LerpAlpha; // 0xc
}; // Size: 0x10
#pragma pack(pop)
