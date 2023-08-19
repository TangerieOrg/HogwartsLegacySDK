#include "EMaterialPermuterLoadingBundleAndSwapState.hpp"
#include "FLinearColor.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FMaterialSwapKeyUI.hpp"
#include "UFunction.hpp"
#include "UMaterialPermuterLoadingBundle.hpp"
#include "UMaterialPermuterLoadingBundleAndSwap.hpp"
#include "UMaterialSwap.hpp"
#include "UTexture.hpp"
void UMaterialPermuterLoadingBundleAndSwap::ReleaseRawMaterialSwaps(bool bUnswap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.ReleaseRawMaterialSwaps"));
    struct Params_ReleaseRawMaterialSwaps {
        bool bUnswap; // 0x0
    }; // Size: 0x1
    Params_ReleaseRawMaterialSwaps params{};
    params.bUnswap = (bool)bUnswap;
    ProcessEvent(func, &params);
}
UMaterialPermuterLoadingBundleAndSwap* UMaterialPermuterLoadingBundleAndSwap::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwap");
    return (UMaterialPermuterLoadingBundleAndSwap*)res;
}
void UMaterialPermuterLoadingBundleAndSwap::HasRawMaterialSwaps(int32_t& RawMaterialsSwapCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.HasRawMaterialSwaps"));
    struct Params_HasRawMaterialSwaps {
        int32_t RawMaterialsSwapCount; // 0x0
    }; // Size: 0x4
    Params_HasRawMaterialSwaps params{};
    params.RawMaterialsSwapCount = (int32_t)RawMaterialsSwapCount;
    ProcessEvent(func, &params);
    RawMaterialsSwapCount = params.RawMaterialsSwapCount;
}
void UMaterialPermuterLoadingBundleAndSwap::SetTextureParameter(FName Name, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.SetTextureParameter"));
    struct Params_SetTextureParameter {
        FName Name; // 0x0
        UTexture* Value; // 0x8
    }; // Size: 0x10
    Params_SetTextureParameter params{};
    params.Name = (FName)Name;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void UMaterialPermuterLoadingBundleAndSwap::SetScalarParameter(FName Name, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.SetScalarParameter"));
    struct Params_SetScalarParameter {
        FName Name; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetScalarParameter params{};
    params.Name = (FName)Name;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UMaterialPermuterLoadingBundleAndSwap::SetColorParameter(FName Name, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.SetColorParameter"));
    struct Params_SetColorParameter {
        FName Name; // 0x0
        FLinearColor Value; // 0x8
    }; // Size: 0x18
    Params_SetColorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
void UMaterialPermuterLoadingBundleAndSwap::GetMaterialSwapKey(FMaterialPermuterKey& Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.GetMaterialSwapKey"));
    struct Params_GetMaterialSwapKey {
        FMaterialPermuterKey Key; // 0x0
    }; // Size: 0x10
    Params_GetMaterialSwapKey params{};
    params.Key = (FMaterialPermuterKey)Key;
    ProcessEvent(func, &params);
    Key = params.Key;
}
void UMaterialPermuterLoadingBundleAndSwap::GetMaterialSwapState(EMaterialPermuterLoadingBundleAndSwapState& CurrentSwapState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundleAndSwap.GetMaterialSwapState"));
    struct Params_GetMaterialSwapState {
        EMaterialPermuterLoadingBundleAndSwapState CurrentSwapState; // 0x0
    }; // Size: 0x1
    Params_GetMaterialSwapState params{};
    params.CurrentSwapState = (EMaterialPermuterLoadingBundleAndSwapState)CurrentSwapState;
    ProcessEvent(func, &params);
    CurrentSwapState = params.CurrentSwapState;
}
