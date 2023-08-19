#include "AActor.hpp"
#include "FHardSwapBatchComponentSettings.hpp"
#include "FMaterialPermuterHardSwapRules.hpp"
#include "UFunction.hpp"
#include "UHardSwapBatchComponent.hpp"
#include "UHardSwapBatchComponentRules.hpp"
void UHardSwapBatchComponentRules::CreateHardSwapBatchComponentWithRules(AActor* Owner, FMaterialPermuterHardSwapRules HardSwapSetup, TArray<AActor*> Actors, FHardSwapBatchComponentSettings BatchSettings, UHardSwapBatchComponentRules*& HardSwapBatchComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.HardSwapBatchComponentRules.CreateHardSwapBatchComponentWithRules"));
    struct Params_CreateHardSwapBatchComponentWithRules {
        AActor* Owner; // 0x0
        FMaterialPermuterHardSwapRules HardSwapSetup; // 0x8
        TArray<AActor*> Actors; // 0x140
        FHardSwapBatchComponentSettings BatchSettings; // 0x150
        char pad_15c[0x4];
        UHardSwapBatchComponentRules* HardSwapBatchComponent; // 0x160
    }; // Size: 0x168
    Params_CreateHardSwapBatchComponentWithRules params{};
    params.Owner = (AActor*)Owner;
    params.HardSwapSetup = (FMaterialPermuterHardSwapRules)HardSwapSetup;
    params.Actors = (TArray<AActor*>)Actors;
    params.BatchSettings = (FHardSwapBatchComponentSettings)BatchSettings;
    params.HardSwapBatchComponent = (UHardSwapBatchComponentRules*)HardSwapBatchComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapBatchComponent = params.HardSwapBatchComponent;
}
UHardSwapBatchComponentRules* UHardSwapBatchComponentRules::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.HardSwapBatchComponentRules");
    return (UHardSwapBatchComponentRules*)res;
}
