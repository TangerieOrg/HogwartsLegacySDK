#pragma once
#include <cstdint>
#include "FWorldEventTimeSpan.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_Cooldown : public UWorldEventCondition {
public:
    FString GroupName; // 0x38
    bool bScalableCooldown; // 0x48
    char pad_49[0x3];
    float DefaultScale; // 0x4c
    FWorldEventTimeSpan GroupMinCooldownTime; // 0x50
    FWorldEventTimeSpan GroupMaxCooldownTime; // 0x60
    FWorldEventTimeSpan GroupCooldownTime; // 0x70
    bool bRealTime; // 0x80
    char pad_81[0xf];
    static UWorldEventCondition_Cooldown* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
