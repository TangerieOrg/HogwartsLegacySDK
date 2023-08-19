#pragma once
#include <cstdint>
#include "ENPC_MobilityTurnAssistStartMode.hpp"
#include "FEnemy_TurnInPlaceUberData.hpp"
#pragma pack(push, 1)
struct FEnemy_TurnInPlaceData {
    float Cooldown; // 0x0
    float IgnoreCooldownAngle; // 0x4
    float StartAngleTolerance; // 0x8
    bool bFixedBlendspaceAngle; // 0xc
    char pad_d[0x3];
    int32_t SupportedBlendspaceAngles; // 0x10
    ENPC_MobilityTurnAssistStartMode StartMode; // 0x14
    char pad_15[0x3];
    float DelayedStartTime; // 0x18
    char pad_1c[0x4];
    TArray<FEnemy_TurnInPlaceUberData> ContextList; // 0x20
    char pad_30[0x8];
}; // Size: 0x38
#pragma pack(pop)
