#pragma once
#include <cstdint>
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_ProjectedTimeAnimationValue : public UFloatProvider {
public:
    float OriginalTime; // 0x28
    float OriginalTimeAnimationValue; // 0x2c
    float animationLength; // 0x30
    char pad_34[0x4];
    static UFloat_ProjectedTimeAnimationValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
