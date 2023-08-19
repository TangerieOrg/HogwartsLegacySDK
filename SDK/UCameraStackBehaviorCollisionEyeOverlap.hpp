#pragma once
#include <cstdint>
#include "UCameraStackBehaviorCollisionBase.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCollisionEyeOverlap : public UCameraStackBehaviorCollisionBase {
public:
    char pad_210[0x8];
    static UCameraStackBehaviorCollisionEyeOverlap* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
