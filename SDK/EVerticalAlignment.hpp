#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EVerticalAlignment : uint8_t {
    VAlign_Fill = 0,
    VAlign_Top = 1,
    VAlign_Center = 2,
    VAlign_Bottom = 3,
    VAlign_MAX = 4,
};
#pragma pack(pop)
