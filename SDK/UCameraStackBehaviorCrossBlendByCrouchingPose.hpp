#pragma once
#include <cstdint>
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCrossBlendByCrouchingPose : public UCameraStackBehaviorMultiCrossBlendStandalone {
public:
    char pad_368[0x8];
    static UCameraStackBehaviorCrossBlendByCrouchingPose* StaticClass();
}; // Size: 0x370
#pragma pack(pop)
