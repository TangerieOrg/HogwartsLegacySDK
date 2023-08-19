#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryResponseType : uint8_t {
    Default = 0,
    Massive = 1,
    Heavy = 2,
    Sustained = 3,
    EEnemy_MAX = 4,
};
#pragma pack(pop)
