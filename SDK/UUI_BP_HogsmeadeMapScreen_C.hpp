#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EMapFadeState.hpp"
#include "EMapToolTipTypes.hpp"
#include "EUMGInputAction.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FKey.hpp"
#include "FLegendItemData.hpp"
#include "FMapToolTipData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UHogsmeadeMapScreen.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class UUI_BP_MapToolTip_C;
class UUI_BP_MapsButton_C;
class URetainerBox;
class UObject;
class ULegendItem;
class UOverlaySlot;
class UUIManager;
class UFieldGuideMenu;
class UMapSubSystem;
class UMapHogsmeade;
class UMapIcon;
class UMapBase;
class UUI_BP_FieldGuide_C;
class UUserWidget;
#pragma pack(push, 1)
class UUI_BP_HogsmeadeMapScreen_C : public UHogsmeadeMapScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4e0
    UWidgetAnimation* HideMapTooltipRight; // 0x4e8
    UWidgetAnimation* ShowMapTooltipRight; // 0x4f0
    UWidgetAnimation* HideMapTooltipLeft; // 0x4f8
    UWidgetAnimation* ShowMapTooltipLeft; // 0x500
    UCanvasPanel* blurPanel; // 0x508
    UImage* Cover; // 0x510
    UUI_BP_MapsButton_C* HogwartsButton; // 0x518
    URetainerBox* IconRetainer; // 0x520
    UUI_BP_MapToolTip_C* mapToolTip; // 0x528
    UUI_BP_MapsButton_C* OverlandButton; // 0x530
    TArray<FString> LegendArray; // 0x538
    EMapToolTipTypes ToolTipType; // 0x548
    char pad_549[0x17];
    UObject* MapIconHover; // 0x560
    char pad_568[0x10];
    int32_t CurrentMenuIndex; // 0x578
    char pad_57c[0x14];
    float ZoomTimer; // 0x590
    float ZoomVal; // 0x594
    bool areDungeonReqsShowing; // 0x598
    char pad_599[0x7];
    ULegendItem* Travel; // 0x5a0
    ULegendItem* Map; // 0x5a8
    ULegendItem* Extra; // 0x5b0
    UObject* MapIconModel; // 0x5b8
    UWidgetAnimation* TooltipIntroAnimation; // 0x5c0
    UWidgetAnimation* TooltipOutroAnimation; // 0x5c8
    FHermesBPDelegateHandle HogwartsButtonHighlightHandle; // 0x5d0
    static UUI_BP_HogsmeadeMapScreen_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void AdjustForViewportWidth(float CurrentRatio, float CurrentWidth, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1);
    void MenuReadLegend(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetTooltipAnimations(float CursorX, bool CallFunc_Greater_FloatFloat_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, UMapHogsmeade* CallFunc_GetHogsmeadeMap_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue, UMapHogsmeade* CallFunc_GetHogsmeadeMap_ReturnValue_1, FString CallFunc_GetBeaconDescShort_ReturnValue, bool CallFunc_GetIsMouseDragging_ReturnValue, bool CallFunc_CanGoToMissionLogFromIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UUIManager* CallFunc_Get_ReturnValue_1, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, UMapHogsmeade* CallFunc_GetHogsmeadeMap_ReturnValue_2, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_1, UMapBase* CallFunc_GetMapBase_ReturnValue, FString CallFunc_GetBeaconFastTravelLocationID_ReturnValue, bool CallFunc_IsFTPointValidPreFIG01b_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_GetUsingGamePad_ReturnValue, UMapBase* CallFunc_GetMapBase_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, EMapFadeState CallFunc_GetMapFadeState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9);
    void SetButtonPrompt(TArray<FLegendItemData>& NewParam, UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, UUI_BP_FieldGuide_C* K2Node_DynamicCast_AsUI_BP_Field_Guide, bool K2Node_DynamicCast_bSuccess);
    void MapStart_Event();
    void MapStop_Event();
    void Construct();
    void SetCoverVisibility_Event(bool Enable);
    void OnUnhovered_Event();
    void SetLegend(TArray<FLegendItemData>& LegendStrings);
    void TierChanged_Event();
    void SetCoverVisibilityAlpha_Event(float Alpha);
    void Destruct();
    void SetTipLegend_Event();
    void BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_4_OnMapsButtonSelected__DelegateSignature();
    void BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_5_OnMapsButtonSelected__DelegateSignature();
    void OnHovered_Event(FMapToolTipData ToolTipData);
    void MapChanged_Event();
    void ExitMapScreen_Event();
    void SetParent(UUserWidget* Parent);
    void ShowHogwartsMissionsAvailable();
    void ShowOverlandMissionsAvailable();
    void InEditorPostConstruct();
    void MapMove_Event();
    void ZoomInPressed_Event();
    void ZoomInReleased_Event();
    void ZoomOutPressed_Event();
    void ZoomOutReleased_Event();
    void DisableOverlandButton();
    void DisableHogwartsButton();
    void OnUpdateToolTip_Event(FMapToolTipData ToolTipData);
    void WayPointSet_Event();
    void WayPointUnset_Event();
    void Initialize();
    void BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature();
    void BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature();
    void RegionInfoUpdated_Event();
    void TutorialSaysStopHighlightHogwarts(UObject* Caller);
    void SetupFastTravelTutorial();
    void ExecuteUbergraph_UI_BP_HogsmeadeMapScreen(int32_t EntryPoint, int32_t CallFunc_AddStateToStack_ReturnValue, bool K2Node_Event_Enable, TArray<FLegendItemData>& K2Node_Event_LegendStrings, float K2Node_Event_Alpha, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_1);
    void OnMenuItemChanged__DelegateSignature(int32_t ItemIndex);
    void OnMapInput__DelegateSignature(FKey Key);
    void UpdateMapLegend__DelegateSignature(TArray<FString>& NewParam);
}; // Size: 0x5e0
#pragma pack(pop)
