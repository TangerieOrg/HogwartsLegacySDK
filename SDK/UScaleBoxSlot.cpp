#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UFunction.hpp"
#include "UPanelSlot.hpp"
#include "UScaleBoxSlot.hpp"
UScaleBoxSlot* UScaleBoxSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ScaleBoxSlot");
    return (UScaleBoxSlot*)res;
}
void UScaleBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizontalAlignment InHorizontalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.InHorizontalAlignment = (EHorizontalAlignment)InHorizontalAlignment;
    ProcessEvent(func, &params);
}
void UScaleBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalAlignment InVerticalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.InVerticalAlignment = (EVerticalAlignment)InVerticalAlignment;
    ProcessEvent(func, &params);
}
void UScaleBoxSlot::SetPadding(FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScaleBoxSlot.SetPadding"));
    struct Params_SetPadding {
        FMargin InPadding; // 0x0
    }; // Size: 0x10
    Params_SetPadding params{};
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
