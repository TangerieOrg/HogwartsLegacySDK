#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransformedParameterSpace : uint8_t {
    InWorld = 0,
    InLocal = 1,
    ETransformedParameterSpace_MAX = 2,
};
#pragma pack(pop)
