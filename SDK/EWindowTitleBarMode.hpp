#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindowTitleBarMode : uint8_t {
    Overlay = 0,
    VerticalBox = 1,
    EWindowTitleBarMode_MAX = 2,
};
#pragma pack(pop)
