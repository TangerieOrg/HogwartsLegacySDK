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
#include "UCanvasPanel.hpp"
#include "UFieldGuideMenu.hpp"
#include "UFunction.hpp"
#include "UHogsmeadeMapScreen.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UMapBase.hpp"
#include "UMapHogsmeade.hpp"
#include "UMapIcon.hpp"
#include "UMapSubSystem.hpp"
#include "UObject.hpp"
#include "UOverlaySlot.hpp"
#include "URetainerBox.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_FieldGuide_C.hpp"
#include "UUI_BP_HogsmeadeMapScreen_C.hpp"
#include "UUI_BP_MapToolTip_C.hpp"
#include "UUI_BP_MapsButton_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_HogsmeadeMapScreen_C::WayPointSet_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.WayPointSet_Event"));
    struct Params_WayPointSet_Event {
    }; // Size: 0x0
    Params_WayPointSet_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::MapStart_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MapStart_Event"));
    struct Params_MapStart_Event {
    }; // Size: 0x0
    Params_MapStart_Event params{};
    ProcessEvent(func, &params);
}
UUI_BP_HogsmeadeMapScreen_C* UUI_BP_HogsmeadeMapScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C");
    return (UUI_BP_HogsmeadeMapScreen_C*)res;
}
bool UUI_BP_HogsmeadeMapScreen_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, UMapHogsmeade* CallFunc_GetHogsmeadeMap_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue, UMapHogsmeade* CallFunc_GetHogsmeadeMap_ReturnValue_1, FString CallFunc_GetBeaconDescShort_ReturnValue, bool CallFunc_GetIsMouseDragging_ReturnValue, bool CallFunc_CanGoToMissionLogFromIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UUIManager* CallFunc_Get_ReturnValue_1, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, UMapHogsmeade* CallFunc_GetHogsmeadeMap_ReturnValue_2, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_1, UMapBase* CallFunc_GetMapBase_ReturnValue, FString CallFunc_GetBeaconFastTravelLocationID_ReturnValue, bool CallFunc_IsFTPointValidPreFIG01b_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_GetUsingGamePad_ReturnValue, UMapBase* CallFunc_GetMapBase_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, EMapFadeState CallFunc_GetMapFadeState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
        bool CallFunc_BooleanOR_ReturnValue; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x7
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0xc
        char pad_d[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x10
        char pad_14[0x4];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue; // 0x18
        UUIManager* CallFunc_Get_ReturnValue; // 0x20
        UMapHogsmeade* CallFunc_GetHogsmeadeMap_ReturnValue; // 0x28
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue; // 0x30
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue; // 0x38
        UMapHogsmeade* CallFunc_GetHogsmeadeMap_ReturnValue_1; // 0x40
        FString CallFunc_GetBeaconDescShort_ReturnValue; // 0x48
        bool CallFunc_GetIsMouseDragging_ReturnValue; // 0x58
        bool CallFunc_CanGoToMissionLogFromIcon_ReturnValue; // 0x59
        bool CallFunc_IsValid_ReturnValue; // 0x5a
        char pad_5b[0x5];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1; // 0x60
        UUIManager* CallFunc_Get_ReturnValue_1; // 0x68
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_1; // 0x70
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x78
        char pad_79[0x7];
        UMapHogsmeade* CallFunc_GetHogsmeadeMap_ReturnValue_2; // 0x80
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_1; // 0x88
        UMapBase* CallFunc_GetMapBase_ReturnValue; // 0x90
        FString CallFunc_GetBeaconFastTravelLocationID_ReturnValue; // 0x98
        bool CallFunc_IsFTPointValidPreFIG01b_ReturnValue; // 0xa8
        bool CallFunc_IsValid_ReturnValue_1; // 0xa9
        char pad_aa[0x6];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0xb0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0xb8
        char pad_b9[0x7];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2; // 0xc0
        bool CallFunc_GetUsingGamePad_ReturnValue; // 0xc8
        char pad_c9[0x7];
        UMapBase* CallFunc_GetMapBase_ReturnValue_1; // 0xd0
        bool CallFunc_BooleanAND_ReturnValue; // 0xd8
        EMapFadeState CallFunc_GetMapFadeState_ReturnValue; // 0xd9
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0xda
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0xdb
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_9; // 0xdc
    }; // Size: 0xdd
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetHogsmeadeMap_ReturnValue = (UMapHogsmeade*)CallFunc_GetHogsmeadeMap_ReturnValue;
    params.CallFunc_GetMapSubSystem_ReturnValue = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue;
    params.CallFunc_GetHoveredIcon_ReturnValue = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue;
    params.CallFunc_GetHogsmeadeMap_ReturnValue_1 = (UMapHogsmeade*)CallFunc_GetHogsmeadeMap_ReturnValue_1;
    params.CallFunc_GetBeaconDescShort_ReturnValue = (FString)CallFunc_GetBeaconDescShort_ReturnValue;
    params.CallFunc_GetIsMouseDragging_ReturnValue = (bool)CallFunc_GetIsMouseDragging_ReturnValue;
    params.CallFunc_CanGoToMissionLogFromIcon_ReturnValue = (bool)CallFunc_CanGoToMissionLogFromIcon_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
    params.CallFunc_Get_ReturnValue_1 = (UUIManager*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_GetMapSubSystem_ReturnValue_1 = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_GetHogsmeadeMap_ReturnValue_2 = (UMapHogsmeade*)CallFunc_GetHogsmeadeMap_ReturnValue_2;
    params.CallFunc_GetHoveredIcon_ReturnValue_1 = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue_1;
    params.CallFunc_GetMapBase_ReturnValue = (UMapBase*)CallFunc_GetMapBase_ReturnValue;
    params.CallFunc_GetBeaconFastTravelLocationID_ReturnValue = (FString)CallFunc_GetBeaconFastTravelLocationID_ReturnValue;
    params.CallFunc_IsFTPointValidPreFIG01b_ReturnValue = (bool)CallFunc_IsFTPointValidPreFIG01b_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
    params.CallFunc_GetUsingGamePad_ReturnValue = (bool)CallFunc_GetUsingGamePad_ReturnValue;
    params.CallFunc_GetMapBase_ReturnValue_1 = (UMapBase*)CallFunc_GetMapBase_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GetMapFadeState_ReturnValue = (EMapFadeState)CallFunc_GetMapFadeState_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_9;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_HogsmeadeMapScreen_C::ZoomOutPressed_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ZoomOutPressed_Event"));
    struct Params_ZoomOutPressed_Event {
    }; // Size: 0x0
    Params_ZoomOutPressed_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_HogsmeadeMapScreen_C::AdjustForViewportWidth(float CurrentRatio, float CurrentWidth, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float CurrentRatio; // 0x0
        float CurrentWidth; // 0x4
        float IdealWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        FMargin K2Node_MakeStruct_Margin_1; // 0x20
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x30
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x38
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x40
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x44
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x48
        char pad_49[0x3];
        FMargin K2Node_MakeStruct_Margin_2; // 0x4c
        FMargin K2Node_MakeStruct_Margin_3; // 0x5c
        float K2Node_MathExpression_ReturnValue; // 0x6c
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x70
        float CallFunc_BreakVector2D_X; // 0x78
        float CallFunc_BreakVector2D_Y; // 0x7c
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x80
    }; // Size: 0x84
    Params_AdjustForViewportWidth params{};
    params.CurrentRatio = (float)CurrentRatio;
    params.CurrentWidth = (float)CurrentWidth;
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::MenuReadLegend(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MenuReadLegend"));
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
void UUI_BP_HogsmeadeMapScreen_C::TutorialSaysStopHighlightHogwarts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.TutorialSaysStopHighlightHogwarts"));
    struct Params_TutorialSaysStopHighlightHogwarts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_TutorialSaysStopHighlightHogwarts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::SetTooltipAnimations(float CursorX, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetTooltipAnimations"));
    struct Params_SetTooltipAnimations {
        float CursorX; // 0x0
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetTooltipAnimations params{};
    params.CursorX = (float)CursorX;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::DisableHogwartsButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.DisableHogwartsButton"));
    struct Params_DisableHogwartsButton {
    }; // Size: 0x0
    Params_DisableHogwartsButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::ShowHogwartsMissionsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ShowHogwartsMissionsAvailable"));
    struct Params_ShowHogwartsMissionsAvailable {
    }; // Size: 0x0
    Params_ShowHogwartsMissionsAvailable params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_4_OnMapsButtonSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_4_OnMapsButtonSelected__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_4_OnMapsButtonSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_4_OnMapsButtonSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::SetButtonPrompt(TArray<FLegendItemData>& NewParam, UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, UUI_BP_FieldGuide_C* K2Node_DynamicCast_AsUI_BP_Field_Guide, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetButtonPrompt"));
    struct Params_SetButtonPrompt {
        TArray<FLegendItemData> NewParam; // 0x0
        UUIManager* CallFunc_Get_ReturnValue; // 0x10
        UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue; // 0x18
        UUI_BP_FieldGuide_C* K2Node_DynamicCast_AsUI_BP_Field_Guide; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
    }; // Size: 0x29
    Params_SetButtonPrompt params{};
    params.NewParam = (TArray<FLegendItemData>)NewParam;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetFieldGuideWidget_ReturnValue = (UFieldGuideMenu*)CallFunc_GetFieldGuideWidget_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Field_Guide = (UUI_BP_FieldGuide_C*)K2Node_DynamicCast_AsUI_BP_Field_Guide;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
void UUI_BP_HogsmeadeMapScreen_C::MapStop_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MapStop_Event"));
    struct Params_MapStop_Event {
    }; // Size: 0x0
    Params_MapStop_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::SetCoverVisibility_Event(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetCoverVisibility_Event"));
    struct Params_SetCoverVisibility_Event {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetCoverVisibility_Event params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::OnUnhovered_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnUnhovered_Event"));
    struct Params_OnUnhovered_Event {
    }; // Size: 0x0
    Params_OnUnhovered_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::RegionInfoUpdated_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.RegionInfoUpdated_Event"));
    struct Params_RegionInfoUpdated_Event {
    }; // Size: 0x0
    Params_RegionInfoUpdated_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::SetLegend(TArray<FLegendItemData>& LegendStrings) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetLegend"));
    struct Params_SetLegend {
        TArray<FLegendItemData> LegendStrings; // 0x0
    }; // Size: 0x10
    Params_SetLegend params{};
    params.LegendStrings = (TArray<FLegendItemData>)LegendStrings;
    ProcessEvent(func, &params);
    LegendStrings = params.LegendStrings;
}
void UUI_BP_HogsmeadeMapScreen_C::TierChanged_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.TierChanged_Event"));
    struct Params_TierChanged_Event {
    }; // Size: 0x0
    Params_TierChanged_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::SetCoverVisibilityAlpha_Event(float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetCoverVisibilityAlpha_Event"));
    struct Params_SetCoverVisibilityAlpha_Event {
        float Alpha; // 0x0
    }; // Size: 0x4
    Params_SetCoverVisibilityAlpha_Event params{};
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::ExitMapScreen_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ExitMapScreen_Event"));
    struct Params_ExitMapScreen_Event {
    }; // Size: 0x0
    Params_ExitMapScreen_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::SetTipLegend_Event() {}
void UUI_BP_HogsmeadeMapScreen_C::BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_5_OnMapsButtonSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_5_OnMapsButtonSelected__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_5_OnMapsButtonSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_5_OnMapsButtonSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::OnHovered_Event(FMapToolTipData ToolTipData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnHovered_Event"));
    struct Params_OnHovered_Event {
        FMapToolTipData ToolTipData; // 0x0
    }; // Size: 0x1b8
    Params_OnHovered_Event params{};
    params.ToolTipData = (FMapToolTipData)ToolTipData;
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::MapChanged_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MapChanged_Event"));
    struct Params_MapChanged_Event {
    }; // Size: 0x0
    Params_MapChanged_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::ShowOverlandMissionsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ShowOverlandMissionsAvailable"));
    struct Params_ShowOverlandMissionsAvailable {
    }; // Size: 0x0
    Params_ShowOverlandMissionsAvailable params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::UpdateMapLegend__DelegateSignature(TArray<FString>& NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.UpdateMapLegend__DelegateSignature"));
    struct Params_UpdateMapLegend__DelegateSignature {
        TArray<FString> NewParam; // 0x0
    }; // Size: 0x10
    Params_UpdateMapLegend__DelegateSignature params{};
    params.NewParam = (TArray<FString>)NewParam;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
void UUI_BP_HogsmeadeMapScreen_C::MapMove_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.MapMove_Event"));
    struct Params_MapMove_Event {
    }; // Size: 0x0
    Params_MapMove_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HogsmeadeMapScreen_OverlandButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::ZoomInPressed_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ZoomInPressed_Event"));
    struct Params_ZoomInPressed_Event {
    }; // Size: 0x0
    Params_ZoomInPressed_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::ZoomInReleased_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ZoomInReleased_Event"));
    struct Params_ZoomInReleased_Event {
    }; // Size: 0x0
    Params_ZoomInReleased_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::ZoomOutReleased_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.ZoomOutReleased_Event"));
    struct Params_ZoomOutReleased_Event {
    }; // Size: 0x0
    Params_ZoomOutReleased_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::OnMapInput__DelegateSignature(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnMapInput__DelegateSignature"));
    struct Params_OnMapInput__DelegateSignature {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_OnMapInput__DelegateSignature params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::DisableOverlandButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.DisableOverlandButton"));
    struct Params_DisableOverlandButton {
    }; // Size: 0x0
    Params_DisableOverlandButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::OnUpdateToolTip_Event(FMapToolTipData ToolTipData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnUpdateToolTip_Event"));
    struct Params_OnUpdateToolTip_Event {
        FMapToolTipData ToolTipData; // 0x0
    }; // Size: 0x1b8
    Params_OnUpdateToolTip_Event params{};
    params.ToolTipData = (FMapToolTipData)ToolTipData;
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::WayPointUnset_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.WayPointUnset_Event"));
    struct Params_WayPointUnset_Event {
    }; // Size: 0x0
    Params_WayPointUnset_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HogsmeadeMapScreen_HogwartsButton_K2Node_ComponentBoundEvent_1_OnMapsButtonHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::SetupFastTravelTutorial() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.SetupFastTravelTutorial"));
    struct Params_SetupFastTravelTutorial {
    }; // Size: 0x0
    Params_SetupFastTravelTutorial params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogsmeadeMapScreen_C::ExecuteUbergraph_UI_BP_HogsmeadeMapScreen(int32_t EntryPoint, int32_t CallFunc_AddStateToStack_ReturnValue, bool K2Node_Event_Enable, TArray<FLegendItemData>& K2Node_Event_LegendStrings, float K2Node_Event_Alpha, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue_1) {}
void UUI_BP_HogsmeadeMapScreen_C::OnMenuItemChanged__DelegateSignature(int32_t ItemIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogsmeadeMapScreen.UI_BP_HogsmeadeMapScreen_C.OnMenuItemChanged__DelegateSignature"));
    struct Params_OnMenuItemChanged__DelegateSignature {
        int32_t ItemIndex; // 0x0
    }; // Size: 0x4
    Params_OnMenuItemChanged__DelegateSignature params{};
    params.ItemIndex = (int32_t)ItemIndex;
    ProcessEvent(func, &params);
}
