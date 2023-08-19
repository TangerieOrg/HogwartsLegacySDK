#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryCounterStepDirection : uint8_t {
    Default = 0,
    Forwards = 1,
    Backwards = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
