#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFourPlayerSplitScreenType : uint8_t {
    Grid = 0,
    Vertical = 1,
    Horizontal = 2,
    EFourPlayerSplitScreenType_MAX = 3,
};
#pragma pack(pop)
