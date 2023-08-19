#pragma once
#include <cstdint>
#include "FMultiFX2Data.hpp"
#pragma pack(push, 1)
struct FMultiFX2DataArray {
    TArray<FMultiFX2Data> DataArray; // 0x0
}; // Size: 0x10
#pragma pack(pop)
