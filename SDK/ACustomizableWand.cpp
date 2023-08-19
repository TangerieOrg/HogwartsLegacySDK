#include "AActor.hpp"
#include "ACustomizableWand.hpp"
#include "UFunction.hpp"
#include "USkeletalMesh.hpp"
#include "UTexture.hpp"
ACustomizableWand* ACustomizableWand::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CustomizableWand");
    return (ACustomizableWand*)res;
}
void ACustomizableWand::OnLODsLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CustomizableWand.OnLODsLoaded"));
    struct Params_OnLODsLoaded {
    }; // Size: 0x0
    Params_OnLODsLoaded params{};
    ProcessEvent(func, &params);
}
void ACustomizableWand::ForceCurrentWandLODsToBeResident(USkeletalMesh* WandMesh, UTexture* WandD, UTexture* WandN, UTexture* WandMRO, UTexture* Handled, UTexture* HandleN, UTexture* HandleMRO) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CustomizableWand.ForceCurrentWandLODsToBeResident"));
    struct Params_ForceCurrentWandLODsToBeResident {
        USkeletalMesh* WandMesh; // 0x0
        UTexture* WandD; // 0x8
        UTexture* WandN; // 0x10
        UTexture* WandMRO; // 0x18
        UTexture* Handled; // 0x20
        UTexture* HandleN; // 0x28
        UTexture* HandleMRO; // 0x30
    }; // Size: 0x38
    Params_ForceCurrentWandLODsToBeResident params{};
    params.WandMesh = (USkeletalMesh*)WandMesh;
    params.WandD = (UTexture*)WandD;
    params.WandN = (UTexture*)WandN;
    params.WandMRO = (UTexture*)WandMRO;
    params.Handled = (UTexture*)Handled;
    params.HandleN = (UTexture*)HandleN;
    params.HandleMRO = (UTexture*)HandleMRO;
    ProcessEvent(func, &params);
}
void ACustomizableWand::AsyncLoadTexture() {}
