#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EVerticalTextAligment : uint8_t {
    EVRTA_TextTop = 0,
    EVRTA_TextCenter = 1,
    EVRTA_TextBottom = 2,
    EVRTA_QuadTop = 3,
    EVRTA_MAX = 4,
};
#pragma pack(pop)
