#pragma once
#include <cstdint>
#include "EAblNpcReactChannelType.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class UAblReactionData;
#pragma pack(push, 1)
class UAblReactionAbility : public UAblAbility {
public:
    FName AbleAbilityChannelName; // 0xc8
    EAblNpcReactChannelType ChannelType; // 0xd0
    char pad_d1[0x3];
    float PlayerInstigatorTicketTimeIncrease; // 0xd4
    bool bAddDeadTagIfDead; // 0xd8
    bool bWarmUpRagdollPhysics; // 0xd9
    bool bBranchToRagdollInWater; // 0xda
    char pad_db[0x5];
    static UAblReactionAbility* StaticClass();
    UAblReactionData* GetReactionData(UAblAbilityContext* Context);
}; // Size: 0xe0
#pragma pack(pop)
