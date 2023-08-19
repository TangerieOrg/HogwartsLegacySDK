#pragma once
#include <cstdint>
#include "FPlayerCentricPostProcessingOverride.hpp"
#pragma pack(push, 1)
struct FPlayerCentricPostProcessingOverrides {
    TArray<FPlayerCentricPostProcessingOverride> OverrideStack; // 0x0
}; // Size: 0x10
#pragma pack(pop)
