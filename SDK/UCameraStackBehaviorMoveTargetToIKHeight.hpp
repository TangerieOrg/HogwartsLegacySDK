#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorMoveTargetToIKHeight : public UCameraStackBehaviorBlend {
public:
    char pad_1b8[0x18];
    static UCameraStackBehaviorMoveTargetToIKHeight* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
