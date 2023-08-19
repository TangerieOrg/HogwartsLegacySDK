#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorMaintainTargetFraming : public UCameraStackBehaviorBlend {
public:
    bool bDrawDebug; // 0x1b8
    char pad_1b9[0x5f];
    static UCameraStackBehaviorMaintainTargetFraming* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
