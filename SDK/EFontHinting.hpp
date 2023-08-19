#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFontHinting : uint8_t {
    Default = 0,
    Auto = 1,
    AutoLight = 2,
    Monochrome = 3,
    None = 4,
    EFontHinting_MAX = 5,
};
#pragma pack(pop)
