#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
class ABiped_Player;
#pragma pack(push, 1)
class URPGAbilityEventListener_OnDodgeRollFinished : public URPGAbilityEventListener {
public:
    ABiped_Player* BipedPlayer; // 0x98
    static URPGAbilityEventListener_OnDodgeRollFinished* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
