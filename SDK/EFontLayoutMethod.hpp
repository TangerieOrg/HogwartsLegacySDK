#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFontLayoutMethod : uint8_t {
    Metrics = 0,
    BoundingBox = 1,
    EFontLayoutMethod_MAX = 2,
};
#pragma pack(pop)
