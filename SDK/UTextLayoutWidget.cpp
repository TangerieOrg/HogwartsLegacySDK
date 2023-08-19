#include "ETextJustify\Type.hpp"
#include "ETextWrappingPolicy.hpp"
#include "FMargin.hpp"
#include "FShapedTextOptions.hpp"
#include "UFunction.hpp"
#include "UTextLayoutWidget.hpp"
#include "UWidget.hpp"
UTextLayoutWidget* UTextLayoutWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.TextLayoutWidget");
    return (UTextLayoutWidget*)res;
}
void UTextLayoutWidget::SetJustification(ETextJustify::Type InJustification) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextLayoutWidget.SetJustification"));
    struct Params_SetJustification {
        ETextJustify::Type InJustification; // 0x0
    }; // Size: 0x1
    Params_SetJustification params{};
    params.InJustification = (ETextJustify::Type)InJustification;
    ProcessEvent(func, &params);
}
