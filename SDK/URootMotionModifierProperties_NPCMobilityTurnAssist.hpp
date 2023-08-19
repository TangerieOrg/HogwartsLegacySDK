#pragma once
#include <cstdint>
#include "ENPC_TurnAssist.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_NPCMobilityTurnAssist : public URootMotionModifierProperties {
public:
    ENPC_TurnAssist TurnAssistMode; // 0x30
    char pad_31[0x7];
    static URootMotionModifierProperties_NPCMobilityTurnAssist* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
