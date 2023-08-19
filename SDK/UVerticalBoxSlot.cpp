#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "FSlateChildSize.hpp"
#include "UFunction.hpp"
#include "UPanelSlot.hpp"
#include "UVerticalBoxSlot.hpp"
void UVerticalBoxSlot::SetPadding(FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.VerticalBoxSlot.SetPadding"));
    struct Params_SetPadding {
        FMargin InPadding; // 0x0
    }; // Size: 0x10
    Params_SetPadding params{};
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
UVerticalBoxSlot* UVerticalBoxSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.VerticalBoxSlot");
    return (UVerticalBoxSlot*)res;
}
void UVerticalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalAlignment InVerticalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.InVerticalAlignment = (EVerticalAlignment)InVerticalAlignment;
    ProcessEvent(func, &params);
}
void UVerticalBoxSlot::SetSize(FSlateChildSize InSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.VerticalBoxSlot.SetSize"));
    struct Params_SetSize {
        FSlateChildSize InSize; // 0x0
    }; // Size: 0x8
    Params_SetSize params{};
    params.InSize = (FSlateChildSize)InSize;
    ProcessEvent(func, &params);
}
void UVerticalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizontalAlignment InHorizontalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.InHorizontalAlignment = (EHorizontalAlignment)InHorizontalAlignment;
    ProcessEvent(func, &params);
}
