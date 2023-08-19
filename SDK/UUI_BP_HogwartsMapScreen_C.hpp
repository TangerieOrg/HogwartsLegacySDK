#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EMapFadeState.hpp"
#include "EMapToolTipTypes.hpp"
#include "EUMGInputAction.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FMapToolTipData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UHogwartsMapScreen.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class UUI_BP_MapToolTip_C;
class UUI_BP_MapsButton_C;
class URetainerBox;
class UObject;
class UOverlay;
class UMapHogwarts;
class UOverlaySlot;
class UUIManager;
class UTutorialSystem;
class UFieldGuideMenu;
class UUI_BP_FieldGuide_C;
class UFastTravelManager;
class UMapBase;
class UMapSubSystem;
class UMapIcon;
class UUserWidget;
class UUI_BP_FastTravelButton_C;
#pragma pack(push, 1)
class UUI_BP_HogwartsMapScreen_C : public UHogwartsMapScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x560
    UWidgetAnimation* HideMapTooltipRight; // 0x568
    UWidgetAnimation* ShowMapTooltipRight; // 0x570
    UWidgetAnimation* HideMapTooltipLeft; // 0x578
    UWidgetAnimation* ShowMapTooltipLeft; // 0x580
    UCanvasPanel* blurPanel; // 0x588
    UImage* Cover; // 0x590
    UUI_BP_MapsButton_C* HogsmeadeButton; // 0x598
    URetainerBox* IconRetainer; // 0x5a0
    UUI_BP_MapToolTip_C* mapToolTip; // 0x5a8
    UUI_BP_MapsButton_C* OverlandButton; // 0x5b0
    UOverlay* ratioOverlay; // 0x5b8
    char pad_5c0[0x10];
    UObject* Response; // 0x5d0
    EMapToolTipTypes ToolTipType; // 0x5d8
    char pad_5d9[0x7];
    UObject* MapIconModel; // 0x5e0
    bool MapMissionTrackingTutorialActive; // 0x5e8
    char pad_5e9[0x7];
    FMapToolTipData ToolTipData; // 0x5f0
    UWidgetAnimation* TooltipIntroAnimation; // 0x7a8
    UWidgetAnimation* TooltipOutroAnimation; // 0x7b0
    FHermesBPDelegateHandle OverlandButtonHighlightHandle; // 0x7b8
    bool IsIconHovered; // 0x7c8
    char pad_7c9[0x7];
    static UUI_BP_HogwartsMapScreen_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void AdjustForViewportWidth(float IdealWidth, float IdealRatio, float CurrentRatio, float CurrentWidth, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_3, bool CallFunc_Greater_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_4, FMargin K2Node_MakeStruct_Margin_5, float K2Node_MathExpression_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1);
    void CloseMapAndGuide(UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, UUI_BP_FieldGuide_C* K2Node_DynamicCast_AsUI_BP_Field_Guide, bool K2Node_DynamicCast_bSuccess);
    void MenuReadLegend(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetTooltipAnimations(float CursorX);
    void SetButtonPrompt(TArray<FLegendItemData>& Legends, UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, UMapBase* CallFunc_GetMapBase_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActive_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsTutorialActive_ReturnValue_1, bool CallFunc_IsTutorialActive_ReturnValue_2, bool CallFunc_IsTutorialActive_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UTutorialSystem* CallFunc_Get_ReturnValue_1, bool CallFunc_CompleteTutorialStepByAlias_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UMapHogwarts* CallFunc_GetHogwartsMap_ReturnValue, UUIManager* CallFunc_Get_ReturnValue_2, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, FString CallFunc_GetBeaconDescShort_ReturnValue, UMapHogwarts* CallFunc_GetHogwartsMap_ReturnValue_1, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_1, bool CallFunc_GetIsMouseDragging_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanGoToMissionLogFromIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, UFastTravelManager* CallFunc_Get_ReturnValue_3, bool CallFunc_IsFastTravelTutorialActive_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, UMapBase* CallFunc_GetMapBase_ReturnValue_1, EMapFadeState CallFunc_GetMapFadeState_ReturnValue, UMapBase* CallFunc_GetMapBase_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, UMapHogwarts* K2Node_DynamicCast_AsMap_Hogwarts, bool K2Node_DynamicCast_bSuccess, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10);
    void OnMapClicked();
    void SetCoverVisibility_Event(bool Enable);
    void OnUnhovered_Event();
    void SetLegend(TArray<FLegendItemData>& LegendStrings);
    void SetCoverVisibilityAlpha_Event(float Alpha);
    void HogwartsSelect_Event0();
    void HogwartsBack_Event0();
    void HogwartsFastTravel_Event0();
    void HogwartsSetPath_Event0();
    void Destruct();
    void OnHovered_Event(FMapToolTipData ToolTipData);
    void SetTipLegend_Event();
    void MapChanged_Event();
    void ExitMapScreen_Event();
    void ShowOverlandMissionsAvailable();
    void Initialize();
    void ShowHogsmeadeMissionsAvailable();
    void TutorialSaysStopHighlightOverland(UObject* Caller);
    void SetupOverlandTutorial();
    void InEditorPostConstruct();
    void ShowHogsmeadeButton0();
    void HideHogsmeadeButton0();
    void ShowOverlandButton0();
    void HideOverlandButton0();
    void MapMove_Event();
    void ZoomInPressed_Event();
    void ZoomInReleased_Event();
    void ZoomOutPressed_Event();
    void ZoomOutReleased_Event();
    void SetParent(UUserWidget* Parent);
    void DisableHogsmeadeButton();
    void DisableOverlandButton();
    void OnUpdateToolTip_Event(FMapToolTipData ToolTipData);
    void WayPointSet_Event();
    void WayPointUnset_Event();
    void Construct();
    void BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature();
    void BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature();
    void MapStart_Event();
    void BndEvt__UI_BP_HogwartsMapScreen_FastTravelList_K2Node_ComponentBoundEvent_4_OnFastTravelButtonHovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button);
    void TierChanged_Event();
    void BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature();
    void BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_1_OnMapsButtonSelected__DelegateSignature();
    void ExecuteUbergraph_UI_BP_HogwartsMapScreen(int32_t EntryPoint);
    void OnMenuItemChanged__DelegateSignature(int32_t ItemIndex);
}; // Size: 0x7d0
#pragma pack(pop)
