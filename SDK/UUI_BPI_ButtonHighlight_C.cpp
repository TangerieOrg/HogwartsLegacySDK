#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_ButtonHighlight_C.hpp"
UUI_BPI_ButtonHighlight_C* UUI_BPI_ButtonHighlight_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/UIInterfaces/UI_BPI_ButtonHighlight.UI_BPI_ButtonHighlight_C");
    return (UUI_BPI_ButtonHighlight_C*)res;
}
void UUI_BPI_ButtonHighlight_C::I_PlayHighlightAnimation(bool ShowHighlight) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_ButtonHighlight.UI_BPI_ButtonHighlight_C.I_PlayHighlightAnimation"));
    struct Params_I_PlayHighlightAnimation {
        bool ShowHighlight; // 0x0
    }; // Size: 0x1
    Params_I_PlayHighlightAnimation params{};
    params.ShowHighlight = (bool)ShowHighlight;
    ProcessEvent(func, &params);
}
