#include "EProgressBarFillType\Type.hpp"
#include "FLinearColor.hpp"
#include "FProgressBarStyle.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UProgressBar.hpp"
#include "USlateBrushAsset.hpp"
#include "USlateWidgetStyleAsset.hpp"
#include "UWidget.hpp"
UProgressBar* UProgressBar::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ProgressBar");
    return (UProgressBar*)res;
}
void UProgressBar::SetPercent(float InPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ProgressBar.SetPercent"));
    struct Params_SetPercent {
        float InPercent; // 0x0
    }; // Size: 0x4
    Params_SetPercent params{};
    params.InPercent = (float)InPercent;
    ProcessEvent(func, &params);
}
void UProgressBar::SetIsMarquee(bool InbIsMarquee) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ProgressBar.SetIsMarquee"));
    struct Params_SetIsMarquee {
        bool InbIsMarquee; // 0x0
    }; // Size: 0x1
    Params_SetIsMarquee params{};
    params.InbIsMarquee = (bool)InbIsMarquee;
    ProcessEvent(func, &params);
}
void UProgressBar::SetFillColorAndOpacity(FLinearColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ProgressBar.SetFillColorAndOpacity"));
    struct Params_SetFillColorAndOpacity {
        FLinearColor InColor; // 0x0
    }; // Size: 0x10
    Params_SetFillColorAndOpacity params{};
    params.InColor = (FLinearColor)InColor;
    ProcessEvent(func, &params);
}
