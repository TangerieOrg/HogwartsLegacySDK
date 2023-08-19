#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UGridSlot.hpp"
#include "UPanelSlot.hpp"
void UGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridSlot.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizontalAlignment InHorizontalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.InHorizontalAlignment = (EHorizontalAlignment)InHorizontalAlignment;
    ProcessEvent(func, &params);
}
void UGridSlot::SetLayer(int32_t InLayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridSlot.SetLayer"));
    struct Params_SetLayer {
        int32_t InLayer; // 0x0
    }; // Size: 0x4
    Params_SetLayer params{};
    params.InLayer = (int32_t)InLayer;
    ProcessEvent(func, &params);
}
UGridSlot* UGridSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.GridSlot");
    return (UGridSlot*)res;
}
void UGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridSlot.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalAlignment InVerticalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.InVerticalAlignment = (EVerticalAlignment)InVerticalAlignment;
    ProcessEvent(func, &params);
}
void UGridSlot::SetRowSpan(int32_t InRowSpan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridSlot.SetRowSpan"));
    struct Params_SetRowSpan {
        int32_t InRowSpan; // 0x0
    }; // Size: 0x4
    Params_SetRowSpan params{};
    params.InRowSpan = (int32_t)InRowSpan;
    ProcessEvent(func, &params);
}
void UGridSlot::SetRow(int32_t InRow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridSlot.SetRow"));
    struct Params_SetRow {
        int32_t InRow; // 0x0
    }; // Size: 0x4
    Params_SetRow params{};
    params.InRow = (int32_t)InRow;
    ProcessEvent(func, &params);
}
void UGridSlot::SetPadding(FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridSlot.SetPadding"));
    struct Params_SetPadding {
        FMargin InPadding; // 0x0
    }; // Size: 0x10
    Params_SetPadding params{};
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
void UGridSlot::SetColumn(int32_t InColumn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridSlot.SetColumn"));
    struct Params_SetColumn {
        int32_t InColumn; // 0x0
    }; // Size: 0x4
    Params_SetColumn params{};
    params.InColumn = (int32_t)InColumn;
    ProcessEvent(func, &params);
}
void UGridSlot::SetNudge(FVector2D InNudge) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridSlot.SetNudge"));
    struct Params_SetNudge {
        FVector2D InNudge; // 0x0
    }; // Size: 0x8
    Params_SetNudge params{};
    params.InNudge = (FVector2D)InNudge;
    ProcessEvent(func, &params);
}
void UGridSlot::SetColumnSpan(int32_t InColumnSpan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridSlot.SetColumnSpan"));
    struct Params_SetColumnSpan {
        int32_t InColumnSpan; // 0x0
    }; // Size: 0x4
    Params_SetColumnSpan params{};
    params.InColumnSpan = (int32_t)InColumnSpan;
    ProcessEvent(func, &params);
}
