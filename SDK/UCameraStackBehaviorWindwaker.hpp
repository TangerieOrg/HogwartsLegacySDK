#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorWindwaker : public UCameraStackBehaviorBlend {
public:
    float MaxArmLength2D; // 0x1b8
    float MinArmLength2D; // 0x1bc
    char pad_1c0[0x80];
    static UCameraStackBehaviorWindwaker* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
