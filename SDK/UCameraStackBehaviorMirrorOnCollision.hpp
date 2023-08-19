#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "UCameraStackBehavior.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorMirrorOnCollision : public UCameraStackBehavior {
public:
    float ProbeSize; // 0x50
    ECollisionChannel ProbeChannel; // 0x54
    char pad_55[0x3];
    static UCameraStackBehaviorMirrorOnCollision* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
