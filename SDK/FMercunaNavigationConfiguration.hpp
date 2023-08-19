#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMercunaNavigationConfiguration {
    float MaxPitch; // 0x0
    float MaxRoll; // 0x4
    float RollSensitivity; // 0x8
    bool MoveOnlyInLookDirection; // 0xc
    bool StopAtDestination; // 0xd
    char pad_e[0x2];
    float HeightChangePenalty; // 0x10
    bool SmoothPaths; // 0x14
    char pad_15[0x3];
    float LookAheadTime; // 0x18
    float RollAnticipationTime; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
