#pragma once
#include <cstdint>
#include "ENPC_TurnAssist.hpp"
#include "EablNPC_FixedSource.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablNPC_TurnAssistTask : public UAblAbilityTask {
public:
    ENPC_TurnAssist TurnAssistMode; // 0x70
    bool bUseFixedDirection; // 0x71
    EablNPC_FixedSource FixedSource; // 0x72
    char pad_73[0x1];
    float FixedRelativeAngle; // 0x74
    bool bFollowPlayer; // 0x78
    bool bTurnToPlayer; // 0x79
    bool bFollowTarget; // 0x7a
    bool bTurnToTarget; // 0x7b
    bool bFollowInstigator; // 0x7c
    bool bTurnToInstigator; // 0x7d
    bool bIgnoreTargetTracker; // 0x7e
    char pad_7f[0x1];
    static UablNPC_TurnAssistTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
