#include "AActor.hpp"
#include "AFlyingBroom.hpp"
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FGeometry.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UExpandableArea.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UInvalidationBox.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UProgressBar.hpp"
#include "USizeBox.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_BroomBoostMeter_C.hpp"
#include "UUI_BP_BroomHUD_C.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_BroomHUD_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_0 params{};
    ProcessEvent(func, &params);
}
UUI_BP_BroomHUD_C* UUI_BP_BroomHUD_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C");
    return (UUI_BP_BroomHUD_C*)res;
}
void UUI_BP_BroomHUD_C::SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_4() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_4"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_4 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_4 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::SetToggleText(UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue, FString CallFunc_SelectString_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.SetToggleText"));
    struct Params_SetToggleText {
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x0
        bool CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue; // 0x8
        char pad_9[0x7];
        FString CallFunc_SelectString_ReturnValue; // 0x10
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x20
    }; // Size: 0x50
    Params_SetToggleText params{};
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue = (bool)CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_3"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_3 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_3 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::SetHealthBarVisibility(bool ShowHealthBar, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.SetHealthBarVisibility"));
    struct Params_SetHealthBarVisibility {
        bool ShowHealthBar; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_SetHealthBarVisibility params{};
    params.ShowHealthBar = (bool)ShowHealthBar;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_2"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_2 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BroomHUD_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::ConditionallyShowKeyboardControls(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.ConditionallyShowKeyboardControls"));
    struct Params_ConditionallyShowKeyboardControls {
        ESlateVisibility Temp_byte_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable_1; // 0x1
        bool Temp_bool_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_2; // 0x3
        ESlateVisibility Temp_byte_Variable_3; // 0x4
        bool Temp_bool_Variable_1; // 0x5
        char pad_6[0x2];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x11
        ESlateVisibility K2Node_Select_Default; // 0x12
        ESlateVisibility K2Node_Select_Default_1; // 0x13
    }; // Size: 0x14
    Params_ConditionallyShowKeyboardControls params{};
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::HideControls(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.HideControls"));
    struct Params_HideControls {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideControls params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::ShowControls(bool Hold, bool Temp_bool_Variable, UWidgetAnimation* K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.ShowControls"));
    struct Params_ShowControls {
        bool Hold; // 0x0
        bool Temp_bool_Variable; // 0x1
        char pad_2[0x6];
        UWidgetAnimation* K2Node_Select_Default; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ShowControls params{};
    params.Hold = (bool)Hold;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (UWidgetAnimation*)K2Node_Select_Default;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::BroomSaysHideControls(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomSaysHideControls"));
    struct Params_BroomSaysHideControls {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_BroomSaysHideControls params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::OnHealthChanged(AActor* Target, float InHealthChange, bool bIndicateHUD, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealthPercentage_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnHealthChanged"));
    struct Params_OnHealthChanged {
        AActor* Target; // 0x0
        float InHealthChange; // 0x8
        bool bIndicateHUD; // 0xc
        char pad_d[0x3];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x10
        float CallFunc_GetHealthPercentage_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_OnHealthChanged params{};
    params.Target = (AActor*)Target;
    params.InHealthChange = (float)InHealthChange;
    params.bIndicateHUD = (bool)bIndicateHUD;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetHealthPercentage_ReturnValue = (float)CallFunc_GetHealthPercentage_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::SetBroomCallouts(FString CallFunc_SelectString_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.SetBroomCallouts"));
    struct Params_SetBroomCallouts {
        FString CallFunc_SelectString_ReturnValue; // 0x0
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x10
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x18
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x48
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0x78
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0xa8
        FLegendItemData K2Node_MakeStruct_LegendItemData_4; // 0xd8
    }; // Size: 0x108
    Params_SetBroomCallouts params{};
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.K2Node_MakeStruct_LegendItemData_4 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_4;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::Show(AFlyingBroom* FlyingBroom) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.Show"));
    struct Params_Show {
        AFlyingBroom* FlyingBroom; // 0x0
    }; // Size: 0x8
    Params_Show params{};
    params.FlyingBroom = (AFlyingBroom*)FlyingBroom;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::BroomSaysShowControlsHold(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomSaysShowControlsHold"));
    struct Params_BroomSaysShowControlsHold {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_BroomSaysShowControlsHold params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::WidgetAnimationEvt_HideBroomHUD_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.WidgetAnimationEvt_HideBroomHUD_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_HideBroomHUD_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_HideBroomHUD_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::OnBroomForceHoverDisabled(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomForceHoverDisabled"));
    struct Params_OnBroomForceHoverDisabled {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomForceHoverDisabled params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::OnBroomBoostAllowed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomBoostAllowed"));
    struct Params_OnBroomBoostAllowed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomBoostAllowed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::HighBoostGainEnd(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.HighBoostGainEnd"));
    struct Params_HighBoostGainEnd {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HighBoostGainEnd params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::OnBroomBoostDisallowed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomBoostDisallowed"));
    struct Params_OnBroomBoostDisallowed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomBoostDisallowed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::OnBroomForceHoverEnabled(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomForceHoverEnabled"));
    struct Params_OnBroomForceHoverEnabled {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomForceHoverEnabled params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::OnBroomDismountAllowed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomDismountAllowed"));
    struct Params_OnBroomDismountAllowed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomDismountAllowed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::BroomBoost(UObject* Caller, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomBoost"));
    struct Params_BroomBoost {
        UObject* Caller; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_BroomBoost params{};
    params.Caller = (UObject*)Caller;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::OnBroomDismountDisallowed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomDismountDisallowed"));
    struct Params_OnBroomDismountDisallowed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomDismountDisallowed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::OnBroomInputEnabled(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomInputEnabled"));
    struct Params_OnBroomInputEnabled {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomInputEnabled params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::ExecuteUbergraph_UI_BP_BroomHUD(int32_t EntryPoint) {}
void UUI_BP_BroomHUD_C::OnBroomInputDisabled(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.OnBroomInputDisabled"));
    struct Params_OnBroomInputDisabled {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnBroomInputDisabled params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::BroomSaysShowControls(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomSaysShowControls"));
    struct Params_BroomSaysShowControls {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_BroomSaysShowControls params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::HighBoostGainStart(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.HighBoostGainStart"));
    struct Params_HighBoostGainStart {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HighBoostGainStart params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::ExpandCallouts() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.ExpandCallouts"));
    struct Params_ExpandCallouts {
    }; // Size: 0x0
    Params_ExpandCallouts params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::CollapseCallouts() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.CollapseCallouts"));
    struct Params_CollapseCallouts {
    }; // Size: 0x0
    Params_CollapseCallouts params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomHUD_C::BroomBoostEnd(UObject* Caller, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomHUD.UI_BP_BroomHUD_C.BroomBoostEnd"));
    struct Params_BroomBoostEnd {
        UObject* Caller; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_BroomBoostEnd params{};
    params.Caller = (UObject*)Caller;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
