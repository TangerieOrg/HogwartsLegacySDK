#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UFunction.hpp"
#include "UPanelSlot.hpp"
#include "UWrapBoxSlot.hpp"
UWrapBoxSlot* UWrapBoxSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WrapBoxSlot");
    return (UWrapBoxSlot*)res;
}
void UWrapBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalAlignment InVerticalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.InVerticalAlignment = (EVerticalAlignment)InVerticalAlignment;
    ProcessEvent(func, &params);
}
void UWrapBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizontalAlignment InHorizontalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.InHorizontalAlignment = (EHorizontalAlignment)InHorizontalAlignment;
    ProcessEvent(func, &params);
}
void UWrapBoxSlot::SetPadding(FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WrapBoxSlot.SetPadding"));
    struct Params_SetPadding {
        FMargin InPadding; // 0x0
    }; // Size: 0x10
    Params_SetPadding params{};
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace"));
    struct Params_SetFillEmptySpace {
        bool InbFillEmptySpace; // 0x0
    }; // Size: 0x1
    Params_SetFillEmptySpace params{};
    params.InbFillEmptySpace = (bool)InbFillEmptySpace;
    ProcessEvent(func, &params);
}
void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan"));
    struct Params_SetFillSpanWhenLessThan {
        float InFillSpanWhenLessThan; // 0x0
    }; // Size: 0x4
    Params_SetFillSpanWhenLessThan params{};
    params.InFillSpanWhenLessThan = (float)InFillSpanWhenLessThan;
    ProcessEvent(func, &params);
}
