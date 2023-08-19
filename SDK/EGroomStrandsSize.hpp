#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroomStrandsSize : uint8_t {
    None = 0,
    Size2 = 2,
    Size4 = 4,
    Size8 = 8,
    Size16 = 16,
    Size32 = 32,
    EGroomStrandsSize_MAX = 33,
};
#pragma pack(pop)
