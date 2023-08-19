#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_TargetType : uint8_t {
    None = 0,
    Attack = 1,
    Flee = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
