#pragma once
#include <cstdint>
#include "UCameraStackBehaviorCollisionBase.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCollisionSweep : public UCameraStackBehaviorCollisionBase {
public:
    bool bCheckForEyeOverlap; // 0x210
    char pad_211[0x7];
    static UCameraStackBehaviorCollisionSweep* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
