#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class Enemy_MorphStatus {
    None = 0,
    MorphingToWolf = 1,
    MorphingToMage = 2,
    Enemy_MAX = 3,
};
#pragma pack(pop)
