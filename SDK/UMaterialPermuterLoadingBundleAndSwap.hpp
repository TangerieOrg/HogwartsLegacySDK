#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingBundleAndSwapState.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapKeyUI.hpp"
#include "UMaterialPermuterLoadingBundle.hpp"
class UMaterialSwap;
class UTexture;
struct FMaterialPermuterKey;
#pragma pack(push, 1)
class UMaterialPermuterLoadingBundleAndSwap : public UMaterialPermuterLoadingBundle {
public:
    char pad_1a0[0x30];
    FMaterialSwapKeyUI MaterialSwapInfo; // 0x1d0
    EMaterialPermuterLoadingBundleAndSwapState MaterialSwapState; // 0x2e0
    char pad_2e1[0x7];
    TArray<UMaterialSwap*> RawMaterialSwaps; // 0x2e8
    TArray<void*> MaterialSwapComponents; // 0x2f8
    TArray<void*> HardSwapBatchComponents; // 0x308
    static UMaterialPermuterLoadingBundleAndSwap* StaticClass();
    void SetTextureParameter(FName Name, UTexture* Value);
    void SetScalarParameter(FName Name, float Value);
    void SetColorParameter(FName Name, FLinearColor Value);
    void ReleaseRawMaterialSwaps(bool bUnswap);
    void HasRawMaterialSwaps(int32_t& RawMaterialsSwapCount);
    void GetMaterialSwapState(EMaterialPermuterLoadingBundleAndSwapState& CurrentSwapState);
    void GetMaterialSwapKey(FMaterialPermuterKey& Key);
}; // Size: 0x318
#pragma pack(pop)
