#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAlignObjectsBoxPoint : int32_t {
    Center = 0,
    Bottom = 1,
    Top = 2,
    Left = 3,
    Right = 4,
    Front = 5,
    Back = 6,
    Min = 7,
    Max = 8,
};
#pragma pack(pop)
