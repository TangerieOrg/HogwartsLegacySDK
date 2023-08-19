#include "AActor.hpp"
#include "FHardSwapBatchComponentSettings.hpp"
#include "FMaterialPermuterHardSwapSimple.hpp"
#include "UFunction.hpp"
#include "UHardSwapBatchComponent.hpp"
#include "UHardSwapBatchComponentSimple.hpp"
UHardSwapBatchComponentSimple* UHardSwapBatchComponentSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.HardSwapBatchComponentSimple");
    return (UHardSwapBatchComponentSimple*)res;
}
void UHardSwapBatchComponentSimple::CreateHardSwapBatchComponent(AActor* Owner, FMaterialPermuterHardSwapSimple HardSwapSetup, TArray<AActor*> Actors, FHardSwapBatchComponentSettings BatchSettings, UHardSwapBatchComponentSimple*& HardSwapBatchComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.HardSwapBatchComponentSimple.CreateHardSwapBatchComponent"));
    struct Params_CreateHardSwapBatchComponent {
        AActor* Owner; // 0x0
        FMaterialPermuterHardSwapSimple HardSwapSetup; // 0x8
        TArray<AActor*> Actors; // 0x68
        FHardSwapBatchComponentSettings BatchSettings; // 0x78
        char pad_84[0x4];
        UHardSwapBatchComponentSimple* HardSwapBatchComponent; // 0x88
    }; // Size: 0x90
    Params_CreateHardSwapBatchComponent params{};
    params.Owner = (AActor*)Owner;
    params.HardSwapSetup = (FMaterialPermuterHardSwapSimple)HardSwapSetup;
    params.Actors = (TArray<AActor*>)Actors;
    params.BatchSettings = (FHardSwapBatchComponentSettings)BatchSettings;
    params.HardSwapBatchComponent = (UHardSwapBatchComponentSimple*)HardSwapBatchComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HardSwapBatchComponent = params.HardSwapBatchComponent;
}
