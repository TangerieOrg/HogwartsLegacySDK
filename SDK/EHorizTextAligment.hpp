#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EHorizTextAligment : uint8_t {
    EHTA_Left = 0,
    EHTA_Center = 1,
    EHTA_Right = 2,
    EHTA_MAX = 3,
};
#pragma pack(pop)
