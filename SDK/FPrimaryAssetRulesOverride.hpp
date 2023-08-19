#pragma once
#include <cstdint>
#include "FPrimaryAssetId.hpp"
#include "FPrimaryAssetRules.hpp"
#pragma pack(push, 1)
struct FPrimaryAssetRulesOverride {
    FPrimaryAssetId PrimaryAssetId; // 0x0
    FPrimaryAssetRules Rules; // 0x10
}; // Size: 0x1c
#pragma pack(pop)
