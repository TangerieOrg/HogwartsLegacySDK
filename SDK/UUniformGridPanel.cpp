#include "FMargin.hpp"
#include "UFunction.hpp"
#include "UPanelWidget.hpp"
#include "UUniformGridPanel.hpp"
#include "UUniformGridSlot.hpp"
#include "UWidget.hpp"
UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(UWidget* Content, int32_t InRow, int32_t InColumn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid"));
    struct Params_AddChildToUniformGrid {
        UWidget* Content; // 0x0
        int32_t InRow; // 0x8
        int32_t InColumn; // 0xc
        UUniformGridSlot* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddChildToUniformGrid params{};
    params.Content = (UWidget*)Content;
    params.InRow = (int32_t)InRow;
    params.InColumn = (int32_t)InColumn;
    ProcessEvent(func, &params);
    return (UUniformGridSlot*)params.ReturnValue;
}
UUniformGridPanel* UUniformGridPanel::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.UniformGridPanel");
    return (UUniformGridPanel*)res;
}
void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth"));
    struct Params_SetMinDesiredSlotWidth {
        float InMinDesiredSlotWidth; // 0x0
    }; // Size: 0x4
    Params_SetMinDesiredSlotWidth params{};
    params.InMinDesiredSlotWidth = (float)InMinDesiredSlotWidth;
    ProcessEvent(func, &params);
}
void UUniformGridPanel::SetSlotPadding(FMargin InSlotPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UniformGridPanel.SetSlotPadding"));
    struct Params_SetSlotPadding {
        FMargin InSlotPadding; // 0x0
    }; // Size: 0x10
    Params_SetSlotPadding params{};
    params.InSlotPadding = (FMargin)InSlotPadding;
    ProcessEvent(func, &params);
}
void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight"));
    struct Params_SetMinDesiredSlotHeight {
        float InMinDesiredSlotHeight; // 0x0
    }; // Size: 0x4
    Params_SetMinDesiredSlotHeight params{};
    params.InMinDesiredSlotHeight = (float)InMinDesiredSlotHeight;
    ProcessEvent(func, &params);
}
