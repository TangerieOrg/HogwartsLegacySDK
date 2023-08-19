#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIDisplayMode : uint8_t {
    UI_Viewing = 0,
    UI_Selling = 1,
    UI_Gifting = 2,
    UI_Finding = 3,
    UI_Transfer = 4,
    UI_AddAction = 5,
    UI_Curriculum = 6,
    UI_None = 7,
    UI_MAX = 8,
};
#pragma pack(pop)
