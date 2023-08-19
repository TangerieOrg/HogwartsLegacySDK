#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingBundleAndSwapType.hpp"
#include "FHardSwapBatchComponentSettings.hpp"
#include "FMaterialSwapParameters.hpp"
class AActor;
#pragma pack(push, 1)
struct FMaterialPermuterLoadingBundleAndSwapTarget {
    TArray<AActor*> ActorsToSwap; // 0x0
    FMaterialSwapParameters InitialParameters; // 0x10
    EMaterialPermuterLoadingBundleAndSwapType SwapType; // 0x60
    char pad_61[0x3];
    FHardSwapBatchComponentSettings HardSwapBatchSettings; // 0x64
}; // Size: 0x70
#pragma pack(pop)
