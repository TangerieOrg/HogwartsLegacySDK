#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EObjectSizeClass : uint8_t {
    XXS = 0,
    XS = 1,
    S = 2,
    M = 3,
    L = 4,
    XL = 5,
    XXL = 6,
    AutoGenerate = 7,
    EObjectSizeClass_MAX = 8,
};
#pragma pack(pop)
