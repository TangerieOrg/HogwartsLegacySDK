#pragma once
#include <cstdint>
class UInputBehavior;
#pragma pack(push, 1)
struct FBehaviorInfo {
    UInputBehavior* Behavior; // 0x0
    char pad_8[0x18];
}; // Size: 0x20
#pragma pack(pop)
