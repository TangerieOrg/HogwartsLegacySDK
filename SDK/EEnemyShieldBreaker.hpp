#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyShieldBreaker : uint8_t {
    None = 0,
    TypeA_Breaker = 1,
    TypeB_Breaker = 2,
    TypeC_Breaker = 3,
    EEnemyShieldBreaker_MAX = 4,
};
#pragma pack(pop)
