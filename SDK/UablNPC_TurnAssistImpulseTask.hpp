#pragma once
#include <cstdint>
#include "ENPC_TurnAssist.hpp"
#include "ENPC_TurnAssistType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablNPC_TurnAssistImpulseTask : public UAblAbilityTask {
public:
    ENPC_TurnAssistType TurnAssistType; // 0x70
    bool bAllowFollow; // 0x71
    char pad_72[0x2];
    float RelativeAngle; // 0x74
    ENPC_TurnAssist TurnAssistMode; // 0x78
    char pad_79[0x7];
    static UablNPC_TurnAssistImpulseTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
