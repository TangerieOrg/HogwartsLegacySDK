#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackExecuteType {
    None = 0,
    Default = 1,
    RunTo = 2,
    DeferredEquip = 3,
    EEnemy_MAX = 4,
};
#pragma pack(pop)
