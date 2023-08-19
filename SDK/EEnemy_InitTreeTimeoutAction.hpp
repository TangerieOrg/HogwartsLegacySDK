#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_InitTreeTimeoutAction : uint8_t {
    FailNoEnter = 0,
    EnterWithReset = 1,
    EnterNoReset = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
