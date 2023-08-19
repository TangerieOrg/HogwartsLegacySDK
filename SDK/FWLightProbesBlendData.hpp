#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWLightProbesBlendData {
    int32_t TexIndex1; // 0x0
    int32_t TexIndex2; // 0x4
    float BlendValue; // 0x8
}; // Size: 0xc
#pragma pack(pop)
