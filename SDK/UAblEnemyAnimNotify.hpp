#pragma once
#include <cstdint>
#include "EEnemy_AbilityEvent.hpp"
#include "UAblAnimNotify.hpp"
#pragma pack(push, 1)
class UAblEnemyAnimNotify : public UAblAnimNotify {
public:
    EEnemy_AbilityEvent AbilityEvent; // 0x40
    char pad_41[0x7];
    static UAblEnemyAnimNotify* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
