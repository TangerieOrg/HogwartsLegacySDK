#pragma once
#include <cstdint>
#include "EOdcBlockageMode.hpp"
#include "EOdcSnapMode.hpp"
#include "FOdcFlags.hpp"
#include "FOdcPenaltyTable.hpp"
#pragma pack(push, 1)
struct FOdcPathSpec {
    EOdcBlockageMode ObstacleMode; // 0x0
    char pad_1[0x3];
    FOdcFlags ObstacleBlockageFlags; // 0x4
    FOdcFlags AreaUsageFlags; // 0x8
    FOdcFlags AreaPenaltyFlags; // 0xc
    FOdcFlags LinkUsageFlags; // 0x10
    bool bUsePathSharingPenalty; // 0x14
    char pad_15[0x3];
    float PathSharingPenalty; // 0x18
    float MaxPathSharingPenalty; // 0x1c
    float MaxSearchDist; // 0x20
    char pad_24[0x4];
    FOdcPenaltyTable PenaltyTable; // 0x28
    EOdcSnapMode SnapMode; // 0x48
    char pad_49[0x7];
}; // Size: 0x50
#pragma pack(pop)
