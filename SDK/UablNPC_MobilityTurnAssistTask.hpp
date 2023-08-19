#pragma once
#include <cstdint>
#include "ENPC_TurnAssist.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablNPC_MobilityTurnAssistTask : public UAblAbilityTask {
public:
    ENPC_TurnAssist TurnAssistMode; // 0x70
    char pad_71[0x7];
    static UablNPC_MobilityTurnAssistTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
