#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UAvaUserWidget.hpp"
class UWidgetAnimation;
class UPhoenixRichTextBlock;
class UHorizontalBox;
class USizeBox;
class UImage;
#pragma pack(push, 1)
class UUI_BP_MissionBannerCheckbox_C : public UAvaUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* ShowStepComplete; // 0x330
    UPhoenixRichTextBlock* CheckboxText; // 0x338
    UHorizontalBox* CollapsableContents; // 0x340
    USizeBox* CollapsingSizeBox; // 0x348
    UImage* waypointIcon; // 0x350
    static UUI_BP_MissionBannerCheckbox_C* StaticClass();
    void UpdateIconColor(FLinearColor NewColor);
    void ShowPaper(bool ShowPaper, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetCheckmarkData();
    void SetDynamicSizeBoxHeight();
    void WidgetAnimationEvt_ShowStepComplete_K2Node_WidgetAnimationEvent_0();
    void ExecuteUbergraph_UI_BP_MissionBannerCheckbox(int32_t EntryPoint, FVector2D CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
}; // Size: 0x358
#pragma pack(pop)
