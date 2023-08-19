#include "UDialogBoxScreen.hpp"
#include "UFunction.hpp"
#include "UScreen.hpp"
UDialogBoxScreen* UDialogBoxScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogBoxScreen");
    return (UDialogBoxScreen*)res;
}
void UDialogBoxScreen::SetDialogContent(FString TitleText, FString BodyText, FString LegendText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DialogBoxScreen.SetDialogContent"));
    struct Params_SetDialogContent {
        FString TitleText; // 0x0
        FString BodyText; // 0x10
        FString LegendText; // 0x20
    }; // Size: 0x30
    Params_SetDialogContent params{};
    params.TitleText = (FString)TitleText;
    params.BodyText = (FString)BodyText;
    params.LegendText = (FString)LegendText;
    ProcessEvent(func, &params);
}
