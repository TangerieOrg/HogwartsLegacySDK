#include "FGeometry.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UEditableTextBox.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UMenuCursorWidget.hpp"
#include "UObject.hpp"
#include "UUI_BP_BaseCursor_C.hpp"
#include "UUI_BP_ExpandableToolTip_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_BaseCursor_C::I_setTooltipTitle(FString NewTitle, bool Translatable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_setTooltipTitle"));
    struct Params_I_setTooltipTitle {
        FString NewTitle; // 0x0
        bool Translatable; // 0x10
    }; // Size: 0x11
    Params_I_setTooltipTitle params{};
    params.NewTitle = (FString)NewTitle;
    params.Translatable = (bool)Translatable;
    ProcessEvent(func, &params);
}
UUI_BP_BaseCursor_C* UUI_BP_BaseCursor_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C");
    return (UUI_BP_BaseCursor_C*)res;
}
void UUI_BP_BaseCursor_C::I_AddNonExpandableContent(UUserWidget* NewContent, bool ClearExistingContent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_AddNonExpandableContent"));
    struct Params_I_AddNonExpandableContent {
        UUserWidget* NewContent; // 0x0
        bool ClearExistingContent; // 0x8
    }; // Size: 0x9
    Params_I_AddNonExpandableContent params{};
    params.NewContent = (UUserWidget*)NewContent;
    params.ClearExistingContent = (bool)ClearExistingContent;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_GetTooltipLegendItem(int32_t LegendItemIndex, ULegendItem*& LegendItem, ULegendItem* CallFunc_GetTooltipLegendItem_LegendItem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_GetTooltipLegendItem"));
    struct Params_I_GetTooltipLegendItem {
        int32_t LegendItemIndex; // 0x0
        char pad_4[0x4];
        ULegendItem* LegendItem; // 0x8
        ULegendItem* CallFunc_GetTooltipLegendItem_LegendItem; // 0x10
    }; // Size: 0x18
    Params_I_GetTooltipLegendItem params{};
    params.LegendItemIndex = (int32_t)LegendItemIndex;
    params.LegendItem = (ULegendItem*)LegendItem;
    params.CallFunc_GetTooltipLegendItem_LegendItem = (ULegendItem*)CallFunc_GetTooltipLegendItem_LegendItem;
    ProcessEvent(func, &params);
    LegendItem = params.LegendItem;
}
void UUI_BP_BaseCursor_C::FromSpellMinigameCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.FromSpellMinigameCursor"));
    struct Params_FromSpellMinigameCursor {
    }; // Size: 0x0
    Params_FromSpellMinigameCursor params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_IsTooltipShowing(bool& IsShowing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_IsTooltipShowing"));
    struct Params_I_IsTooltipShowing {
        bool IsShowing; // 0x0
    }; // Size: 0x1
    Params_I_IsTooltipShowing params{};
    params.IsShowing = (bool)IsShowing;
    ProcessEvent(func, &params);
    IsShowing = params.IsShowing;
}
void UUI_BP_BaseCursor_C::SequenceEvent__ENTRYPOINTUI_BP_BaseCursor_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.SequenceEvent__ENTRYPOINTUI_BP_BaseCursor_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BaseCursor_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BaseCursor_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::FadeIn(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.FadeIn"));
    struct Params_FadeIn {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_FadeIn params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_ShowCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_ShowCursor"));
    struct Params_I_ShowCursor {
    }; // Size: 0x0
    Params_I_ShowCursor params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::ViewportSizeChange(UObject* Caller, int32_t Int1, int32_t Int2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.ViewportSizeChange"));
    struct Params_ViewportSizeChange {
        UObject* Caller; // 0x0
        int32_t Int1; // 0x8
        int32_t Int2; // 0xc
    }; // Size: 0x10
    Params_ViewportSizeChange params{};
    params.Caller = (UObject*)Caller;
    params.Int1 = (int32_t)Int1;
    params.Int2 = (int32_t)Int2;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::FadeOut(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.FadeOut"));
    struct Params_FadeOut {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_FadeOut params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::ToSpellMinigameCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.ToSpellMinigameCursor"));
    struct Params_ToSpellMinigameCursor {
    }; // Size: 0x0
    Params_ToSpellMinigameCursor params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::ShowCursor(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.ShowCursor"));
    struct Params_ShowCursor {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_ShowCursor params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::RepositionTooltip(FGeometry MyGeo, float DesiredUpperBound, FVector2D ViewportSize, float YAlignment, float XAlignment, float YOffset, float XOffset, FVector2D MyPos, float CallFunc_GetViewportScale_ReturnValue, float CallFunc_GetViewportScale_ReturnValue_1, float CallFunc_GetViewportScale_ReturnValue_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float K2Node_MathExpression_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, FGeometry CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, FVector2D CallFunc_GetLocalSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float K2Node_MathExpression_ReturnValue_1, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float K2Node_MathExpression_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_MathExpression_ReturnValue_3, FGeometry CallFunc_GetViewportWidgetGeometry_ReturnValue, FVector2D CallFunc_GetLocalSize_ReturnValue_1, FGeometry CallFunc_GetCachedGeometry_ReturnValue_1, FVector2D CallFunc_GetLocalSize_ReturnValue_2, FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_LocalToViewport_PixelPosition, FVector2D CallFunc_LocalToViewport_ViewportPosition, float CallFunc_GetViewportScale_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_8, float CallFunc_BreakVector2D_Y_8, float CallFunc_BreakVector2D_X_9, float CallFunc_BreakVector2D_Y_9, float CallFunc_Multiply_FloatFloat_ReturnValue_4, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X_10, float CallFunc_BreakVector2D_Y_10, bool CallFunc_Greater_FloatFloat_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.RepositionTooltip"));
    struct Params_RepositionTooltip {
        FGeometry MyGeo; // 0x0
        float DesiredUpperBound; // 0x38
        FVector2D ViewportSize; // 0x3c
        float YAlignment; // 0x44
        float XAlignment; // 0x48
        float YOffset; // 0x4c
        float XOffset; // 0x50
        FVector2D MyPos; // 0x54
        float CallFunc_GetViewportScale_ReturnValue; // 0x5c
        float CallFunc_GetViewportScale_ReturnValue_1; // 0x60
        float CallFunc_GetViewportScale_ReturnValue_2; // 0x64
        float CallFunc_BreakVector2D_X; // 0x68
        float CallFunc_BreakVector2D_Y; // 0x6c
        float K2Node_MathExpression_ReturnValue; // 0x70
        float CallFunc_BreakVector2D_X_1; // 0x74
        float CallFunc_BreakVector2D_Y_1; // 0x78
        FGeometry CallFunc_GetCachedGeometry_ReturnValue; // 0x7c
        float CallFunc_BreakVector2D_X_2; // 0xb4
        float CallFunc_BreakVector2D_Y_2; // 0xb8
        FVector2D CallFunc_GetLocalSize_ReturnValue; // 0xbc
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xc4
        float CallFunc_BreakVector2D_X_3; // 0xc8
        float CallFunc_BreakVector2D_Y_3; // 0xcc
        float K2Node_MathExpression_ReturnValue_1; // 0xd0
        float CallFunc_BreakVector2D_X_4; // 0xd4
        float CallFunc_BreakVector2D_Y_4; // 0xd8
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0xdc
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0xe0
        float K2Node_MathExpression_ReturnValue_2; // 0xe4
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0xe8
        char pad_e9[0x3];
        float K2Node_MathExpression_ReturnValue_3; // 0xec
        FGeometry CallFunc_GetViewportWidgetGeometry_ReturnValue; // 0xf0
        FVector2D CallFunc_GetLocalSize_ReturnValue_1; // 0x128
        FGeometry CallFunc_GetCachedGeometry_ReturnValue_1; // 0x130
        FVector2D CallFunc_GetLocalSize_ReturnValue_2; // 0x168
        FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue; // 0x170
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x178
        FVector2D CallFunc_LocalToViewport_PixelPosition; // 0x180
        FVector2D CallFunc_LocalToViewport_ViewportPosition; // 0x188
        float CallFunc_GetViewportScale_ReturnValue_3; // 0x190
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x194
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x19c
        char pad_19d[0x3];
        FVector2D CallFunc_MakeVector2D_ReturnValue_2; // 0x1a0
        FVector2D CallFunc_MakeVector2D_ReturnValue_3; // 0x1a8
        float CallFunc_BreakVector2D_X_5; // 0x1b0
        float CallFunc_BreakVector2D_Y_5; // 0x1b4
        float CallFunc_BreakVector2D_X_6; // 0x1b8
        float CallFunc_BreakVector2D_Y_6; // 0x1bc
        float CallFunc_Multiply_FloatFloat_ReturnValue_3; // 0x1c0
        float CallFunc_BreakVector2D_X_7; // 0x1c4
        float CallFunc_BreakVector2D_Y_7; // 0x1c8
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0x1cc
        char pad_1cd[0x3];
        float CallFunc_BreakVector2D_X_8; // 0x1d0
        float CallFunc_BreakVector2D_Y_8; // 0x1d4
        float CallFunc_BreakVector2D_X_9; // 0x1d8
        float CallFunc_BreakVector2D_Y_9; // 0x1dc
        float CallFunc_Multiply_FloatFloat_ReturnValue_4; // 0x1e0
        char pad_1e4[0x4];
        UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot; // 0x1e8
        bool K2Node_DynamicCast_bSuccess; // 0x1f0
        char pad_1f1[0x3];
        float CallFunc_BreakVector2D_X_10; // 0x1f4
        float CallFunc_BreakVector2D_Y_10; // 0x1f8
        bool CallFunc_Greater_FloatFloat_ReturnValue_2; // 0x1fc
    }; // Size: 0x1fd
    Params_RepositionTooltip params{};
    params.MyGeo = (FGeometry)MyGeo;
    params.DesiredUpperBound = (float)DesiredUpperBound;
    params.ViewportSize = (FVector2D)ViewportSize;
    params.YAlignment = (float)YAlignment;
    params.XAlignment = (float)XAlignment;
    params.YOffset = (float)YOffset;
    params.XOffset = (float)XOffset;
    params.MyPos = (FVector2D)MyPos;
    params.CallFunc_GetViewportScale_ReturnValue = (float)CallFunc_GetViewportScale_ReturnValue;
    params.CallFunc_GetViewportScale_ReturnValue_1 = (float)CallFunc_GetViewportScale_ReturnValue_1;
    params.CallFunc_GetViewportScale_ReturnValue_2 = (float)CallFunc_GetViewportScale_ReturnValue_2;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_BreakVector2D_X_1 = (float)CallFunc_BreakVector2D_X_1;
    params.CallFunc_BreakVector2D_Y_1 = (float)CallFunc_BreakVector2D_Y_1;
    params.CallFunc_GetCachedGeometry_ReturnValue = (FGeometry)CallFunc_GetCachedGeometry_ReturnValue;
    params.CallFunc_BreakVector2D_X_2 = (float)CallFunc_BreakVector2D_X_2;
    params.CallFunc_BreakVector2D_Y_2 = (float)CallFunc_BreakVector2D_Y_2;
    params.CallFunc_GetLocalSize_ReturnValue = (FVector2D)CallFunc_GetLocalSize_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_BreakVector2D_X_3 = (float)CallFunc_BreakVector2D_X_3;
    params.CallFunc_BreakVector2D_Y_3 = (float)CallFunc_BreakVector2D_Y_3;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_BreakVector2D_X_4 = (float)CallFunc_BreakVector2D_X_4;
    params.CallFunc_BreakVector2D_Y_4 = (float)CallFunc_BreakVector2D_Y_4;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.K2Node_MathExpression_ReturnValue_2 = (float)K2Node_MathExpression_ReturnValue_2;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_3 = (float)K2Node_MathExpression_ReturnValue_3;
    params.CallFunc_GetViewportWidgetGeometry_ReturnValue = (FGeometry)CallFunc_GetViewportWidgetGeometry_ReturnValue;
    params.CallFunc_GetLocalSize_ReturnValue_1 = (FVector2D)CallFunc_GetLocalSize_ReturnValue_1;
    params.CallFunc_GetCachedGeometry_ReturnValue_1 = (FGeometry)CallFunc_GetCachedGeometry_ReturnValue_1;
    params.CallFunc_GetLocalSize_ReturnValue_2 = (FVector2D)CallFunc_GetLocalSize_ReturnValue_2;
    params.CallFunc_Divide_Vector2DFloat_ReturnValue = (FVector2D)CallFunc_Divide_Vector2DFloat_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.CallFunc_LocalToViewport_PixelPosition = (FVector2D)CallFunc_LocalToViewport_PixelPosition;
    params.CallFunc_LocalToViewport_ViewportPosition = (FVector2D)CallFunc_LocalToViewport_ViewportPosition;
    params.CallFunc_GetViewportScale_ReturnValue_3 = (float)CallFunc_GetViewportScale_ReturnValue_3;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue_2 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_2;
    params.CallFunc_MakeVector2D_ReturnValue_3 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_3;
    params.CallFunc_BreakVector2D_X_5 = (float)CallFunc_BreakVector2D_X_5;
    params.CallFunc_BreakVector2D_Y_5 = (float)CallFunc_BreakVector2D_Y_5;
    params.CallFunc_BreakVector2D_X_6 = (float)CallFunc_BreakVector2D_X_6;
    params.CallFunc_BreakVector2D_Y_6 = (float)CallFunc_BreakVector2D_Y_6;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_3 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_3;
    params.CallFunc_BreakVector2D_X_7 = (float)CallFunc_BreakVector2D_X_7;
    params.CallFunc_BreakVector2D_Y_7 = (float)CallFunc_BreakVector2D_Y_7;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_BreakVector2D_X_8 = (float)CallFunc_BreakVector2D_X_8;
    params.CallFunc_BreakVector2D_Y_8 = (float)CallFunc_BreakVector2D_Y_8;
    params.CallFunc_BreakVector2D_X_9 = (float)CallFunc_BreakVector2D_X_9;
    params.CallFunc_BreakVector2D_Y_9 = (float)CallFunc_BreakVector2D_Y_9;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_4 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_4;
    params.K2Node_DynamicCast_AsCanvas_Panel_Slot = (UCanvasPanelSlot*)K2Node_DynamicCast_AsCanvas_Panel_Slot;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_BreakVector2D_X_10 = (float)CallFunc_BreakVector2D_X_10;
    params.CallFunc_BreakVector2D_Y_10 = (float)CallFunc_BreakVector2D_Y_10;
    params.CallFunc_Greater_FloatFloat_ReturnValue_2 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::ShowTooltip(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.ShowTooltip"));
    struct Params_ShowTooltip {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_ShowTooltip params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::SelectGlowFinished_ScaleUp() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.SelectGlowFinished_ScaleUp"));
    struct Params_SelectGlowFinished_ScaleUp {
    }; // Size: 0x0
    Params_SelectGlowFinished_ScaleUp params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::Scale(float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.Scale"));
    struct Params_Scale {
        float CallFunc_PauseAnimation_ReturnValue; // 0x0
        float CallFunc_PauseAnimation_ReturnValue_1; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x10
    }; // Size: 0x18
    Params_Scale params{};
    params.CallFunc_PauseAnimation_ReturnValue = (float)CallFunc_PauseAnimation_ReturnValue;
    params.CallFunc_PauseAnimation_ReturnValue_1 = (float)CallFunc_PauseAnimation_ReturnValue_1;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::CursorScaleDown(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.CursorScaleDown"));
    struct Params_CursorScaleDown {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CursorScaleDown params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_SetTooltipInfo(FString Title, bool TitleTranslatable, FString Description, bool DescriptionTranslatable, FString Quality) {}
void UUI_BP_BaseCursor_C::CursorShow(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.CursorShow"));
    struct Params_CursorShow {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CursorShow params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::CursorHide(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.CursorHide"));
    struct Params_CursorHide {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CursorHide params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_ShowTooltipProgressBar(bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_ShowTooltipProgressBar"));
    struct Params_I_ShowTooltipProgressBar {
        bool ShouldShow; // 0x0
    }; // Size: 0x1
    Params_I_ShowTooltipProgressBar params{};
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_HideTooltip() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_HideTooltip"));
    struct Params_I_HideTooltip {
    }; // Size: 0x0
    Params_I_HideTooltip params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_SetTooltipProgressPercent(float Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_SetTooltipProgressPercent"));
    struct Params_I_SetTooltipProgressPercent {
        float Percent; // 0x0
    }; // Size: 0x4
    Params_I_SetTooltipProgressPercent params{};
    params.Percent = (float)Percent;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_ShowTooltip() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_ShowTooltip"));
    struct Params_I_ShowTooltip {
    }; // Size: 0x0
    Params_I_ShowTooltip params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_SetTooltipLegend() {}
void UUI_BP_BaseCursor_C::I_SetTooltipItemName(FString Title) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_SetTooltipItemName"));
    struct Params_I_SetTooltipItemName {
        FString Title; // 0x0
    }; // Size: 0x10
    Params_I_SetTooltipItemName params{};
    params.Title = (FString)Title;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_ToggleRTInfoCallout(bool ShowCallout) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_ToggleRTInfoCallout"));
    struct Params_I_ToggleRTInfoCallout {
        bool ShowCallout; // 0x0
    }; // Size: 0x1
    Params_I_ToggleRTInfoCallout params{};
    params.ShowCallout = (bool)ShowCallout;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_SetTooltipLegendData(TArray<FLegendItemData>& LegendData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_SetTooltipLegendData"));
    struct Params_I_SetTooltipLegendData {
        TArray<FLegendItemData> LegendData; // 0x0
    }; // Size: 0x10
    Params_I_SetTooltipLegendData params{};
    params.LegendData = (TArray<FLegendItemData>)LegendData;
    ProcessEvent(func, &params);
    LegendData = params.LegendData;
}
void UUI_BP_BaseCursor_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::OnScaleCursor0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.OnScaleCursor"));
    struct Params_OnScaleCursor {
    }; // Size: 0x0
    Params_OnScaleCursor params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::CursorScaleUp(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.CursorScaleUp"));
    struct Params_CursorScaleUp {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CursorScaleUp params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::SetTooltipExpandState0(bool IsExpanded, bool ShouldAnimate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.SetTooltipExpandState"));
    struct Params_SetTooltipExpandState {
        bool IsExpanded; // 0x0
        bool ShouldAnimate; // 0x1
    }; // Size: 0x2
    Params_SetTooltipExpandState params{};
    params.IsExpanded = (bool)IsExpanded;
    params.ShouldAnimate = (bool)ShouldAnimate;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::SpellMiniGameStart(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.SpellMiniGameStart"));
    struct Params_SpellMiniGameStart {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_SpellMiniGameStart params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::SpellComplete(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.SpellComplete"));
    struct Params_SpellComplete {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_SpellComplete params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::I_HideCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.I_HideCursor"));
    struct Params_I_HideCursor {
    }; // Size: 0x0
    Params_I_HideCursor params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::GlowEnd_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.GlowEnd Event"));
    struct Params_GlowEnd_Event {
    }; // Size: 0x0
    Params_GlowEnd_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::SelectAnim(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.SelectAnim"));
    struct Params_SelectAnim {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_SelectAnim params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::Cursor_FadeIn0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.Cursor_FadeIn"));
    struct Params_Cursor_FadeIn {
    }; // Size: 0x0
    Params_Cursor_FadeIn params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::Cursor_FadeOut0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.Cursor_FadeOut"));
    struct Params_Cursor_FadeOut {
    }; // Size: 0x0
    Params_Cursor_FadeOut params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::SelectGlowFinished_ScaleDown() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/MenuCursor/UI_BP_BaseCursor.UI_BP_BaseCursor_C.SelectGlowFinished_ScaleDown"));
    struct Params_SelectGlowFinished_ScaleDown {
    }; // Size: 0x0
    Params_SelectGlowFinished_ScaleDown params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BaseCursor_C::ExecuteUbergraph_UI_BP_BaseCursor(int32_t EntryPoint, FString K2Node_Event_Title_1, bool K2Node_Event_TitleTranslatable, FString K2Node_Event_Description, bool K2Node_Event_DescriptionTranslatable, FString K2Node_Event_Quality) {}
