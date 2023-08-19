#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterLoadingStrategy.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterLoadingStrategies {
    char pad_0[0x50];
    FMaterialPermuterLoadingStrategy DefaultStrategy; // 0x50
    char pad_64[0x4];
    TArray<void*> ManualPreloads; // 0x68
    EMaterialPermuterLoadingPriority ManualPreloadPriority; // 0x78
    char pad_79[0x7];
}; // Size: 0x80
#pragma pack(pop)
