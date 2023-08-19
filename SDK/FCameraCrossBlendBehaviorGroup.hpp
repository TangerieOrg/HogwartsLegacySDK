#pragma once
#include <cstdint>
class UCameraStackBehavior;
#pragma pack(push, 1)
struct FCameraCrossBlendBehaviorGroup {
    TArray<UCameraStackBehavior*> Behaviors; // 0x0
    char pad_10[0x38];
}; // Size: 0x48
#pragma pack(pop)
