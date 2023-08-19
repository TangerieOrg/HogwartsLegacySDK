#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDesiredImageFormat : uint8_t {
    PNG = 0,
    JPG = 1,
    BMP = 2,
    EXR = 3,
    EDesiredImageFormat_MAX = 4,
};
#pragma pack(pop)
