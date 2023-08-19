#pragma once
#include <cstdint>
#include "FFilterOptionPerAxis.hpp"
#pragma pack(push, 1)
struct FConstraintDescriptionEx {
    char pad_0[0x8];
    FFilterOptionPerAxis AxesFilterOption; // 0x8
    char pad_b[0x5];
}; // Size: 0x10
#pragma pack(pop)
