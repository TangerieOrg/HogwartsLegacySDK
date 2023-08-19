#pragma once
#include <cstdint>
#include "UAISense_NPC.hpp"
#pragma pack(push, 1)
class UAISense_EnemyAIWeapon : public UAISense_NPC {
public:
    static UAISense_EnemyAIWeapon* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
