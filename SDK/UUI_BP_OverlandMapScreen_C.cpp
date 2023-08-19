#include "APhoenixMapRegion.hpp"
#include "AUI_BP_MapRegion_C.hpp"
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
#include "UCanvasPanel.hpp"
#include "UFieldGuideMenu.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMapBase.hpp"
#include "UMapIcon.hpp"
#include "UMapOverland.hpp"
#include "UMapSubSystem.hpp"
#include "UObject.hpp"
#include "UOverlandMapScreen.hpp"
#include "UOverlay.hpp"
#include "UOverlaySlot.hpp"
#include "URetainerBox.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_MapToolTip_C.hpp"
#include "UUI_BP_MapsButton_C.hpp"
#include "UUI_BP_OverlandMapScreen_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_OverlandMapScreen_C::WayPointSet_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.WayPointSet_Event"));
    struct Params_WayPointSet_Event {
    }; // Size: 0x0
    Params_WayPointSet_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::ZoomOutPressed_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ZoomOutPressed_Event"));
    struct Params_ZoomOutPressed_Event {
    }; // Size: 0x0
    Params_ZoomOutPressed_Event params{};
    ProcessEvent(func, &params);
}
UUI_BP_OverlandMapScreen_C* UUI_BP_OverlandMapScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C");
    return (UUI_BP_OverlandMapScreen_C*)res;
}
void UUI_BP_OverlandMapScreen_C::TierHide(AUI_BP_MapRegion_C* Region, bool Visible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.TierHide"));
    struct Params_TierHide {
        AUI_BP_MapRegion_C* Region; // 0x0
        bool Visible; // 0x8
    }; // Size: 0x9
    Params_TierHide params{};
    params.Region = (AUI_BP_MapRegion_C*)Region;
    params.Visible = (bool)Visible;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::MenuReadLegend(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MenuReadLegend"));
    struct Params_MenuReadLegend {
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x0
        UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_MenuReadLegend params{};
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetFieldGuideWidget_ReturnValue = (UFieldGuideMenu*)CallFunc_GetFieldGuideWidget_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
bool UUI_BP_OverlandMapScreen_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, UMapBase* CallFunc_GetMapBase_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, UMapOverland* CallFunc_GetOverlandMap_ReturnValue, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue, FString CallFunc_GetBeaconDescShort_ReturnValue, bool CallFunc_CanGoToMissionLogFromIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, UMapOverland* CallFunc_GetOverlandMap_ReturnValue_1, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_1, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_1, UUIManager* CallFunc_Get_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_1, UMapOverland* CallFunc_GetOverlandMap_ReturnValue_2, UUIManager* CallFunc_Get_ReturnValue_1, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_2, bool CallFunc_GetIsMouseDragging_ReturnValue, UMapOverland* CallFunc_GetOverlandMap_ReturnValue_3, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_2, FString CallFunc_GetBeaconFastTravelLocationID_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_IsFTPointValidPreFIG01b_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_GetUsingGamePad_ReturnValue, UMapBase* CallFunc_GetMapBase_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, EMapFadeState CallFunc_GetMapFadeState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, UUIManager* CallFunc_Get_ReturnValue_2, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_3, UMapOverland* CallFunc_GetOverlandMap_ReturnValue_4, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_3, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetBeaconName_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
        char pad_6[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xc
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x10
        char pad_11[0x7];
        UMapBase* CallFunc_GetMapBase_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x21
        bool CallFunc_BooleanOR_ReturnValue; // 0x22
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x23
        char pad_24[0x4];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue; // 0x28
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue; // 0x30
        UMapOverland* CallFunc_GetOverlandMap_ReturnValue; // 0x38
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue; // 0x40
        FString CallFunc_GetBeaconDescShort_ReturnValue; // 0x48
        bool CallFunc_CanGoToMissionLogFromIcon_ReturnValue; // 0x58
        bool CallFunc_IsValid_ReturnValue; // 0x59
        char pad_5a[0x6];
        UMapOverland* CallFunc_GetOverlandMap_ReturnValue_1; // 0x60
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_1; // 0x68
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1; // 0x70
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0x78
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0x79
        bool CallFunc_IsValid_ReturnValue_1; // 0x7a
        char pad_7b[0x5];
        UUIManager* CallFunc_Get_ReturnValue; // 0x80
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_1; // 0x88
        UMapOverland* CallFunc_GetOverlandMap_ReturnValue_2; // 0x90
        UUIManager* CallFunc_Get_ReturnValue_1; // 0x98
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_2; // 0xa0
        bool CallFunc_GetIsMouseDragging_ReturnValue; // 0xa8
        char pad_a9[0x7];
        UMapOverland* CallFunc_GetOverlandMap_ReturnValue_3; // 0xb0
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_2; // 0xb8
        FString CallFunc_GetBeaconFastTravelLocationID_ReturnValue; // 0xc0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_9; // 0xd0
        bool CallFunc_IsFTPointValidPreFIG01b_ReturnValue; // 0xd1
        bool CallFunc_IsValid_ReturnValue_2; // 0xd2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_10; // 0xd3
        char pad_d4[0x4];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2; // 0xd8
        bool CallFunc_GetUsingGamePad_ReturnValue; // 0xe0
        char pad_e1[0x7];
        UMapBase* CallFunc_GetMapBase_ReturnValue_1; // 0xe8
        bool CallFunc_BooleanAND_ReturnValue; // 0xf0
        EMapFadeState CallFunc_GetMapFadeState_ReturnValue; // 0xf1
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_11; // 0xf2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_12; // 0xf3
        char pad_f4[0x4];
        UUIManager* CallFunc_Get_ReturnValue_2; // 0xf8
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_3; // 0x100
        UMapOverland* CallFunc_GetOverlandMap_ReturnValue_4; // 0x108
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_3; // 0x110
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x118
        FString CallFunc_GetBeaconName_ReturnValue; // 0x120
        bool CallFunc_IsValid_ReturnValue_3; // 0x130
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_13; // 0x131
    }; // Size: 0x132
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_GetMapBase_ReturnValue = (UMapBase*)CallFunc_GetMapBase_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue;
    params.CallFunc_GetMapSubSystem_ReturnValue = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue;
    params.CallFunc_GetOverlandMap_ReturnValue = (UMapOverland*)CallFunc_GetOverlandMap_ReturnValue;
    params.CallFunc_GetHoveredIcon_ReturnValue = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue;
    params.CallFunc_GetBeaconDescShort_ReturnValue = (FString)CallFunc_GetBeaconDescShort_ReturnValue;
    params.CallFunc_CanGoToMissionLogFromIcon_ReturnValue = (bool)CallFunc_CanGoToMissionLogFromIcon_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetOverlandMap_ReturnValue_1 = (UMapOverland*)CallFunc_GetOverlandMap_ReturnValue_1;
    params.CallFunc_GetHoveredIcon_ReturnValue_1 = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue_1;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetMapSubSystem_ReturnValue_1 = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue_1;
    params.CallFunc_GetOverlandMap_ReturnValue_2 = (UMapOverland*)CallFunc_GetOverlandMap_ReturnValue_2;
    params.CallFunc_Get_ReturnValue_1 = (UUIManager*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_GetMapSubSystem_ReturnValue_2 = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue_2;
    params.CallFunc_GetIsMouseDragging_ReturnValue = (bool)CallFunc_GetIsMouseDragging_ReturnValue;
    params.CallFunc_GetOverlandMap_ReturnValue_3 = (UMapOverland*)CallFunc_GetOverlandMap_ReturnValue_3;
    params.CallFunc_GetHoveredIcon_ReturnValue_2 = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue_2;
    params.CallFunc_GetBeaconFastTravelLocationID_ReturnValue = (FString)CallFunc_GetBeaconFastTravelLocationID_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_9;
    params.CallFunc_IsFTPointValidPreFIG01b_ReturnValue = (bool)CallFunc_IsFTPointValidPreFIG01b_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_10;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
    params.CallFunc_GetUsingGamePad_ReturnValue = (bool)CallFunc_GetUsingGamePad_ReturnValue;
    params.CallFunc_GetMapBase_ReturnValue_1 = (UMapBase*)CallFunc_GetMapBase_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GetMapFadeState_ReturnValue = (EMapFadeState)CallFunc_GetMapFadeState_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_11 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_11;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_12 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_12;
    params.CallFunc_Get_ReturnValue_2 = (UUIManager*)CallFunc_Get_ReturnValue_2;
    params.CallFunc_GetMapSubSystem_ReturnValue_3 = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue_3;
    params.CallFunc_GetOverlandMap_ReturnValue_4 = (UMapOverland*)CallFunc_GetOverlandMap_ReturnValue_4;
    params.CallFunc_GetHoveredIcon_ReturnValue_3 = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue_3;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetBeaconName_ReturnValue = (FString)CallFunc_GetBeaconName_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_3 = (bool)CallFunc_IsValid_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_13 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_13;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_OverlandMapScreen_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_OverlandMapScreen_C::MapStart_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MapStart_Event"));
    struct Params_MapStart_Event {
    }; // Size: 0x0
    Params_MapStart_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::AdjustTooltipForViewportWidth(float IdealWidth, float CurrentRatio, float CurrentWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, float K2Node_MathExpression_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, FVector2D CallFunc_GetViewportSize_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.AdjustTooltipForViewportWidth"));
    struct Params_AdjustTooltipForViewportWidth {
        float IdealWidth; // 0x0
        float CurrentRatio; // 0x4
        float CurrentWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        FMargin K2Node_MakeStruct_Margin_1; // 0x20
        float K2Node_MathExpression_ReturnValue; // 0x30
        char pad_34[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x38
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x40
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x44
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x48
        char pad_49[0x3];
        FMargin K2Node_MakeStruct_Margin_2; // 0x4c
        FMargin K2Node_MakeStruct_Margin_3; // 0x5c
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x6c
        char pad_74[0x4];
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x78
        float CallFunc_BreakVector2D_X; // 0x80
        float CallFunc_BreakVector2D_Y; // 0x84
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x88
    }; // Size: 0x8c
    Params_AdjustTooltipForViewportWidth params{};
    params.IdealWidth = (float)IdealWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.CurrentWidth = (float)CurrentWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::DisableHogwartsButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.DisableHogwartsButton"));
    struct Params_DisableHogwartsButton {
    }; // Size: 0x0
    Params_DisableHogwartsButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::SetTooltipAnimations(float CursorX, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetTooltipAnimations"));
    struct Params_SetTooltipAnimations {
        float CursorX; // 0x0
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetTooltipAnimations params{};
    params.CursorX = (float)CursorX;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::Set_Map_Legend() {}
void UUI_BP_OverlandMapScreen_C::ExitMapScreen_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ExitMapScreen_Event"));
    struct Params_ExitMapScreen_Event {
    }; // Size: 0x0
    Params_ExitMapScreen_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::Activate_Map_Based_On_Hover(bool& Activated, UUIManager* CallFunc_Get_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, UMapOverland* CallFunc_GetOverlandMap_ReturnValue, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.Activate Map Based On Hover"));
    struct Params_Activate_Map_Based_On_Hover {
        bool Activated; // 0x0
        char pad_1[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue; // 0x10
        UMapOverland* CallFunc_GetOverlandMap_ReturnValue; // 0x18
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x29
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x2a
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x2b
    }; // Size: 0x2c
    Params_Activate_Map_Based_On_Hover params{};
    params.Activated = (bool)Activated;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetMapSubSystem_ReturnValue = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue;
    params.CallFunc_GetOverlandMap_ReturnValue = (UMapOverland*)CallFunc_GetOverlandMap_ReturnValue;
    params.CallFunc_GetHoveredIcon_ReturnValue = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    ProcessEvent(func, &params);
    Activated = params.Activated;
}
void UUI_BP_OverlandMapScreen_C::SetFieldGuideLegend(TArray<FLegendItemData>& LegendItems, UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetFieldGuideLegend"));
    struct Params_SetFieldGuideLegend {
        TArray<FLegendItemData> LegendItems; // 0x0
        UUIManager* CallFunc_Get_ReturnValue; // 0x10
        UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SetFieldGuideLegend params{};
    params.LegendItems = (TArray<FLegendItemData>)LegendItems;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetFieldGuideWidget_ReturnValue = (UFieldGuideMenu*)CallFunc_GetFieldGuideWidget_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    LegendItems = params.LegendItems;
}
void UUI_BP_OverlandMapScreen_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::SetLegend(TArray<FLegendItemData>& LegendStrings) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetLegend"));
    struct Params_SetLegend {
        TArray<FLegendItemData> LegendStrings; // 0x0
    }; // Size: 0x10
    Params_SetLegend params{};
    params.LegendStrings = (TArray<FLegendItemData>)LegendStrings;
    ProcessEvent(func, &params);
    LegendStrings = params.LegendStrings;
}
void UUI_BP_OverlandMapScreen_C::DisableHogsmeadeButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.DisableHogsmeadeButton"));
    struct Params_DisableHogsmeadeButton {
    }; // Size: 0x0
    Params_DisableHogsmeadeButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::SetCoverVisibilityAlpha_Event(float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetCoverVisibilityAlpha_Event"));
    struct Params_SetCoverVisibilityAlpha_Event {
        float Alpha; // 0x0
    }; // Size: 0x4
    Params_SetCoverVisibilityAlpha_Event params{};
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::ExecuteUbergraph_UI_BP_OverlandMapScreen(int32_t EntryPoint, float K2Node_Event_Alpha, TArray<FLegendItemData>& K2Node_Event_LegendStrings, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, FMapToolTipData K2Node_Event_ToolTipData_1) {}
void UUI_BP_OverlandMapScreen_C::OnHovered_Event(FMapToolTipData ToolTipData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnHovered_Event"));
    struct Params_OnHovered_Event {
        FMapToolTipData ToolTipData; // 0x0
    }; // Size: 0x1b8
    Params_OnHovered_Event params{};
    params.ToolTipData = (FMapToolTipData)ToolTipData;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::SetTipLegend_Event() {}
void UUI_BP_OverlandMapScreen_C::MapChanged_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MapChanged_Event"));
    struct Params_MapChanged_Event {
    }; // Size: 0x0
    Params_MapChanged_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_0_OnMapsButtonSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_0_OnMapsButtonSelected__DelegateSignature"));
    struct Params_BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_0_OnMapsButtonSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_0_OnMapsButtonSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::ShowHogwartsMissionsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ShowHogwartsMissionsAvailable"));
    struct Params_ShowHogwartsMissionsAvailable {
    }; // Size: 0x0
    Params_ShowHogwartsMissionsAvailable params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::UpdateMapLegend__DelegateSignature(TArray<FString>& LegendArray) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.UpdateMapLegend__DelegateSignature"));
    struct Params_UpdateMapLegend__DelegateSignature {
        TArray<FString> LegendArray; // 0x0
    }; // Size: 0x10
    Params_UpdateMapLegend__DelegateSignature params{};
    params.LegendArray = (TArray<FString>)LegendArray;
    ProcessEvent(func, &params);
    LegendArray = params.LegendArray;
}
void UUI_BP_OverlandMapScreen_C::ShowHogsmeadeMissionsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ShowHogsmeadeMissionsAvailable"));
    struct Params_ShowHogsmeadeMissionsAvailable {
    }; // Size: 0x0
    Params_ShowHogsmeadeMissionsAvailable params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::OnMapInput__DelegateSignature(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnMapInput__DelegateSignature"));
    struct Params_OnMapInput__DelegateSignature {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_OnMapInput__DelegateSignature params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::RegionHovered_Event(ERegionType MapRegion, int32_t RegionIndex, UUserWidget* IconWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.RegionHovered_Event"));
    struct Params_RegionHovered_Event {
        ERegionType MapRegion; // 0x0
        char pad_1[0x3];
        int32_t RegionIndex; // 0x4
        UUserWidget* IconWidget; // 0x8
    }; // Size: 0x10
    Params_RegionHovered_Event params{};
    params.MapRegion = (ERegionType)MapRegion;
    params.RegionIndex = (int32_t)RegionIndex;
    params.IconWidget = (UUserWidget*)IconWidget;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::MapMove_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MapMove_Event"));
    struct Params_MapMove_Event {
    }; // Size: 0x0
    Params_MapMove_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::WayPointUnset_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.WayPointUnset_Event"));
    struct Params_WayPointUnset_Event {
    }; // Size: 0x0
    Params_WayPointUnset_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::ZoomInPressed_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ZoomInPressed_Event"));
    struct Params_ZoomInPressed_Event {
    }; // Size: 0x0
    Params_ZoomInPressed_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::ZoomInReleased_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ZoomInReleased_Event"));
    struct Params_ZoomInReleased_Event {
    }; // Size: 0x0
    Params_ZoomInReleased_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::SetLevelName_Event(FString LevelName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetLevelName_Event"));
    struct Params_SetLevelName_Event {
        FString LevelName; // 0x0
    }; // Size: 0x10
    Params_SetLevelName_Event params{};
    params.LevelName = (FString)LevelName;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::ZoomOutReleased_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.ZoomOutReleased_Event"));
    struct Params_ZoomOutReleased_Event {
    }; // Size: 0x0
    Params_ZoomOutReleased_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::OnUnhovered_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnUnhovered_Event"));
    struct Params_OnUnhovered_Event {
    }; // Size: 0x0
    Params_OnUnhovered_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::OnUpdateToolTip_Event(FMapToolTipData ToolTipData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnUpdateToolTip_Event"));
    struct Params_OnUpdateToolTip_Event {
        FMapToolTipData ToolTipData; // 0x0
    }; // Size: 0x1b8
    Params_OnUpdateToolTip_Event params{};
    params.ToolTipData = (FMapToolTipData)ToolTipData;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::TierChanged_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.TierChanged_Event"));
    struct Params_TierChanged_Event {
    }; // Size: 0x0
    Params_TierChanged_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::BndEvt__UI_BP_OverlandMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BndEvt__UI_BP_OverlandMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_OverlandMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_OverlandMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_OverlandMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::RegionInfoUpdated_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.RegionInfoUpdated_Event"));
    struct Params_RegionInfoUpdated_Event {
    }; // Size: 0x0
    Params_RegionInfoUpdated_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::SetCoverVisibility_Event(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetCoverVisibility_Event"));
    struct Params_SetCoverVisibility_Event {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetCoverVisibility_Event params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::RegionChange_Event0(APhoenixMapRegion* regionActor, APhoenixMapRegion* subregionActor, bool noString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.RegionChange_Event"));
    struct Params_RegionChange_Event {
        APhoenixMapRegion* regionActor; // 0x0
        APhoenixMapRegion* subregionActor; // 0x8
        bool noString; // 0x10
    }; // Size: 0x11
    Params_RegionChange_Event params{};
    params.regionActor = (APhoenixMapRegion*)regionActor;
    params.subregionActor = (APhoenixMapRegion*)subregionActor;
    params.noString = (bool)noString;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::MapStop_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.MapStop_Event"));
    struct Params_MapStop_Event {
    }; // Size: 0x0
    Params_MapStop_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_OverlandMapScreen_C::OnMenuItemChanged__DelegateSignature(int32_t ItemIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_OverlandMapScreen.UI_BP_OverlandMapScreen_C.OnMenuItemChanged__DelegateSignature"));
    struct Params_OnMenuItemChanged__DelegateSignature {
        int32_t ItemIndex; // 0x0
    }; // Size: 0x4
    Params_OnMenuItemChanged__DelegateSignature params{};
    params.ItemIndex = (int32_t)ItemIndex;
    ProcessEvent(func, &params);
}
