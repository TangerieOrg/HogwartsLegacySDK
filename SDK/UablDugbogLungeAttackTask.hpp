#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablDugbogLungeAttackTask : public UAblAbilityTask {
public:
    float MaxSpeed; // 0x70
    bool useOffset; // 0x74
    char pad_75[0x3];
    float ArcParam; // 0x78
    float Gravity; // 0x7c
    float SlamGravity; // 0x80
    FVector TargetOffset; // 0x84
    float MaxHeightDelta; // 0x90
    float MaxDistance; // 0x94
    bool continueMove; // 0x98
    char pad_99[0x7];
    static UablDugbogLungeAttackTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
