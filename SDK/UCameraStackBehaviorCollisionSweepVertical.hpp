#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "UCameraStackBehavior.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCollisionSweepVertical : public UCameraStackBehavior {
public:
    float ProbeSize; // 0x50
    ECollisionChannel ProbeChannel; // 0x54
    char pad_55[0x3];
    float SweepStartHeight; // 0x58
    char pad_5c[0x4];
    static UCameraStackBehaviorCollisionSweepVertical* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
