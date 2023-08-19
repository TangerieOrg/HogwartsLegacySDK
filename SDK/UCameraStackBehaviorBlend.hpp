#pragma once
#include <cstdint>
#include "UCameraStackBehavior.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorBlend : public UCameraStackBehavior {
public:
    char pad_50[0x168];
    static UCameraStackBehaviorBlend* StaticClass();
    float GetBlendAlpha();
}; // Size: 0x1b8
#pragma pack(pop)
