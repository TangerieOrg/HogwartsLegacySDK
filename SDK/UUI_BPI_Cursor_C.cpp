#include "FLegendItemData.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "ULegendItem.hpp"
#include "UUI_BPI_Cursor_C.hpp"
#include "UUserWidget.hpp"
void UUI_BPI_Cursor_C::I_HideTooltip() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_HideTooltip"));
    struct Params_I_HideTooltip {
    }; // Size: 0x0
    Params_I_HideTooltip params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_Cursor_C::I_SetTooltipItemName(FString Title) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_SetTooltipItemName"));
    struct Params_I_SetTooltipItemName {
        FString Title; // 0x0
    }; // Size: 0x10
    Params_I_SetTooltipItemName params{};
    params.Title = (FString)Title;
    ProcessEvent(func, &params);
}
UUI_BPI_Cursor_C* UUI_BPI_Cursor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C");
    return (UUI_BPI_Cursor_C*)res;
}
void UUI_BPI_Cursor_C::I_IsTooltipShowing(bool& IsShowing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_IsTooltipShowing"));
    struct Params_I_IsTooltipShowing {
        bool IsShowing; // 0x0
    }; // Size: 0x1
    Params_I_IsTooltipShowing params{};
    params.IsShowing = (bool)IsShowing;
    ProcessEvent(func, &params);
    IsShowing = params.IsShowing;
}
void UUI_BPI_Cursor_C::I_GetTooltipLegendItem(int32_t LegendItemIndex, ULegendItem*& LegendItem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_GetTooltipLegendItem"));
    struct Params_I_GetTooltipLegendItem {
        int32_t LegendItemIndex; // 0x0
        char pad_4[0x4];
        ULegendItem* LegendItem; // 0x8
    }; // Size: 0x10
    Params_I_GetTooltipLegendItem params{};
    params.LegendItemIndex = (int32_t)LegendItemIndex;
    params.LegendItem = (ULegendItem*)LegendItem;
    ProcessEvent(func, &params);
    LegendItem = params.LegendItem;
}
void UUI_BPI_Cursor_C::I_ToggleRTInfoCallout(bool ShowCallout) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_ToggleRTInfoCallout"));
    struct Params_I_ToggleRTInfoCallout {
        bool ShowCallout; // 0x0
    }; // Size: 0x1
    Params_I_ToggleRTInfoCallout params{};
    params.ShowCallout = (bool)ShowCallout;
    ProcessEvent(func, &params);
}
void UUI_BPI_Cursor_C::I_SetTooltipLegendData(TArray<FLegendItemData>& LegendData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_SetTooltipLegendData"));
    struct Params_I_SetTooltipLegendData {
        TArray<FLegendItemData> LegendData; // 0x0
    }; // Size: 0x10
    Params_I_SetTooltipLegendData params{};
    params.LegendData = (TArray<FLegendItemData>)LegendData;
    ProcessEvent(func, &params);
    LegendData = params.LegendData;
}
void UUI_BPI_Cursor_C::I_AddNonExpandableContent(UUserWidget* NewContent, bool ClearExistingContent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_AddNonExpandableContent"));
    struct Params_I_AddNonExpandableContent {
        UUserWidget* NewContent; // 0x0
        bool ClearExistingContent; // 0x8
    }; // Size: 0x9
    Params_I_AddNonExpandableContent params{};
    params.NewContent = (UUserWidget*)NewContent;
    params.ClearExistingContent = (bool)ClearExistingContent;
    ProcessEvent(func, &params);
}
void UUI_BPI_Cursor_C::I_SetTooltipLegend() {}
void UUI_BPI_Cursor_C::I_SetTooltipProgressPercent(float Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_SetTooltipProgressPercent"));
    struct Params_I_SetTooltipProgressPercent {
        float Percent; // 0x0
    }; // Size: 0x4
    Params_I_SetTooltipProgressPercent params{};
    params.Percent = (float)Percent;
    ProcessEvent(func, &params);
}
void UUI_BPI_Cursor_C::I_ShowTooltipProgressBar(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_ShowTooltipProgressBar"));
    struct Params_I_ShowTooltipProgressBar {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_I_ShowTooltipProgressBar params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UUI_BPI_Cursor_C::I_setTooltipTitle(FString NewTitle, bool Translatable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_setTooltipTitle"));
    struct Params_I_setTooltipTitle {
        FString NewTitle; // 0x0
        bool Translatable; // 0x10
    }; // Size: 0x11
    Params_I_setTooltipTitle params{};
    params.NewTitle = (FString)NewTitle;
    params.Translatable = (bool)Translatable;
    ProcessEvent(func, &params);
}
void UUI_BPI_Cursor_C::I_HideCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_HideCursor"));
    struct Params_I_HideCursor {
    }; // Size: 0x0
    Params_I_HideCursor params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_Cursor_C::I_ShowCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_ShowCursor"));
    struct Params_I_ShowCursor {
    }; // Size: 0x0
    Params_I_ShowCursor params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_Cursor_C::I_SetTooltipInfo(FString Title, bool TitleTranslatable, FString Description, bool DescriptionTranslatable, FString Quality) {}
void UUI_BPI_Cursor_C::I_ShowTooltip() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Cursor.UI_BPI_Cursor_C.I_ShowTooltip"));
    struct Params_I_ShowTooltip {
    }; // Size: 0x0
    Params_I_ShowTooltip params{};
    ProcessEvent(func, &params);
}
