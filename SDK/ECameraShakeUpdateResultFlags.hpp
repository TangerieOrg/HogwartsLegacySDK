#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraShakeUpdateResultFlags {
    ApplyAsAbsolute = 1,
    SkipAutoScale = 2,
    SkipAutoPlaySpace = 4,
    Default = 0,
    ECameraShakeUpdateResultFlags_MAX = 5,
};
#pragma pack(pop)
