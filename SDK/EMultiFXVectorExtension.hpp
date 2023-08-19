#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXVectorExtension : uint8_t {
    Size = 0,
    SizeXY = 1,
    SizeZ = 2,
    X = 3,
    Y = 4,
    Z = 5,
    EMultiFXVectorExtension_MAX = 6,
};
#pragma pack(pop)
