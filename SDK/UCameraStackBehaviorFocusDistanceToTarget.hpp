#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorFocusDistanceToTarget : public UCameraStackBehaviorBlend {
public:
    float MinFocusDistance; // 0x1b8
    float FocusDistanceOffset; // 0x1bc
    char pad_1c0[0x10];
    static UCameraStackBehaviorFocusDistanceToTarget* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
