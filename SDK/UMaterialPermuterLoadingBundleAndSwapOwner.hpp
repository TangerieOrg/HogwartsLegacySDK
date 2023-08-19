#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingBundleAndSwapType.hpp"
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FHardSwapBatchComponentSettings.hpp"
#include "FMaterialSwapKeyUI.hpp"
#include "FMaterialSwapParameters.hpp"
#include "UMaterialPermuterLoadingBundleAndSwap.hpp"
class AActor;
#pragma pack(push, 1)
class UMaterialPermuterLoadingBundleAndSwapOwner : public UMaterialPermuterLoadingBundleAndSwap {
public:
    FMaterialSwapParameters InitialSwapParameters; // 0x318
    EMaterialPermuterLoadingBundleAndSwapType SwapType; // 0x368
    char pad_369[0x3];
    FHardSwapBatchComponentSettings HardSwapBatchSettings; // 0x36c
    static UMaterialPermuterLoadingBundleAndSwapOwner* StaticClass();
    static UMaterialPermuterLoadingBundleAndSwapOwner* CreateAndSwapOwner(AActor* Owner, FMaterialSwapKeyUI SwapInfo, FMaterialSwapParameters InitialParameters, EMaterialPermuterLoadingBundleAndSwapType MaterialSwapType, EMaterialPermuterLoadingPriority LoadPriority);
}; // Size: 0x378
#pragma pack(pop)
