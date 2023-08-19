#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ContextMatch : uint8_t {
    Any = 0,
    All = 1,
    EEnemy_MAX = 2,
};
#pragma pack(pop)
