#include "ESlateVisibility.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRarityColors.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UExpandableArea.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UOverlay.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UProgressBar.hpp"
#include "USizeBox.hpp"
#include "USpacer.hpp"
#include "UTween.hpp"
#include "UUI_BP_ExpandableToolTip_C.hpp"
#include "UUI_BP_LegendBox_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
#include "UVerticalBoxSlot.hpp"
void UUI_BP_ExpandableToolTip_C::BndEvt__expandableContent_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(UExpandableArea* Area, bool bIsExpanded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.BndEvt__expandableContent_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature"));
    struct Params_BndEvt__expandableContent_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature {
        UExpandableArea* Area; // 0x0
        bool bIsExpanded; // 0x8
    }; // Size: 0x9
    Params_BndEvt__expandableContent_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature params{};
    params.Area = (UExpandableArea*)Area;
    params.bIsExpanded = (bool)bIsExpanded;
    ProcessEvent(func, &params);
}
UUI_BP_ExpandableToolTip_C* UUI_BP_ExpandableToolTip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C");
    return (UUI_BP_ExpandableToolTip_C*)res;
}
void UUI_BP_ExpandableToolTip_C::CollapseContent(bool ShouldAnimate, int32_t CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.CollapseContent"));
    struct Params_CollapseContent {
        bool ShouldAnimate; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        float CallFunc_BreakVector2D_X; // 0x8
        float CallFunc_BreakVector2D_Y; // 0xc
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CollapseContent params{};
    params.ShouldAnimate = (bool)ShouldAnimate;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::RefreshBodyDividerAndFooterVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.RefreshBodyDividerAndFooterVisibility"));
    struct Params_RefreshBodyDividerAndFooterVisibility {
        bool Temp_bool_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        bool CallFunc_BooleanOR_ReturnValue; // 0x3
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x4
        ESlateVisibility K2Node_Select_Default; // 0x5
    }; // Size: 0x6
    Params_RefreshBodyDividerAndFooterVisibility params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::ExpandContent(bool ShouldAnimate, int32_t CallFunc_PostEventAtLocation_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ExpandContent"));
    struct Params_ExpandContent {
        bool ShouldAnimate; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        float CallFunc_BreakVector2D_X; // 0x8
        float CallFunc_BreakVector2D_Y; // 0xc
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ExpandContent params{};
    params.ShouldAnimate = (bool)ShouldAnimate;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::SetTooltipLegendData(TArray<FLegendItemData>& LegendData, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.SetTooltipLegendData"));
    struct Params_SetTooltipLegendData {
        TArray<FLegendItemData> LegendData; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x10
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x14
    }; // Size: 0x15
    Params_SetTooltipLegendData params{};
    params.LegendData = (TArray<FLegendItemData>)LegendData;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    LegendData = params.LegendData;
}
void UUI_BP_ExpandableToolTip_C::GetTooltipLegendItem(int32_t LegendItemIndex, ULegendItem*& LegendItem, ULegendItem* CallFunc_GetLegendItem_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.GetTooltipLegendItem"));
    struct Params_GetTooltipLegendItem {
        int32_t LegendItemIndex; // 0x0
        char pad_4[0x4];
        ULegendItem* LegendItem; // 0x8
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetTooltipLegendItem params{};
    params.LegendItemIndex = (int32_t)LegendItemIndex;
    params.LegendItem = (ULegendItem*)LegendItem;
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    ProcessEvent(func, &params);
    LegendItem = params.LegendItem;
}
void UUI_BP_ExpandableToolTip_C::SetRarityState(FName RarityTier, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FRarityColors CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.SetRarityState"));
    struct Params_SetRarityState {
        FName RarityTier; // 0x0
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x8
        bool CallFunc_NotEqual_NameName_ReturnValue_1; // 0x9
        bool CallFunc_BooleanAND_ReturnValue; // 0xa
        char pad_b[0x5];
        FRarityColors CallFunc_GetDataTableRowFromName_OutRow; // 0x10
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x58
        char pad_59[0x3];
        FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue; // 0x5c
    }; // Size: 0x6c
    Params_SetRarityState params{};
    params.RarityTier = (FName)RarityTier;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue_1 = (bool)CallFunc_NotEqual_NameName_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FRarityColors)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_GetColorByRowHandleBP_ReturnValue = (FLinearColor)CallFunc_GetColorByRowHandleBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::ToggleRTInfoCallout(bool ShowCallout) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ToggleRTInfoCallout"));
    struct Params_ToggleRTInfoCallout {
        bool ShowCallout; // 0x0
    }; // Size: 0x1
    Params_ToggleRTInfoCallout params{};
    params.ShowCallout = (bool)ShowCallout;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::AddNonExpandableContent(UUserWidget* NewContent, bool ClearExistingContent, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.AddNonExpandableContent"));
    struct Params_AddNonExpandableContent {
        UUserWidget* NewContent; // 0x0
        bool ClearExistingContent; // 0x8
        char pad_9[0x7];
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_AddNonExpandableContent params{};
    params.NewContent = (UUserWidget*)NewContent;
    params.ClearExistingContent = (bool)ClearExistingContent;
    params.CallFunc_AddChildToVerticalBox_ReturnValue = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::SetIsExpandable(bool IsExpandable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.SetIsExpandable"));
    struct Params_SetIsExpandable {
        bool IsExpandable; // 0x0
    }; // Size: 0x1
    Params_SetIsExpandable params{};
    params.IsExpandable = (bool)IsExpandable;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::AnimateToolTipWidth(bool isExpanding, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, UTween* CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue, UTween* CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue_1, UTween* CallFunc_Play_ReturnValue, UTween* CallFunc_Play_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.AnimateToolTipWidth"));
    struct Params_AnimateToolTipWidth {
        bool isExpanding; // 0x0
        char pad_1[0x3];
        float CallFunc_BreakVector2D_X; // 0x4
        float CallFunc_BreakVector2D_Y; // 0x8
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0xc
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x14
        FVector2D CallFunc_MakeVector2D_ReturnValue_2; // 0x1c
        FVector2D CallFunc_MakeVector2D_ReturnValue_3; // 0x24
        char pad_2c[0x4];
        UTween* CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue; // 0x30
        UTween* CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue_1; // 0x38
        UTween* CallFunc_Play_ReturnValue; // 0x40
        UTween* CallFunc_Play_ReturnValue_1; // 0x48
    }; // Size: 0x50
    Params_AnimateToolTipWidth params{};
    params.isExpanding = (bool)isExpanding;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    params.CallFunc_MakeVector2D_ReturnValue_2 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_2;
    params.CallFunc_MakeVector2D_ReturnValue_3 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_3;
    params.CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue = (UTween*)CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue;
    params.CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue_1 = (UTween*)CallFunc_TweenVector2DPropertyFromStartToEnd_ReturnValue_1;
    params.CallFunc_Play_ReturnValue = (UTween*)CallFunc_Play_ReturnValue;
    params.CallFunc_Play_ReturnValue_1 = (UTween*)CallFunc_Play_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::ToggleInProgressMeter(bool IsShowing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ToggleInProgressMeter"));
    struct Params_ToggleInProgressMeter {
        bool IsShowing; // 0x0
    }; // Size: 0x1
    Params_ToggleInProgressMeter params{};
    params.IsShowing = (bool)IsShowing;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::PopulateExpandableLegend() {}
void UUI_BP_ExpandableToolTip_C::ToggleExpandableContent(bool ShouldAnimate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ToggleExpandableContent"));
    struct Params_ToggleExpandableContent {
        bool ShouldAnimate; // 0x0
    }; // Size: 0x1
    Params_ToggleExpandableContent params{};
    params.ShouldAnimate = (bool)ShouldAnimate;
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::SetTooltipData(FString NewTitle, bool TitleTranslatable, FString NewDescription, bool DescriptionTranslatable, FString NewQuality) {}
void UUI_BP_ExpandableToolTip_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ExpandableToolTip_C::ExecuteUbergraph_UI_BP_ExpandableToolTip(int32_t EntryPoint, UTween* CallFunc_ConstructTween_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, UExpandableArea* K2Node_ComponentBoundEvent_Area, bool K2Node_ComponentBoundEvent_bIsExpanded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/ExpandablePopouts/UI_BP_ExpandableToolTip.UI_BP_ExpandableToolTip_C.ExecuteUbergraph_UI_BP_ExpandableToolTip"));
    struct Params_ExecuteUbergraph_UI_BP_ExpandableToolTip {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UTween* CallFunc_ConstructTween_ReturnValue; // 0x8
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x10
        UExpandableArea* K2Node_ComponentBoundEvent_Area; // 0x20
        bool K2Node_ComponentBoundEvent_bIsExpanded; // 0x28
    }; // Size: 0x29
    Params_ExecuteUbergraph_UI_BP_ExpandableToolTip params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_ConstructTween_ReturnValue = (UTween*)CallFunc_ConstructTween_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.K2Node_ComponentBoundEvent_Area = (UExpandableArea*)K2Node_ComponentBoundEvent_Area;
    params.K2Node_ComponentBoundEvent_bIsExpanded = (bool)K2Node_ComponentBoundEvent_bIsExpanded;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
