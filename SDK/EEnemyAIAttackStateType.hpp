#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyAIAttackStateType : uint8_t {
    None = 0,
    Attack_0 = 1,
    Pressure_0 = 2,
    Withdraw_0 = 3,
    Count = 4,
    EEnemyAIAttackStateType_MAX = 5,
};
#pragma pack(pop)
