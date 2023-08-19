#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDynamicBoxType : uint8_t {
    Horizontal = 0,
    Vertical = 1,
    Wrap = 2,
    VerticalWrap = 3,
    Radial = 4,
    Overlay = 5,
    EDynamicBoxType_MAX = 6,
};
#pragma pack(pop)
