#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EHorizontalAlignment : uint8_t {
    HAlign_Fill = 0,
    HAlign_Left = 1,
    HAlign_Center = 2,
    HAlign_Right = 3,
    HAlign_MAX = 4,
};
#pragma pack(pop)
