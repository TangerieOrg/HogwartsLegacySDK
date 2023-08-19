#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#include "FPrimaryAssetRules.hpp"
#include "FPrimaryAssetType.hpp"
#pragma pack(push, 1)
struct FPrimaryAssetRulesCustomOverride {
    FPrimaryAssetType PrimaryAssetType; // 0x0
    FDirectoryPath FilterDirectory; // 0x8
    FString FilterString; // 0x18
    FPrimaryAssetRules Rules; // 0x28
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
