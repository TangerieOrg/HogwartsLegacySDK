#include "FLegendItemData.hpp"
#include "UFunction.hpp"
#include "UInGameMenuScreen.hpp"
#include "UPageStack.hpp"
#include "UScreen.hpp"
UInGameMenuScreen* UInGameMenuScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InGameMenuScreen");
    return (UInGameMenuScreen*)res;
}
void UInGameMenuScreen::SetButtonLegend(TArray<FLegendItemData>& Legend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InGameMenuScreen.SetButtonLegend"));
    struct Params_SetButtonLegend {
        TArray<FLegendItemData> Legend; // 0x0
    }; // Size: 0x10
    Params_SetButtonLegend params{};
    params.Legend = (TArray<FLegendItemData>)Legend;
    ProcessEvent(func, &params);
    Legend = params.Legend;
}
void UInGameMenuScreen::ExitPauseMenu(bool SkipFade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InGameMenuScreen.ExitPauseMenu"));
    struct Params_ExitPauseMenu {
        bool SkipFade; // 0x0
    }; // Size: 0x1
    Params_ExitPauseMenu params{};
    params.SkipFade = (bool)SkipFade;
    ProcessEvent(func, &params);
}
void UInGameMenuScreen::MarkNeedsAutosave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InGameMenuScreen.MarkNeedsAutosave"));
    struct Params_MarkNeedsAutosave {
    }; // Size: 0x0
    Params_MarkNeedsAutosave params{};
    ProcessEvent(func, &params);
}
