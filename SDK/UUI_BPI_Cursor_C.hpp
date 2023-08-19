#pragma once
#include <cstdint>
#include "FLegendItemData.hpp"
#include "UInterface.hpp"
class ULegendItem;
class UUserWidget;
#pragma pack(push, 1)
class UUI_BPI_Cursor_C : public UInterface {
public:
    static UUI_BPI_Cursor_C* StaticClass();
    void I_GetTooltipLegendItem(int32_t LegendItemIndex, ULegendItem*& LegendItem);
    void I_SetTooltipLegendData(TArray<FLegendItemData>& LegendData);
    void I_ToggleRTInfoCallout(bool ShowCallout);
    void I_SetTooltipItemName(FString Title);
    void I_AddNonExpandableContent(UUserWidget* NewContent, bool ClearExistingContent);
    void I_IsTooltipShowing(bool& IsShowing);
    void I_SetTooltipLegend();
    void I_SetTooltipProgressPercent(float Percent);
    void I_ShowTooltipProgressBar(bool ShouldShow);
    void I_setTooltipTitle(FString NewTitle, bool Translatable);
    void I_HideCursor();
    void I_ShowCursor();
    void I_SetTooltipInfo(FString Title, bool TitleTranslatable, FString Description, bool DescriptionTranslatable, FString Quality);
    void I_HideTooltip();
    void I_ShowTooltip();
}; // Size: 0x28
#pragma pack(pop)
