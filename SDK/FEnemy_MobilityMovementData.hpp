#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnemy_MobilityMovementData {
    bool bUseAcceleration; // 0x0
    bool bOrientToMovement; // 0x1
    bool bRestoreTurnRate; // 0x2
    char pad_3[0x1];
    float TurnRate; // 0x4
    bool bResetDirection; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
