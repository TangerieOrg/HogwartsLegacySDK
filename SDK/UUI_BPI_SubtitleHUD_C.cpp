#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_SubtitleHUD_C.hpp"
#include "UUserWidget.hpp"
UUI_BPI_SubtitleHUD_C* UUI_BPI_SubtitleHUD_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_SubtitleHUD.UI_BPI_SubtitleHUD_C");
    return (UUI_BPI_SubtitleHUD_C*)res;
}
void UUI_BPI_SubtitleHUD_C::GetSubtitleHUD(UUserWidget*& SubtitleHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_SubtitleHUD.UI_BPI_SubtitleHUD_C.GetSubtitleHUD"));
    struct Params_GetSubtitleHUD {
        UUserWidget* SubtitleHUD; // 0x0
    }; // Size: 0x8
    Params_GetSubtitleHUD params{};
    params.SubtitleHUD = (UUserWidget*)SubtitleHUD;
    ProcessEvent(func, &params);
    SubtitleHUD = params.SubtitleHUD;
}
