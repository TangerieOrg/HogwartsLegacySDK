#pragma once
#include <cstdint>
#include "ENPC_GameState.hpp"
#include "ENPC_Mobility.hpp"
#pragma pack(push, 1)
struct FNPC_GameStateMobilityData {
    ENPC_GameState State; // 0x0
    ENPC_Mobility Mobility; // 0x1
    bool bOverrideSpeed; // 0x2
    char pad_3[0x1];
    float MinSpeed; // 0x4
    float MaxSpeed; // 0x8
}; // Size: 0xc
#pragma pack(pop)
