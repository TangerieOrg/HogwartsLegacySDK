#include "ESlateVisibility.hpp"
#include "UBPI_PhoenixHud_C.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UObject.hpp"
UBPI_PhoenixHud_C* UBPI_PhoenixHud_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CallOuts/BPI_PhoenixHud.BPI_PhoenixHud_C");
    return (UBPI_PhoenixHud_C*)res;
}
void UBPI_PhoenixHud_C::I_SetHudElementVisibility(FString HUDElementName, ESlateVisibility Visibility, FString Context, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/BPI_PhoenixHud.BPI_PhoenixHud_C.I_SetHudElementVisibility"));
    struct Params_I_SetHudElementVisibility {
        FString HUDElementName; // 0x0
        ESlateVisibility Visibility; // 0x10
        char pad_11[0x7];
        FString Context; // 0x18
        UObject* Provider; // 0x28
    }; // Size: 0x30
    Params_I_SetHudElementVisibility params{};
    params.HUDElementName = (FString)HUDElementName;
    params.Visibility = (ESlateVisibility)Visibility;
    params.Context = (FString)Context;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void UBPI_PhoenixHud_C::I_SetHudWidgetVisibility(ESlateVisibility Visibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/BPI_PhoenixHud.BPI_PhoenixHud_C.I_SetHudWidgetVisibility"));
    struct Params_I_SetHudWidgetVisibility {
        ESlateVisibility Visibility; // 0x0
    }; // Size: 0x1
    Params_I_SetHudWidgetVisibility params{};
    params.Visibility = (ESlateVisibility)Visibility;
    ProcessEvent(func, &params);
}
