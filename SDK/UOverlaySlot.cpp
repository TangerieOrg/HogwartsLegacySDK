#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UFunction.hpp"
#include "UOverlaySlot.hpp"
#include "UPanelSlot.hpp"
UOverlaySlot* UOverlaySlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.OverlaySlot");
    return (UOverlaySlot*)res;
}
void UOverlaySlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.OverlaySlot.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalAlignment InVerticalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.InVerticalAlignment = (EVerticalAlignment)InVerticalAlignment;
    ProcessEvent(func, &params);
}
void UOverlaySlot::SetPadding(FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.OverlaySlot.SetPadding"));
    struct Params_SetPadding {
        FMargin InPadding; // 0x0
    }; // Size: 0x10
    Params_SetPadding params{};
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
void UOverlaySlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.OverlaySlot.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizontalAlignment InHorizontalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.InHorizontalAlignment = (EHorizontalAlignment)InHorizontalAlignment;
    ProcessEvent(func, &params);
}
