#pragma once
#include <cstdint>
#include "FVaultRangeSet.hpp"
class UClass;
#pragma pack(push, 1)
struct FVaultSettings {
    bool bForceReachingVaultLinkEndLocation; // 0x0
    bool bSnapRotationBeforeVault; // 0x1
    char pad_2[0x6];
    UClass* VaultAbility; // 0x8
    TArray<FVaultRangeSet> VaultVariations; // 0x10
}; // Size: 0x20
#pragma pack(pop)
