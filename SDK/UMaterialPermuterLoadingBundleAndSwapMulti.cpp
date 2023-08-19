#include "AActor.hpp"
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterLoadingBundleAndSwapTarget.hpp"
#include "FMaterialPermuterLoadingBundleAndSwapWeakTarget.hpp"
#include "FMaterialSwapKeyUI.hpp"
#include "UFunction.hpp"
#include "UMaterialPermuterLoadingBundleAndSwap.hpp"
#include "UMaterialPermuterLoadingBundleAndSwapMulti.hpp"
UMaterialPermuterLoadingBundleAndSwapMulti* UMaterialPermuterLoadingBundleAndSwapMulti::CreateAndSwapMultiTarget(AActor* Owner, FMaterialSwapKeyUI SwapInfo, FMaterialPermuterLoadingBundleAndSwapTarget SwapTarget, EMaterialPermuterLoadingPriority LoadPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwapMulti.CreateAndSwapMultiTarget"));
    struct Params_CreateAndSwapMultiTarget {
        AActor* Owner; // 0x0
        FMaterialSwapKeyUI SwapInfo; // 0x8
        FMaterialPermuterLoadingBundleAndSwapTarget SwapTarget; // 0x118
        EMaterialPermuterLoadingPriority LoadPriority; // 0x188
        char pad_189[0x7];
        UMaterialPermuterLoadingBundleAndSwapMulti* ReturnValue; // 0x190
    }; // Size: 0x198
    Params_CreateAndSwapMultiTarget params{};
    params.Owner = (AActor*)Owner;
    params.SwapInfo = (FMaterialSwapKeyUI)SwapInfo;
    params.SwapTarget = (FMaterialPermuterLoadingBundleAndSwapTarget)SwapTarget;
    params.LoadPriority = (EMaterialPermuterLoadingPriority)LoadPriority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMaterialPermuterLoadingBundleAndSwapMulti*)params.ReturnValue;
}
UMaterialPermuterLoadingBundleAndSwapMulti* UMaterialPermuterLoadingBundleAndSwapMulti::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwapMulti");
    return (UMaterialPermuterLoadingBundleAndSwapMulti*)res;
}
UMaterialPermuterLoadingBundleAndSwapMulti* UMaterialPermuterLoadingBundleAndSwapMulti::CreateAndSwapMultiTargets(AActor* Owner, FMaterialSwapKeyUI SwapInfo, TArray<FMaterialPermuterLoadingBundleAndSwapTarget> SwapTargets, EMaterialPermuterLoadingPriority LoadPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwapMulti.CreateAndSwapMultiTargets"));
    struct Params_CreateAndSwapMultiTargets {
        AActor* Owner; // 0x0
        FMaterialSwapKeyUI SwapInfo; // 0x8
        TArray<FMaterialPermuterLoadingBundleAndSwapTarget> SwapTargets; // 0x118
        EMaterialPermuterLoadingPriority LoadPriority; // 0x128
        char pad_129[0x7];
        UMaterialPermuterLoadingBundleAndSwapMulti* ReturnValue; // 0x130
    }; // Size: 0x138
    Params_CreateAndSwapMultiTargets params{};
    params.Owner = (AActor*)Owner;
    params.SwapInfo = (FMaterialSwapKeyUI)SwapInfo;
    params.SwapTargets = (TArray<FMaterialPermuterLoadingBundleAndSwapTarget>)SwapTargets;
    params.LoadPriority = (EMaterialPermuterLoadingPriority)LoadPriority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMaterialPermuterLoadingBundleAndSwapMulti*)params.ReturnValue;
}
