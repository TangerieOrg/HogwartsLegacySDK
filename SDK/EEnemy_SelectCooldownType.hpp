#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_SelectCooldownType : uint8_t {
    Immediate = 0,
    Increment = 1,
    EEnemy_MAX = 2,
};
#pragma pack(pop)
