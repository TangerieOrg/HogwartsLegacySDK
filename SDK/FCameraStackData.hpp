#pragma once
#include <cstdint>
class UCameraStackBehaviorCore;
class UCameraStackBehavior;
#pragma pack(push, 1)
struct FCameraStackData {
    UCameraStackBehaviorCore* CoreBehavior; // 0x0
    TArray<UCameraStackBehavior*> Behaviors; // 0x8
}; // Size: 0x18
#pragma pack(pop)
