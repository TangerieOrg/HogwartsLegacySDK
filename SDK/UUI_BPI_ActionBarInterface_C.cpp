#include "ESlateVisibility.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_ActionBarInterface_C.hpp"
void UUI_BPI_ActionBarInterface_C::SetWandState() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BPI_ActionBarInterface.UI_BPI_ActionBarInterface_C.SetWandState"));
    struct Params_SetWandState {
    }; // Size: 0x0
    Params_SetWandState params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_ActionBarInterface_C::ShowMiniDiamond(ESlateVisibility Show) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BPI_ActionBarInterface.UI_BPI_ActionBarInterface_C.ShowMiniDiamond"));
    struct Params_ShowMiniDiamond {
        ESlateVisibility Show; // 0x0
    }; // Size: 0x1
    Params_ShowMiniDiamond params{};
    params.Show = (ESlateVisibility)Show;
    ProcessEvent(func, &params);
}
UUI_BPI_ActionBarInterface_C* UUI_BPI_ActionBarInterface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/HUD/ActionBar/UI_BPI_ActionBarInterface.UI_BPI_ActionBarInterface_C");
    return (UUI_BPI_ActionBarInterface_C*)res;
}
