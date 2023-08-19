#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETextFlowDirection : uint8_t {
    Auto = 0,
    LeftToRight = 1,
    RightToLeft = 2,
    ETextFlowDirection_MAX = 3,
};
#pragma pack(pop)
