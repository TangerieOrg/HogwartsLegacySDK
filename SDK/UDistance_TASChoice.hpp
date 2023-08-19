#pragma once
#include <cstdint>
#include "ENPC_TurnAssistState.hpp"
#include "UNPC_TurnAssistStateChoice.hpp"
#pragma pack(push, 1)
class UDistance_TASChoice : public UNPC_TurnAssistStateChoice {
public:
    ENPC_TurnAssistState TargetCriteriaNotMetState; // 0x28
    char pad_29[0x3];
    float StartMaxAngleToDest; // 0x2c
    float ContinueMaxAngleToDest; // 0x30
    float StartMinDistToDest; // 0x34
    float ContinueMinDistToDest; // 0x38
    float StartMinDistToTarget; // 0x3c
    float ContinueMinDistToTarget; // 0x40
    float StartAngleOverrideMinDistToTarget; // 0x44
    float ContinueAngleOverrideMinDistToTarget; // 0x48
    char pad_4c[0x4];
    static UDistance_TASChoice* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
