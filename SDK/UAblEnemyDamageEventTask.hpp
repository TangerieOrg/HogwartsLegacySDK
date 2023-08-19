#pragma once
#include <cstdint>
#include "UAblDamageEventTask.hpp"
#pragma pack(push, 1)
class UAblEnemyDamageEventTask : public UAblDamageEventTask {
public:
    bool bUseDamageSystem; // 0x98
    char pad_99[0x7];
    static UAblEnemyDamageEventTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
