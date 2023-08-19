#pragma once
#include <cstdint>
#include "FBranchFilter.hpp"
#include "UBoneMaskBase.hpp"
#pragma pack(push, 1)
class UBoneMask_BranchFilter : public UBoneMaskBase {
public:
    TArray<FBranchFilter> BranchFilters; // 0x30
    static UBoneMask_BranchFilter* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
