#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNPC_TargetPerceptionParams {
    bool bPlayerOnly; // 0x0
    bool bTargetsFromTeammates; // 0x1
    char pad_2[0x2];
    FName CrimeSceneTeamName; // 0x4
    FName AttackTeamName; // 0xc
    FName NotifyTeamName; // 0x14
    bool bResultSuccess; // 0x1c
    char pad_1d[0x1f];
}; // Size: 0x3c
#pragma pack(pop)
