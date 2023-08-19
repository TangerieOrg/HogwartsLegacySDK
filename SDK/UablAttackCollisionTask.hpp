#pragma once
#include <cstdint>
#include "AttackCollisionType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablAttackCollisionTask : public UAblAbilityTask {
public:
    AttackCollisionType CollisionType; // 0x70
    char pad_71[0x7];
    static UablAttackCollisionTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
