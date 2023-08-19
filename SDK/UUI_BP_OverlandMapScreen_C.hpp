#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EMapFadeState.hpp"
#include "EMapToolTipTypes.hpp"
#include "ERegionType.hpp"
#include "EUMGInputAction.hpp"
#include "FKey.hpp"
#include "FLegendItemData.hpp"
#include "FMapToolTipData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UOverlandMapScreen.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class UUI_BP_MapToolTip_C;
class UUI_BP_MapsButton_C;
class URetainerBox;
class UObject;
class UOverlay;
class UOverlaySlot;
class AUI_BP_MapRegion_C;
class UUIManager;
class UFieldGuideMenu;
class UMapBase;
class UMapSubSystem;
class UMapOverland;
class UMapIcon;
class UUserWidget;
class APhoenixMapRegion;
#pragma pack(push, 1)
class UUI_BP_OverlandMapScreen_C : public UOverlandMapScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4e0
    UWidgetAnimation* ShowRegionInfo; // 0x4e8
    UWidgetAnimation* HideMapTooltipRight; // 0x4f0
    UWidgetAnimation* ShowMapTooltipRight; // 0x4f8
    UWidgetAnimation* HideMapTooltipLeft; // 0x500
    UWidgetAnimation* ShowMapTooltipLeft; // 0x508
    UCanvasPanel* blurPanel; // 0x510
    UCanvasPanel* CanvasPanel_0; // 0x518
    UImage* Cover; // 0x520
    UUI_BP_MapsButton_C* HogsmeadeButton; // 0x528
    UUI_BP_MapsButton_C* HogwartsButton; // 0x530
    URetainerBox* IconRetainer; // 0x538
    UUI_BP_MapToolTip_C* mapToolTip; // 0x540
    UOverlay* tooltipOverlay; // 0x548
    TArray<FString> LegendArray; // 0x550
    bool areDungeonReqsShowing; // 0x560
    EMapToolTipTypes ToolTipType; // 0x561
    char pad_562[0x16];
    UObject* MapIconHover; // 0x578
    char pad_580[0x10];
    int32_t CurrentMenuIndex; // 0x590
    char pad_594[0x4];
    TArray<FString> LocationNames; // 0x598
    char pad_5a8[0x10];
    bool isNavBarAnimating; // 0x5b8
    bool DownLastFrame_LeftStick; // 0x5b9
    bool IsOverlandMode; // 0x5ba
    bool IsFilterShowing; // 0x5bb
    float ZoomTimer; // 0x5bc
    float ZoomVal; // 0x5c0
    char pad_5c4[0x4];
    UObject* MapIconModel; // 0x5c8
    FMapToolTipData ToolTipData; // 0x5d0
    bool isPopupShowing; // 0x788
    char pad_789[0x7];
    UWidgetAnimation* TooltipIntroAnimation; // 0x790
    UWidgetAnimation* TooltipOutroAnimation; // 0x798
    bool isRegionInfoShowing; // 0x7a0
    char pad_7a1[0x7];
    static UUI_BP_OverlandMapScreen_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void AdjustTooltipForViewportWidth(float IdealWidth, float CurrentRatio, float CurrentWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, float K2Node_MathExpression_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, FVector2D CallFunc_GetViewportSize_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1);
    void MenuReadLegend(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetTooltipAnimations(float CursorX, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void Set_Map_Legend();
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, UMapBase* CallFunc_GetMapBase_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, UMapOverland* CallFunc_GetOverlandMap_ReturnValue, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue, FString CallFunc_GetBeaconDescShort_ReturnValue, bool CallFunc_CanGoToMissionLogFromIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, UMapOverland* CallFunc_GetOverlandMap_ReturnValue_1, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_1, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_1, UUIManager* CallFunc_Get_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_1, UMapOverland* CallFunc_GetOverlandMap_ReturnValue_2, UUIManager* CallFunc_Get_ReturnValue_1, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_2, bool CallFunc_GetIsMouseDragging_ReturnValue, UMapOverland* CallFunc_GetOverlandMap_ReturnValue_3, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_2, FString CallFunc_GetBeaconFastTravelLocationID_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_IsFTPointValidPreFIG01b_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_GetUsingGamePad_ReturnValue, UMapBase* CallFunc_GetMapBase_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, EMapFadeState CallFunc_GetMapFadeState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, UUIManager* CallFunc_Get_ReturnValue_2, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_3, UMapOverland* CallFunc_GetOverlandMap_ReturnValue_4, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_3, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetBeaconName_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13);
    void Activate_Map_Based_On_Hover(bool& Activated, UUIManager* CallFunc_Get_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, UMapOverland* CallFunc_GetOverlandMap_ReturnValue, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
    void SetFieldGuideLegend(TArray<FLegendItemData>& LegendItems, UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void TierHide(AUI_BP_MapRegion_C* Region, bool Visible);
    void SetLegend(TArray<FLegendItemData>& LegendStrings);
    void SetCoverVisibilityAlpha_Event(float Alpha);
    void Destruct();
    void OnHovered_Event(FMapToolTipData ToolTipData);
    void SetTipLegend_Event();
    void MapChanged_Event();
    void ExitMapScreen_Event();
    void BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature();
    void BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_0_OnMapsButtonSelected__DelegateSignature();
    void ShowHogwartsMissionsAvailable();
    void ShowHogsmeadeMissionsAvailable();
    void RegionHovered_Event(ERegionType MapRegion, int32_t RegionIndex, UUserWidget* IconWidget);
    void MapMove_Event();
    void ZoomInPressed_Event();
    void ZoomInReleased_Event();
    void ZoomOutPressed_Event();
    void ZoomOutReleased_Event();
    void DisableHogwartsButton();
    void DisableHogsmeadeButton();
    void OnUpdateToolTip_Event(FMapToolTipData ToolTipData);
    void BndEvt__UI_BP_OverlandMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature();
    void BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature();
    void WayPointSet_Event();
    void WayPointUnset_Event();
    void RegionInfoUpdated_Event();
    void SetLevelName_Event(FString LevelName);
    void OnUnhovered_Event();
    void SetCoverVisibility_Event(bool Enable);
    void TierChanged_Event();
    void Initialize();
    void RegionChange_Event0(APhoenixMapRegion* regionActor, APhoenixMapRegion* subregionActor, bool noString);
    void Construct();
    void SetParent(UUserWidget* Parent);
    void MapStop_Event();
    void MapStart_Event();
    void InEditorPostConstruct();
    void ExecuteUbergraph_UI_BP_OverlandMapScreen(int32_t EntryPoint, float K2Node_Event_Alpha, TArray<FLegendItemData>& K2Node_Event_LegendStrings, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, FMapToolTipData K2Node_Event_ToolTipData_1);
    void OnMenuItemChanged__DelegateSignature(int32_t ItemIndex);
    void OnMapInput__DelegateSignature(FKey Key);
    void UpdateMapLegend__DelegateSignature(TArray<FString>& LegendArray);
}; // Size: 0x7a8
#pragma pack(pop)
