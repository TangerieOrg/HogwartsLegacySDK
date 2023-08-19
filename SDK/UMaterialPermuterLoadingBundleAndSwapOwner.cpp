#include "AActor.hpp"
#include "EMaterialPermuterLoadingBundleAndSwapType.hpp"
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FHardSwapBatchComponentSettings.hpp"
#include "FMaterialSwapKeyUI.hpp"
#include "FMaterialSwapParameters.hpp"
#include "UFunction.hpp"
#include "UMaterialPermuterLoadingBundleAndSwap.hpp"
#include "UMaterialPermuterLoadingBundleAndSwapOwner.hpp"
UMaterialPermuterLoadingBundleAndSwapOwner* UMaterialPermuterLoadingBundleAndSwapOwner::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwapOwner");
    return (UMaterialPermuterLoadingBundleAndSwapOwner*)res;
}
UMaterialPermuterLoadingBundleAndSwapOwner* UMaterialPermuterLoadingBundleAndSwapOwner::CreateAndSwapOwner(AActor* Owner, FMaterialSwapKeyUI SwapInfo, FMaterialSwapParameters InitialParameters, EMaterialPermuterLoadingBundleAndSwapType MaterialSwapType, EMaterialPermuterLoadingPriority LoadPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwapOwner.CreateAndSwapOwner"));
    struct Params_CreateAndSwapOwner {
        AActor* Owner; // 0x0
        FMaterialSwapKeyUI SwapInfo; // 0x8
        FMaterialSwapParameters InitialParameters; // 0x118
        EMaterialPermuterLoadingBundleAndSwapType MaterialSwapType; // 0x168
        EMaterialPermuterLoadingPriority LoadPriority; // 0x169
        char pad_16a[0x6];
        UMaterialPermuterLoadingBundleAndSwapOwner* ReturnValue; // 0x170
    }; // Size: 0x178
    Params_CreateAndSwapOwner params{};
    params.Owner = (AActor*)Owner;
    params.SwapInfo = (FMaterialSwapKeyUI)SwapInfo;
    params.InitialParameters = (FMaterialSwapParameters)InitialParameters;
    params.MaterialSwapType = (EMaterialPermuterLoadingBundleAndSwapType)MaterialSwapType;
    params.LoadPriority = (EMaterialPermuterLoadingPriority)LoadPriority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMaterialPermuterLoadingBundleAndSwapOwner*)params.ReturnValue;
}
