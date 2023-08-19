#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterLoadingGroupStrategy.hpp"
#include "FMaterialPermuterLoadingPermutationStrategy.hpp"
#include "FMaterialPermuterLoadingStrategy.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterLoadingStrategiesSetup {
    TArray<FMaterialPermuterLoadingGroupStrategy> GroupStrategies; // 0x0
    TArray<FMaterialPermuterLoadingPermutationStrategy> PermutationStrategies; // 0x10
    FMaterialPermuterLoadingStrategy DefaultStrategy; // 0x20
    char pad_34[0x4];
    TArray<void*> ManualPreloads; // 0x38
    EMaterialPermuterLoadingPriority ManualPreloadPriority; // 0x48
    char pad_49[0x7];
}; // Size: 0x50
#pragma pack(pop)
