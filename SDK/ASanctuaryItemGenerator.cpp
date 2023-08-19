#include "ASanctuaryItemGenerator.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "UFunction.hpp"
ASanctuaryItemGenerator* ASanctuaryItemGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryItemGenerator");
    return (ASanctuaryItemGenerator*)res;
}
void ASanctuaryItemGenerator::ShowCallout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryItemGenerator.ShowCallout"));
    struct Params_ShowCallout {
    }; // Size: 0x0
    Params_ShowCallout params{};
    ProcessEvent(func, &params);
}
void ASanctuaryItemGenerator::BP_NotifyItemHeldUpdated(FName NewItemHeld, bool bIsInitialState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryItemGenerator.BP_NotifyItemHeldUpdated"));
    struct Params_BP_NotifyItemHeldUpdated {
        FName NewItemHeld; // 0x0
        bool bIsInitialState; // 0x8
    }; // Size: 0x9
    Params_BP_NotifyItemHeldUpdated params{};
    params.NewItemHeld = (FName)NewItemHeld;
    params.bIsInitialState = (bool)bIsInitialState;
    ProcessEvent(func, &params);
}
