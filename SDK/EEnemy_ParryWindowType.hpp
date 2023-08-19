#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryWindowType : uint8_t {
    None = 0,
    Single = 1,
    Dual = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
