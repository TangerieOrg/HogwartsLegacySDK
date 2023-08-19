#include "AActor.hpp"
#include "EHardSwapBatchComponentState.hpp"
#include "FActorToHardSwapList.hpp"
#include "FHardSwapBatchComponentSettings.hpp"
#include "FLinearColor.hpp"
#include "FMaterialPermuterHardSwapBase.hpp"
#include "FMaterialSwapSharedMIDCache.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UHardSwapBatchComponent.hpp"
#include "UMaterialPermuterLibrary.hpp"
#include "UTexture.hpp"
void UHardSwapBatchComponent::SetColorParameter(FName Name, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.HardSwapBatchComponent.SetColorParameter"));
    struct Params_SetColorParameter {
        FName Name; // 0x0
        FLinearColor Value; // 0x8
    }; // Size: 0x18
    Params_SetColorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
UHardSwapBatchComponent* UHardSwapBatchComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.HardSwapBatchComponent");
    return (UHardSwapBatchComponent*)res;
}
void UHardSwapBatchComponent::SetTextureParameter(FName Name, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.HardSwapBatchComponent.SetTextureParameter"));
    struct Params_SetTextureParameter {
        FName Name; // 0x0
        UTexture* Value; // 0x8
    }; // Size: 0x10
    Params_SetTextureParameter params{};
    params.Name = (FName)Name;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void UHardSwapBatchComponent::SetScalarParameter(FName Name, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.HardSwapBatchComponent.SetScalarParameter"));
    struct Params_SetScalarParameter {
        FName Name; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetScalarParameter params{};
    params.Name = (FName)Name;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UHardSwapBatchComponent::GetActorsToSwap(TArray<AActor*>& ActorsToSwapList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.HardSwapBatchComponent.GetActorsToSwap"));
    struct Params_GetActorsToSwap {
        TArray<AActor*> ActorsToSwapList; // 0x0
    }; // Size: 0x10
    Params_GetActorsToSwap params{};
    params.ActorsToSwapList = (TArray<AActor*>)ActorsToSwapList;
    ProcessEvent(func, &params);
    ActorsToSwapList = params.ActorsToSwapList;
}
