#pragma once
#include <cstdint>
#include "FFlyingBroomBoostStat.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UFlyingBroomStats : public UDataAsset {
public:
    float BarrelRollCooldown; // 0x30
    float PassiveSpeedMultiplier; // 0x34
    float BoostSpeedMultiplier; // 0x38
    float MaxBoostAmount; // 0x3c
    char pad_40[0x8];
    TArray<FFlyingBroomBoostStat> BoostStats; // 0x48
    float TurboSpeedMultiplier; // 0x58
    float TurboGateBoostGain; // 0x5c
    float TurboDecayRate; // 0x60
    float PostTurboBoostAmount; // 0x64
    static UFlyingBroomStats* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
