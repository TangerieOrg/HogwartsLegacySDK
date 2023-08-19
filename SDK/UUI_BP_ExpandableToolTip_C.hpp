#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRarityColors.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UImage;
class UPhoenixRichTextBlock;
class USpacer;
class UHorizontalBox;
class UPhoenixTextBlock;
class UExpandableArea;
class UCanvasPanel;
class UOverlay;
class UProgressBar;
class UUI_BP_LegendBox_C;
class USizeBox;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UVerticalBox;
class UTween;
class ULegendItem;
class UVerticalBoxSlot;
#pragma pack(push, 1)
class UUI_BP_ExpandableToolTip_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UImage* AlbinoIcon; // 0x270
    UPhoenixRichTextBlock* descriptionText; // 0x278
    UHorizontalBox* ErrorText; // 0x280
    UPhoenixTextBlock* ErrorTextMain; // 0x288
    UExpandableArea* expandableContent; // 0x290
    UOverlay* footer; // 0x298
    UImage* footerDivider; // 0x2a0
    UImage* GenderIcon; // 0x2a8
    USpacer* headerSpacer; // 0x2b0
    UImage* Image_4; // 0x2b8
    UProgressBar* inProgressMeter; // 0x2c0
    UPhoenixTextBlock* ItemName; // 0x2c8
    UUI_BP_LegendBox_C* LegendBox; // 0x2d0
    USizeBox* meterSizeBox; // 0x2d8
    UUI_BP_Legend_Horizontal_Tooltip_C* NewTooltipLegend; // 0x2e0
    UVerticalBox* nonExpandableContent; // 0x2e8
    UImage* rarityBack; // 0x2f0
    UCanvasPanel* rarityPanel; // 0x2f8
    UPhoenixTextBlock* rarityTitle; // 0x300
    UHorizontalBox* titleBox; // 0x308
    UVerticalBox* TooltipBody; // 0x310
    UVerticalBox* TooltipContentContainer; // 0x318
    USpacer* toolTipSpacer; // 0x320
    float titleWidth; // 0x328
    bool IsExpanded; // 0x32c
    char pad_32d[0x3];
    UTween* expandTween; // 0x330
    bool IsExpandable; // 0x338
    char pad_339[0x7];
    TArray<FLegendItemData> CurrentLegendData; // 0x340
    bool LegendErrorUsed; // 0x350
    bool LegendTextUsed; // 0x351
    bool NewLegendUsed; // 0x352
    char pad_353[0x5];
    static UUI_BP_ExpandableToolTip_C* StaticClass();
    void CollapseContent(bool ShouldAnimate, int32_t CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ExpandContent(bool ShouldAnimate, int32_t CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void RefreshBodyDividerAndFooterVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void GetTooltipLegendItem(int32_t LegendItemIndex, ULegendItem*& LegendItem, ULegendItem* CallFunc_GetLegendItem_ReturnValue);
    void SetTooltipLegendData(TArray<FLegendItemData>& LegendData, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void SetRarityState(FName RarityTier, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FRarityColors CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue);
    void ToggleRTInfoCallout(bool ShowCallout);
    void AddNonExpandableContent(UUserWidget* NewContent, bool ClearExistingContent, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetIsExpandable(bool IsExpandable);
    void AnimateToolTipWidth(bool isExpanding, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, UTween* CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue, UTween* CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue_1, UTween* CallFunc_Play_ReturnValue, UTween* CallFunc_Play_ReturnValue_1);
    void ToggleInProgressMeter(bool IsShowing);
    void PopulateExpandableLegend();
    void ToggleExpandableContent(bool ShouldAnimate);
    void SetTooltipData(FString NewTitle, bool TitleTranslatable, FString NewDescription, bool DescriptionTranslatable, FString NewQuality);
    void BndEvt__expandableContent_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(UExpandableArea* Area, bool bIsExpanded);
    void Construct();
    void ExecuteUbergraph_UI_BP_ExpandableToolTip(int32_t EntryPoint, UTween* CallFunc_ConstructTween_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, UExpandableArea* K2Node_ComponentBoundEvent_Area, bool K2Node_ComponentBoundEvent_bIsExpanded);
}; // Size: 0x358
#pragma pack(pop)
