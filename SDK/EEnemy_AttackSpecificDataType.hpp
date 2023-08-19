#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackSpecificDataType {
    None = 0,
    Ballistic = 1,
    Flourish = 2,
    RunTo = 3,
    Apparate = 4,
    EEnemy_MAX = 5,
};
#pragma pack(pop)
