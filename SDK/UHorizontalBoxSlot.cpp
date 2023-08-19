#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "FSlateChildSize.hpp"
#include "UFunction.hpp"
#include "UHorizontalBoxSlot.hpp"
#include "UPanelSlot.hpp"
UHorizontalBoxSlot* UHorizontalBoxSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.HorizontalBoxSlot");
    return (UHorizontalBoxSlot*)res;
}
void UHorizontalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalAlignment InVerticalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.InVerticalAlignment = (EVerticalAlignment)InVerticalAlignment;
    ProcessEvent(func, &params);
}
void UHorizontalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizontalAlignment InHorizontalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.InHorizontalAlignment = (EHorizontalAlignment)InHorizontalAlignment;
    ProcessEvent(func, &params);
}
void UHorizontalBoxSlot::SetSize(FSlateChildSize InSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.HorizontalBoxSlot.SetSize"));
    struct Params_SetSize {
        FSlateChildSize InSize; // 0x0
    }; // Size: 0x8
    Params_SetSize params{};
    params.InSize = (FSlateChildSize)InSize;
    ProcessEvent(func, &params);
}
void UHorizontalBoxSlot::SetPadding(FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.HorizontalBoxSlot.SetPadding"));
    struct Params_SetPadding {
        FMargin InPadding; // 0x0
    }; // Size: 0x10
    Params_SetPadding params{};
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
