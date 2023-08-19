#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInputCaptureSide {
    None = 0,
    Left = 1,
    Right = 2,
    Both = 3,
    Any = 99,
    EInputCaptureSide_MAX = 100,
};
#pragma pack(pop)
