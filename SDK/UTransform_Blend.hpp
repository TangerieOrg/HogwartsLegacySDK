#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_Blend : public UTransformProvider {
public:
    UTransformProvider* InitialTransform; // 0x28
    UTransformProvider* FinalTransform; // 0x30
    float Blend; // 0x38
    char pad_3c[0x4];
    static UTransform_Blend* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
