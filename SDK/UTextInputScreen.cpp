#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UScreen.hpp"
#include "UTextInputScreen.hpp"
UTextInputScreen* UTextInputScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TextInputScreen");
    return (UTextInputScreen*)res;
}
void UTextInputScreen::SetPopupTitle(FString PopupTitle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TextInputScreen.SetPopupTitle"));
    struct Params_SetPopupTitle {
        FString PopupTitle; // 0x0
    }; // Size: 0x10
    Params_SetPopupTitle params{};
    params.PopupTitle = (FString)PopupTitle;
    ProcessEvent(func, &params);
}
void UTextInputScreen::SetCreatureState(UCreatureState* CreatureState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TextInputScreen.SetCreatureState"));
    struct Params_SetCreatureState {
        UCreatureState* CreatureState; // 0x0
    }; // Size: 0x8
    Params_SetCreatureState params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    ProcessEvent(func, &params);
}
