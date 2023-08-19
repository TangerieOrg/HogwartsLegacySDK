#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorPushPull : public UCameraStackBehaviorBlend {
public:
    bool bEnableLag; // 0x1b8
    char pad_1b9[0x3];
    float LagSpeed; // 0x1bc
    float MaxArmLength2D; // 0x1c0
    float MinArmLength2D; // 0x1c4
    float YawMinMax; // 0x1c8
    char pad_1cc[0x4c];
    static UCameraStackBehaviorPushPull* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
