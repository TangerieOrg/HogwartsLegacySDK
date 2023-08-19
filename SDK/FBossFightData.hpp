#pragma once
#include <cstdint>
#include "EBossStates.hpp"
#pragma pack(push, 1)
struct FBossFightData {
    FName BossFightName; // 0x0
    EBossStates BossFightState; // 0x8
    char pad_9[0xb];
    float StartTime; // 0x14
    float EndTime; // 0x18
    float ElapsedTime; // 0x1c
    bool BossFightStarted; // 0x20
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)
