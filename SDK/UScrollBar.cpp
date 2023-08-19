#include "EOrientation.hpp"
#include "FMargin.hpp"
#include "FScrollBarStyle.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UScrollBar.hpp"
#include "USlateWidgetStyleAsset.hpp"
#include "UWidget.hpp"
UScrollBar* UScrollBar::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ScrollBar");
    return (UScrollBar*)res;
}
void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScrollBar.SetState"));
    struct Params_SetState {
        float InOffsetFraction; // 0x0
        float InThumbSizeFraction; // 0x4
    }; // Size: 0x8
    Params_SetState params{};
    params.InOffsetFraction = (float)InOffsetFraction;
    params.InThumbSizeFraction = (float)InThumbSizeFraction;
    ProcessEvent(func, &params);
}
