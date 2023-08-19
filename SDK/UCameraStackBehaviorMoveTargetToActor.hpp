#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorMoveTargetToActor : public UCameraStackBehaviorBlend {
public:
    char pad_1b8[0x20];
    static UCameraStackBehaviorMoveTargetToActor* StaticClass();
}; // Size: 0x1d8
#pragma pack(pop)
