#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingPriority.hpp"
#pragma pack(push, 1)
struct FMaterialSwapKeyBundlePreload {
    EMaterialPermuterLoadingPriority Priority; // 0x0
    bool bAttachedChildren; // 0x1
    bool bComponentChildren; // 0x2
}; // Size: 0x3
#pragma pack(pop)
