#pragma once
#include <cstdint>
#include "EGroundSwarmingKillEventType.hpp"
#include "FBox.hpp"
#include "FGroundSwarmingFocus.hpp"
#include "FSwarmMemberDesiredDeathState.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGroundSwarmingDeathVolume {
    FGroundSwarmingFocus Origin; // 0x0
    FVector HalfExtent; // 0xa0
    EGroundSwarmingKillEventType KillEvent; // 0xac
    char pad_ad[0x3];
    FSwarmMemberDesiredDeathState DesiredDeathState; // 0xb0
    bool bAutoBounds; // 0xe4
    char pad_e5[0x3];
    float AutoBoundsScaleXY; // 0xe8
    bool bTestXYOnly; // 0xec
    bool bEnabled; // 0xed
    char pad_ee[0x2];
    FBox AABB; // 0xf0
    char pad_10c[0x4];
}; // Size: 0x110
#pragma pack(pop)
