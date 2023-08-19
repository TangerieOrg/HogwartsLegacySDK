#pragma once
#include <cstdint>
#include "URootMotionModifierUltimate.hpp"
#pragma pack(push, 1)
class URootMotionModifierUltimate_SplineLock : public URootMotionModifierUltimate {
public:
    float SplineRightOffset; // 0x50
    char pad_54[0x4];
    static URootMotionModifierUltimate_SplineLock* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
