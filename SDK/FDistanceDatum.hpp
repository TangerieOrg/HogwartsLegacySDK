#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDistanceDatum {
    float FadeInDistanceStart; // 0x0
    float FadeInDistanceEnd; // 0x4
    float FadeOutDistanceStart; // 0x8
    float FadeOutDistanceEnd; // 0xc
    float Volume; // 0x10
}; // Size: 0x14
#pragma pack(pop)
