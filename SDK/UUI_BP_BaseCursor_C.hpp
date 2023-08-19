#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UMenuCursorWidget.hpp"
class UUMGSequencePlayer;
class UCanvasPanel;
class UWidgetAnimation;
class UUI_BP_ExpandableToolTip_C;
class UImage;
class UEditableTextBox;
class ULegendItem;
class UCanvasPanelSlot;
class UUserWidget;
class UObject;
#pragma pack(push, 1)
class UUI_BP_BaseCursor_C : public UMenuCursorWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x278
    UWidgetAnimation* FadeAnim; // 0x280
    UWidgetAnimation* SelectGlow; // 0x288
    UWidgetAnimation* scaleOut; // 0x290
    UWidgetAnimation* ScaleIn; // 0x298
    UImage* BackLightOrbs; // 0x2a0
    UCanvasPanel* Container; // 0x2a8
    UCanvasPanel* CursorPanel; // 0x2b0
    UImage* innerCircleSpellMinigame; // 0x2b8
    UImage* innerPattern; // 0x2c0
    UEditableTextBox* ItemCount; // 0x2c8
    UImage* MouseCursorRings_1; // 0x2d0
    UImage* overlaySelectGlow; // 0x2d8
    UImage* overlaySpellMinigame; // 0x2e0
    UImage* overlayStarGlow; // 0x2e8
    UUI_BP_ExpandableToolTip_C* ToolTip; // 0x2f0
    float AnimTime; // 0x2f8
    bool TooltipShown; // 0x2fc
    char pad_2fd[0x3];
    FVector2D TooltipOffset; // 0x300
    float RelativeSize; // 0x308
    float Playback_Speed; // 0x30c
    static UUI_BP_BaseCursor_C* StaticClass();
    void I_GetTooltipLegendItem(int32_t LegendItemIndex, ULegendItem*& LegendItem, ULegendItem* CallFunc_GetTooltipLegendItem_LegendItem);
    void I_IsTooltipShowing(bool& IsShowing);
    void SequenceEvent__ENTRYPOINTUI_BP_BaseCursor_0();
    void FadeOut(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void FadeIn(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void FromSpellMinigameCursor();
    void ToSpellMinigameCursor();
    void ShowCursor(bool ShouldShow);
    void RepositionTooltip(FGeometry MyGeo, float DesiredUpperBound, FVector2D ViewportSize, float YAlignment, float XAlignment, float YOffset, float XOffset, FVector2D MyPos, float CallFunc_GetViewportScale_ReturnValue, float CallFunc_GetViewportScale_ReturnValue_1, float CallFunc_GetViewportScale_ReturnValue_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float K2Node_MathExpression_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, FGeometry CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, FVector2D CallFunc_GetLocalSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float K2Node_MathExpression_ReturnValue_1, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float K2Node_MathExpression_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_MathExpression_ReturnValue_3, FGeometry CallFunc_GetViewportWidgetGeometry_ReturnValue, FVector2D CallFunc_GetLocalSize_ReturnValue_1, FGeometry CallFunc_GetCachedGeometry_ReturnValue_1, FVector2D CallFunc_GetLocalSize_ReturnValue_2, FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_LocalToViewport_PixelPosition, FVector2D CallFunc_LocalToViewport_ViewportPosition, float CallFunc_GetViewportScale_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_8, float CallFunc_BreakVector2D_Y_8, float CallFunc_BreakVector2D_X_9, float CallFunc_BreakVector2D_Y_9, float CallFunc_Multiply_FloatFloat_ReturnValue_4, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X_10, float CallFunc_BreakVector2D_Y_10, bool CallFunc_Greater_FloatFloat_ReturnValue_2);
    void ShowTooltip(bool ShouldShow);
    void Scale(float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void I_SetTooltipInfo(FString Title, bool TitleTranslatable, FString Description, bool DescriptionTranslatable, FString Quality);
    void I_setTooltipTitle(FString NewTitle, bool Translatable);
    void I_ShowTooltipProgressBar(bool ShouldShow);
    void I_SetTooltipProgressPercent(float Percent);
    void I_SetTooltipLegend();
    void I_AddNonExpandableContent(UUserWidget* NewContent, bool ClearExistingContent);
    void I_SetTooltipItemName(FString Title);
    void I_ToggleRTInfoCallout(bool ShowCallout);
    void I_SetTooltipLegendData(TArray<FLegendItemData>& LegendData);
    void Construct();
    void OnScaleCursor0();
    void CursorScaleUp(UObject* Caller);
    void CursorScaleDown(UObject* Caller);
    void CursorHide(UObject* Caller);
    void CursorShow(UObject* Caller);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ViewportSizeChange(UObject* Caller, int32_t Int1, int32_t Int2);
    void SetTooltipExpandState0(bool IsExpanded, bool ShouldAnimate);
    void SpellMiniGameStart(UObject* Caller);
    void SpellComplete(UObject* Caller, int32_t int);
    void I_HideTooltip();
    void I_ShowTooltip();
    void I_HideCursor();
    void I_ShowCursor();
    void GlowEnd_Event();
    void SelectAnim(UObject* Caller);
    void Cursor_FadeIn0();
    void Cursor_FadeOut0();
    void WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1();
    void SelectGlowFinished_ScaleUp();
    void SelectGlowFinished_ScaleDown();
    void ExecuteUbergraph_UI_BP_BaseCursor(int32_t EntryPoint, FString K2Node_Event_Title_1, bool K2Node_Event_TitleTranslatable, FString K2Node_Event_Description, bool K2Node_Event_DescriptionTranslatable, FString K2Node_Event_Quality);
}; // Size: 0x310
#pragma pack(pop)
