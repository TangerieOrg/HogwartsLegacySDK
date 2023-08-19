#pragma once
#include <cstdint>
#include "ENPC_FireContext.hpp"
#include "ENPC_GameAttackState.hpp"
#include "ENPC_GameContext.hpp"
#include "ENPC_GameState.hpp"
#include "ENPC_GameSubState.hpp"
#include "ENPC_Mobility.hpp"
#include "ENPC_StairsSlopeContext.hpp"
class UNPC_MobilityChoice;
class UNPC_MobilitySpeedChoice;
#pragma pack(push, 1)
struct FNPC_MobilityUberData {
    ENPC_Mobility Mode; // 0x0
    char pad_1[0x7];
    UNPC_MobilityChoice* MobilityChoice; // 0x8
    ENPC_GameContext GameContext; // 0x10
    ENPC_StairsSlopeContext StairsSlopeState; // 0x11
    ENPC_FireContext FireContext; // 0x12
    ENPC_GameState GameState; // 0x13
    ENPC_GameSubState GameSubState; // 0x14
    ENPC_GameAttackState GameAttackState; // 0x15
    char pad_16[0x2];
    int32_t Priority; // 0x18
    bool bOverrideSpeed; // 0x1c
    char pad_1d[0x3];
    float MinSpeed; // 0x20
    float MaxSpeed; // 0x24
    UNPC_MobilitySpeedChoice* SpeedChoice; // 0x28
}; // Size: 0x30
#pragma pack(pop)
