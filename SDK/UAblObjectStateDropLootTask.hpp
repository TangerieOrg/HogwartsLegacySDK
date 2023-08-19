#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblObjectStateDropLootTask : public UAblAbilityTask {
public:
    bool bSpawnOnFloor; // 0x70
    bool bApplyImpulse; // 0x71
    char pad_72[0x2];
    FVector ImpulseDirection; // 0x74
    float ImpulseDirectionRandAngle; // 0x80
    float MinImpulse; // 0x84
    float MaxImpulse; // 0x88
    char pad_8c[0x4];
    static UAblObjectStateDropLootTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
