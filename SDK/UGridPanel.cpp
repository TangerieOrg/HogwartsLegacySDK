#include "UFunction.hpp"
#include "UGridPanel.hpp"
#include "UGridSlot.hpp"
#include "UPanelWidget.hpp"
#include "UWidget.hpp"
UGridPanel* UGridPanel::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.GridPanel");
    return (UGridPanel*)res;
}
void UGridPanel::SetRowFill(int32_t ColumnIndex, float Coefficient) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridPanel.SetRowFill"));
    struct Params_SetRowFill {
        int32_t ColumnIndex; // 0x0
        float Coefficient; // 0x4
    }; // Size: 0x8
    Params_SetRowFill params{};
    params.ColumnIndex = (int32_t)ColumnIndex;
    params.Coefficient = (float)Coefficient;
    ProcessEvent(func, &params);
}
UGridSlot* UGridPanel::AddChildToGrid(UWidget* Content, int32_t InRow, int32_t InColumn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridPanel.AddChildToGrid"));
    struct Params_AddChildToGrid {
        UWidget* Content; // 0x0
        int32_t InRow; // 0x8
        int32_t InColumn; // 0xc
        UGridSlot* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddChildToGrid params{};
    params.Content = (UWidget*)Content;
    params.InRow = (int32_t)InRow;
    params.InColumn = (int32_t)InColumn;
    ProcessEvent(func, &params);
    return (UGridSlot*)params.ReturnValue;
}
void UGridPanel::SetColumnFill(int32_t ColumnIndex, float Coefficient) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.GridPanel.SetColumnFill"));
    struct Params_SetColumnFill {
        int32_t ColumnIndex; // 0x0
        float Coefficient; // 0x4
    }; // Size: 0x8
    Params_SetColumnFill params{};
    params.ColumnIndex = (int32_t)ColumnIndex;
    params.Coefficient = (float)Coefficient;
    ProcessEvent(func, &params);
}
