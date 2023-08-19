#pragma once
#include <cstdint>
#include "FBranchFilter.hpp"
#pragma pack(push, 1)
struct FMyInputBlendPose {
    TArray<FBranchFilter> BranchFilters; // 0x0
}; // Size: 0x10
#pragma pack(pop)
