#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_LOSChannelSet {
    All = 0,
    Static = 1,
    StaticAndDynamic = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
