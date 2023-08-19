#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorMatchFloorRotation : public UCameraStackBehaviorBlend {
public:
    bool bEnablePitch; // 0x1b8
    bool bEnableYaw; // 0x1b9
    bool bEnableRoll; // 0x1ba
    char pad_1bb[0x35];
    static UCameraStackBehaviorMatchFloorRotation* StaticClass();
}; // Size: 0x1f0
#pragma pack(pop)
