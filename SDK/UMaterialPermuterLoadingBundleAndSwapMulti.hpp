#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterLoadingBundleAndSwapTarget.hpp"
#include "FMaterialPermuterLoadingBundleAndSwapWeakTarget.hpp"
#include "FMaterialSwapKeyUI.hpp"
#include "UMaterialPermuterLoadingBundleAndSwap.hpp"
class AActor;
#pragma pack(push, 1)
class UMaterialPermuterLoadingBundleAndSwapMulti : public UMaterialPermuterLoadingBundleAndSwap {
public:
    TArray<FMaterialPermuterLoadingBundleAndSwapWeakTarget> TargetsToSwap; // 0x318
    static UMaterialPermuterLoadingBundleAndSwapMulti* StaticClass();
    static UMaterialPermuterLoadingBundleAndSwapMulti* CreateAndSwapMultiTargets(AActor* Owner, FMaterialSwapKeyUI SwapInfo, TArray<FMaterialPermuterLoadingBundleAndSwapTarget> SwapTargets, EMaterialPermuterLoadingPriority LoadPriority);
    static UMaterialPermuterLoadingBundleAndSwapMulti* CreateAndSwapMultiTarget(AActor* Owner, FMaterialSwapKeyUI SwapInfo, FMaterialPermuterLoadingBundleAndSwapTarget SwapTarget, EMaterialPermuterLoadingPriority LoadPriority);
}; // Size: 0x328
#pragma pack(pop)
