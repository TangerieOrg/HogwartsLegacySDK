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
#include "UCanvasPanel.hpp"
#include "UFastTravelManager.hpp"
#include "UFieldGuideMenu.hpp"
#include "UFunction.hpp"
#include "UHogwartsMapScreen.hpp"
#include "UImage.hpp"
#include "UMapBase.hpp"
#include "UMapHogwarts.hpp"
#include "UMapIcon.hpp"
#include "UMapSubSystem.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UOverlaySlot.hpp"
#include "URetainerBox.hpp"
#include "UTutorialSystem.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_FastTravelButton_C.hpp"
#include "UUI_BP_FieldGuide_C.hpp"
#include "UUI_BP_HogwartsMapScreen_C.hpp"
#include "UUI_BP_MapToolTip_C.hpp"
#include "UUI_BP_MapsButton_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_HogwartsMapScreen_C::SetTooltipAnimations(float CursorX) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetTooltipAnimations"));
    struct Params_SetTooltipAnimations {
        float CursorX; // 0x0
    }; // Size: 0x4
    Params_SetTooltipAnimations params{};
    params.CursorX = (float)CursorX;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::HogwartsFastTravel_Event0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HogwartsFastTravel_Event"));
    struct Params_HogwartsFastTravel_Event {
    }; // Size: 0x0
    Params_HogwartsFastTravel_Event params{};
    ProcessEvent(func, &params);
}
UUI_BP_HogwartsMapScreen_C* UUI_BP_HogwartsMapScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C");
    return (UUI_BP_HogwartsMapScreen_C*)res;
}
void UUI_BP_HogwartsMapScreen_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_HogwartsMapScreen_C::BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_1_OnMapsButtonSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_1_OnMapsButtonSelected__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_1_OnMapsButtonSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_1_OnMapsButtonSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::ExitMapScreen_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ExitMapScreen_Event"));
    struct Params_ExitMapScreen_Event {
    }; // Size: 0x0
    Params_ExitMapScreen_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::AdjustForViewportWidth(float IdealWidth, float IdealRatio, float CurrentRatio, float CurrentWidth, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_3, bool CallFunc_Greater_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_4, FMargin K2Node_MakeStruct_Margin_5, float K2Node_MathExpression_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float IdealWidth; // 0x0
        float IdealRatio; // 0x4
        float CurrentRatio; // 0x8
        float CurrentWidth; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        FMargin K2Node_MakeStruct_Margin_1; // 0x20
        FMargin K2Node_MakeStruct_Margin_2; // 0x30
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue; // 0x40
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1; // 0x48
        UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2; // 0x50
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x58
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x5c
        FMargin K2Node_MakeStruct_Margin_3; // 0x60
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x70
        char pad_71[0x3];
        FMargin K2Node_MakeStruct_Margin_4; // 0x74
        FMargin K2Node_MakeStruct_Margin_5; // 0x84
        float K2Node_MathExpression_ReturnValue; // 0x94
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x98
        float CallFunc_BreakVector2D_X; // 0xa0
        float CallFunc_BreakVector2D_Y; // 0xa4
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0xa8
    }; // Size: 0xac
    Params_AdjustForViewportWidth params{};
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.CurrentRatio = (float)CurrentRatio;
    params.CurrentWidth = (float)CurrentWidth;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_1;
    params.CallFunc_SlotAsOverlaySlot_ReturnValue_2 = (UOverlaySlot*)CallFunc_SlotAsOverlaySlot_ReturnValue_2;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Margin_4 = (FMargin)K2Node_MakeStruct_Margin_4;
    params.K2Node_MakeStruct_Margin_5 = (FMargin)K2Node_MakeStruct_Margin_5;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HogwartsMapScreen_OverlandButton_K2Node_ComponentBoundEvent_2_OnMapsButtonHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::CloseMapAndGuide(UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, UUI_BP_FieldGuide_C* K2Node_DynamicCast_AsUI_BP_Field_Guide, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.CloseMapAndGuide"));
    struct Params_CloseMapAndGuide {
        UUIManager* CallFunc_Get_ReturnValue; // 0x0
        UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue; // 0x8
        UUI_BP_FieldGuide_C* K2Node_DynamicCast_AsUI_BP_Field_Guide; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_CloseMapAndGuide params{};
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetFieldGuideWidget_ReturnValue = (UFieldGuideMenu*)CallFunc_GetFieldGuideWidget_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Field_Guide = (UUI_BP_FieldGuide_C*)K2Node_DynamicCast_AsUI_BP_Field_Guide;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
bool UUI_BP_HogwartsMapScreen_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, UMapBase* CallFunc_GetMapBase_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActive_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsTutorialActive_ReturnValue_1, bool CallFunc_IsTutorialActive_ReturnValue_2, bool CallFunc_IsTutorialActive_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UTutorialSystem* CallFunc_Get_ReturnValue_1, bool CallFunc_CompleteTutorialStepByAlias_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UMapHogwarts* CallFunc_GetHogwartsMap_ReturnValue, UUIManager* CallFunc_Get_ReturnValue_2, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, FString CallFunc_GetBeaconDescShort_ReturnValue, UMapHogwarts* CallFunc_GetHogwartsMap_ReturnValue_1, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_1, bool CallFunc_GetIsMouseDragging_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanGoToMissionLogFromIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, UFastTravelManager* CallFunc_Get_ReturnValue_3, bool CallFunc_IsFastTravelTutorialActive_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, UMapBase* CallFunc_GetMapBase_ReturnValue_1, EMapFadeState CallFunc_GetMapFadeState_ReturnValue, UMapBase* CallFunc_GetMapBase_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, UMapHogwarts* K2Node_DynamicCast_AsMap_Hogwarts, bool K2Node_DynamicCast_bSuccess, UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x5];
        UMapBase* CallFunc_GetMapBase_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x10
        char pad_11[0x7];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x18
        bool CallFunc_IsTutorialActive_ReturnValue; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x21
        bool CallFunc_IsTutorialActive_ReturnValue_1; // 0x22
        bool CallFunc_IsTutorialActive_ReturnValue_2; // 0x23
        bool CallFunc_IsTutorialActive_ReturnValue_3; // 0x24
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x25
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x26
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x27
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x28
        bool CallFunc_BooleanOR_ReturnValue; // 0x2c
        char pad_2d[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x30
        char pad_34[0x4];
        UTutorialSystem* CallFunc_Get_ReturnValue_1; // 0x38
        bool CallFunc_CompleteTutorialStepByAlias_ReturnValue; // 0x40
        char pad_41[0x7];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x48
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x50
        char pad_51[0x7];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue; // 0x58
        UMapHogwarts* CallFunc_GetHogwartsMap_ReturnValue; // 0x60
        UUIManager* CallFunc_Get_ReturnValue_2; // 0x68
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue; // 0x70
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue; // 0x78
        FString CallFunc_GetBeaconDescShort_ReturnValue; // 0x80
        UMapHogwarts* CallFunc_GetHogwartsMap_ReturnValue_1; // 0x90
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_1; // 0x98
        bool CallFunc_GetIsMouseDragging_ReturnValue; // 0xa0
        bool CallFunc_IsValid_ReturnValue; // 0xa1
        bool CallFunc_CanGoToMissionLogFromIcon_ReturnValue; // 0xa2
        bool CallFunc_IsValid_ReturnValue_1; // 0xa3
        char pad_a4[0x4];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1; // 0xa8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0xb0
        char pad_b1[0x7];
        UFastTravelManager* CallFunc_Get_ReturnValue_3; // 0xb8
        bool CallFunc_IsFastTravelTutorialActive_ReturnValue; // 0xc0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0xc1
        char pad_c2[0x6];
        UMapBase* CallFunc_GetMapBase_ReturnValue_1; // 0xc8
        EMapFadeState CallFunc_GetMapFadeState_ReturnValue; // 0xd0
        char pad_d1[0x7];
        UMapBase* CallFunc_GetMapBase_ReturnValue_2; // 0xd8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0xe0
        char pad_e1[0x7];
        UMapHogwarts* K2Node_DynamicCast_AsMap_Hogwarts; // 0xe8
        bool K2Node_DynamicCast_bSuccess; // 0xf0
        char pad_f1[0x7];
        UMapIcon* CallFunc_GetHoveredIcon_ReturnValue_2; // 0xf8
        bool CallFunc_IsValid_ReturnValue_2; // 0x100
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_9; // 0x101
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_10; // 0x102
    }; // Size: 0x103
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_GetMapBase_ReturnValue = (UMapBase*)CallFunc_GetMapBase_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_IsTutorialActive_ReturnValue = (bool)CallFunc_IsTutorialActive_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_IsTutorialActive_ReturnValue_1 = (bool)CallFunc_IsTutorialActive_ReturnValue_1;
    params.CallFunc_IsTutorialActive_ReturnValue_2 = (bool)CallFunc_IsTutorialActive_ReturnValue_2;
    params.CallFunc_IsTutorialActive_ReturnValue_3 = (bool)CallFunc_IsTutorialActive_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_Get_ReturnValue_1 = (UTutorialSystem*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_CompleteTutorialStepByAlias_ReturnValue = (bool)CallFunc_CompleteTutorialStepByAlias_ReturnValue;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue;
    params.CallFunc_GetHogwartsMap_ReturnValue = (UMapHogwarts*)CallFunc_GetHogwartsMap_ReturnValue;
    params.CallFunc_Get_ReturnValue_2 = (UUIManager*)CallFunc_Get_ReturnValue_2;
    params.CallFunc_GetHoveredIcon_ReturnValue = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue;
    params.CallFunc_GetMapSubSystem_ReturnValue = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue;
    params.CallFunc_GetBeaconDescShort_ReturnValue = (FString)CallFunc_GetBeaconDescShort_ReturnValue;
    params.CallFunc_GetHogwartsMap_ReturnValue_1 = (UMapHogwarts*)CallFunc_GetHogwartsMap_ReturnValue_1;
    params.CallFunc_GetHoveredIcon_ReturnValue_1 = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue_1;
    params.CallFunc_GetIsMouseDragging_ReturnValue = (bool)CallFunc_GetIsMouseDragging_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_CanGoToMissionLogFromIcon_ReturnValue = (bool)CallFunc_CanGoToMissionLogFromIcon_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_Get_ReturnValue_3 = (UFastTravelManager*)CallFunc_Get_ReturnValue_3;
    params.CallFunc_IsFastTravelTutorialActive_ReturnValue = (bool)CallFunc_IsFastTravelTutorialActive_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_GetMapBase_ReturnValue_1 = (UMapBase*)CallFunc_GetMapBase_ReturnValue_1;
    params.CallFunc_GetMapFadeState_ReturnValue = (EMapFadeState)CallFunc_GetMapFadeState_ReturnValue;
    params.CallFunc_GetMapBase_ReturnValue_2 = (UMapBase*)CallFunc_GetMapBase_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    params.K2Node_DynamicCast_AsMap_Hogwarts = (UMapHogwarts*)K2Node_DynamicCast_AsMap_Hogwarts;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetHoveredIcon_ReturnValue_2 = (UMapIcon*)CallFunc_GetHoveredIcon_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_9;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_10;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_HogwartsMapScreen_C::SetCoverVisibility_Event(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetCoverVisibility_Event"));
    struct Params_SetCoverVisibility_Event {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetCoverVisibility_Event params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::MenuReadLegend(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.MenuReadLegend"));
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
void UUI_BP_HogwartsMapScreen_C::ZoomOutPressed_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ZoomOutPressed_Event"));
    struct Params_ZoomOutPressed_Event {
    }; // Size: 0x0
    Params_ZoomOutPressed_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::HogwartsSelect_Event0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HogwartsSelect_Event"));
    struct Params_HogwartsSelect_Event {
    }; // Size: 0x0
    Params_HogwartsSelect_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::SetButtonPrompt(TArray<FLegendItemData>& Legends, UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetButtonPrompt"));
    struct Params_SetButtonPrompt {
        TArray<FLegendItemData> Legends; // 0x0
        UUIManager* CallFunc_Get_ReturnValue; // 0x10
        UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SetButtonPrompt params{};
    params.Legends = (TArray<FLegendItemData>)Legends;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetFieldGuideWidget_ReturnValue = (UFieldGuideMenu*)CallFunc_GetFieldGuideWidget_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    Legends = params.Legends;
}
void UUI_BP_HogwartsMapScreen_C::OnMapClicked() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnMapClicked"));
    struct Params_OnMapClicked {
    }; // Size: 0x0
    Params_OnMapClicked params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::OnUnhovered_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnUnhovered_Event"));
    struct Params_OnUnhovered_Event {
    }; // Size: 0x0
    Params_OnUnhovered_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::SetLegend(TArray<FLegendItemData>& LegendStrings) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetLegend"));
    struct Params_SetLegend {
        TArray<FLegendItemData> LegendStrings; // 0x0
    }; // Size: 0x10
    Params_SetLegend params{};
    params.LegendStrings = (TArray<FLegendItemData>)LegendStrings;
    ProcessEvent(func, &params);
    LegendStrings = params.LegendStrings;
}
void UUI_BP_HogwartsMapScreen_C::SetCoverVisibilityAlpha_Event(float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetCoverVisibilityAlpha_Event"));
    struct Params_SetCoverVisibilityAlpha_Event {
        float Alpha; // 0x0
    }; // Size: 0x4
    Params_SetCoverVisibilityAlpha_Event params{};
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::ShowHogsmeadeButton0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ShowHogsmeadeButton"));
    struct Params_ShowHogsmeadeButton {
    }; // Size: 0x0
    Params_ShowHogsmeadeButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::HogwartsBack_Event0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HogwartsBack_Event"));
    struct Params_HogwartsBack_Event {
    }; // Size: 0x0
    Params_HogwartsBack_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::HogwartsSetPath_Event0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HogwartsSetPath_Event"));
    struct Params_HogwartsSetPath_Event {
    }; // Size: 0x0
    Params_HogwartsSetPath_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_3_OnMapsButtonSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::OnHovered_Event(FMapToolTipData ToolTipData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnHovered_Event"));
    struct Params_OnHovered_Event {
        FMapToolTipData ToolTipData; // 0x0
    }; // Size: 0x1b8
    Params_OnHovered_Event params{};
    params.ToolTipData = (FMapToolTipData)ToolTipData;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::SetTipLegend_Event() {}
void UUI_BP_HogwartsMapScreen_C::DisableHogsmeadeButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.DisableHogsmeadeButton"));
    struct Params_DisableHogsmeadeButton {
    }; // Size: 0x0
    Params_DisableHogsmeadeButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::ShowOverlandMissionsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ShowOverlandMissionsAvailable"));
    struct Params_ShowOverlandMissionsAvailable {
    }; // Size: 0x0
    Params_ShowOverlandMissionsAvailable params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::MapChanged_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.MapChanged_Event"));
    struct Params_MapChanged_Event {
    }; // Size: 0x0
    Params_MapChanged_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::BndEvt__UI_BP_HogwartsMapScreen_FastTravelList_K2Node_ComponentBoundEvent_4_OnFastTravelButtonHovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_FastTravelList_K2Node_ComponentBoundEvent_4_OnFastTravelButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogwartsMapScreen_FastTravelList_K2Node_ComponentBoundEvent_4_OnFastTravelButtonHovered__DelegateSignature {
        UUI_BP_FastTravelButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_HogwartsMapScreen_FastTravelList_K2Node_ComponentBoundEvent_4_OnFastTravelButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::ShowHogsmeadeMissionsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ShowHogsmeadeMissionsAvailable"));
    struct Params_ShowHogsmeadeMissionsAvailable {
    }; // Size: 0x0
    Params_ShowHogsmeadeMissionsAvailable params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::TutorialSaysStopHighlightOverland(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.TutorialSaysStopHighlightOverland"));
    struct Params_TutorialSaysStopHighlightOverland {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_TutorialSaysStopHighlightOverland params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::SetupOverlandTutorial() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetupOverlandTutorial"));
    struct Params_SetupOverlandTutorial {
    }; // Size: 0x0
    Params_SetupOverlandTutorial params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::TierChanged_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.TierChanged_Event"));
    struct Params_TierChanged_Event {
    }; // Size: 0x0
    Params_TierChanged_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::DisableOverlandButton() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.DisableOverlandButton"));
    struct Params_DisableOverlandButton {
    }; // Size: 0x0
    Params_DisableOverlandButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::HideHogsmeadeButton0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HideHogsmeadeButton"));
    struct Params_HideHogsmeadeButton {
    }; // Size: 0x0
    Params_HideHogsmeadeButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HogwartsMapScreen_HogsmeadeButton_K2Node_ComponentBoundEvent_0_OnMapsButtonHovered__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::ShowOverlandButton0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ShowOverlandButton"));
    struct Params_ShowOverlandButton {
    }; // Size: 0x0
    Params_ShowOverlandButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::HideOverlandButton0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.HideOverlandButton"));
    struct Params_HideOverlandButton {
    }; // Size: 0x0
    Params_HideOverlandButton params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::MapMove_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.MapMove_Event"));
    struct Params_MapMove_Event {
    }; // Size: 0x0
    Params_MapMove_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::OnMenuItemChanged__DelegateSignature(int32_t ItemIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnMenuItemChanged__DelegateSignature"));
    struct Params_OnMenuItemChanged__DelegateSignature {
        int32_t ItemIndex; // 0x0
    }; // Size: 0x4
    Params_OnMenuItemChanged__DelegateSignature params{};
    params.ItemIndex = (int32_t)ItemIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::ZoomInPressed_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ZoomInPressed_Event"));
    struct Params_ZoomInPressed_Event {
    }; // Size: 0x0
    Params_ZoomInPressed_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::ZoomInReleased_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ZoomInReleased_Event"));
    struct Params_ZoomInReleased_Event {
    }; // Size: 0x0
    Params_ZoomInReleased_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::ZoomOutReleased_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.ZoomOutReleased_Event"));
    struct Params_ZoomOutReleased_Event {
    }; // Size: 0x0
    Params_ZoomOutReleased_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::OnUpdateToolTip_Event(FMapToolTipData ToolTipData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.OnUpdateToolTip_Event"));
    struct Params_OnUpdateToolTip_Event {
        FMapToolTipData ToolTipData; // 0x0
    }; // Size: 0x1b8
    Params_OnUpdateToolTip_Event params{};
    params.ToolTipData = (FMapToolTipData)ToolTipData;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::WayPointSet_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.WayPointSet_Event"));
    struct Params_WayPointSet_Event {
    }; // Size: 0x0
    Params_WayPointSet_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::WayPointUnset_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.WayPointUnset_Event"));
    struct Params_WayPointUnset_Event {
    }; // Size: 0x0
    Params_WayPointUnset_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::MapStart_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapScreen.UI_BP_HogwartsMapScreen_C.MapStart_Event"));
    struct Params_MapStart_Event {
    }; // Size: 0x0
    Params_MapStart_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapScreen_C::ExecuteUbergraph_UI_BP_HogwartsMapScreen(int32_t EntryPoint) {}
