#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNPC_MobilityMovementData {
    bool bUseAcceleration; // 0x0
    bool bOrientToMovement; // 0x1
    char pad_2[0x2];
    float TurnRate; // 0x4
}; // Size: 0x8
#pragma pack(pop)
