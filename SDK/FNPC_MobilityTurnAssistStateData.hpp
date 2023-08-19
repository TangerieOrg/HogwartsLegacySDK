#pragma once
#include <cstdint>
#include "ENPC_MobilityTurnAssistStartMode.hpp"
#include "ENPC_TurnAssistState.hpp"
#pragma pack(push, 1)
struct FNPC_MobilityTurnAssistStateData {
    ENPC_TurnAssistState MoveTurnTo; // 0x0
    ENPC_TurnAssistState MoveStartTurnTo; // 0x1
    ENPC_TurnAssistState MoveStopTurnTo; // 0x2
    ENPC_MobilityTurnAssistStartMode MoveStartMode; // 0x3
    float MoveStartDelayedStartTime; // 0x4
}; // Size: 0x8
#pragma pack(pop)
