#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "AFlyingBroom.hpp"
#include "ARace.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FFormatArgumentData.hpp"
#include "FGeometry.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UPopupScreen.hpp"
#include "UUI_BP_BroomHUD_C.hpp"
#include "UUI_BP_BroomRaceHUD_C.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_BroomRaceHUD_C::HighBoostGainEnd(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.HighBoostGainEnd"));
    struct Params_HighBoostGainEnd {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HighBoostGainEnd params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
bool UUI_BP_BroomRaceHUD_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_BooleanAND_ReturnValue; // 0x5
    }; // Size: 0x6
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UUI_BP_BroomRaceHUD_C* UUI_BP_BroomRaceHUD_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C");
    return (UUI_BP_BroomRaceHUD_C*)res;
}
void UUI_BP_BroomRaceHUD_C::ClearRaceInfo() {}
void UUI_BP_BroomRaceHUD_C::ClearHUD(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.ClearHUD"));
    struct Params_ClearHUD {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ClearHUD params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::SetRaceInfo(AFlyingBroom* CallFunc_GetPlayerBroom_ReturnValue, bool CallFunc_IsRaceMissionActive_ReturnValue, int32_t CallFunc_GetNumberOfGates_ReturnValue, float CallFunc_GetBestRacer_Blueprint_OutBestTime, FName CallFunc_GetBestRacer_Blueprint_ReturnValue) {}
void UUI_BP_BroomRaceHUD_C::RaceComplete(bool Abandoned, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetTotalPenaltyTime_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32_t CallFunc_FTrunc_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Fraction_ReturnValue) {}
void UUI_BP_BroomRaceHUD_C::PlayCountdownAnim(int32_t CountdownNum, int32_t Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.PlayCountdownAnim"));
    struct Params_PlayCountdownAnim {
        int32_t CountdownNum; // 0x0
        int32_t Temp_int_Variable; // 0x4
        float Temp_float_Variable; // 0x8
        float Temp_float_Variable_1; // 0xc
        float Temp_float_Variable_2; // 0x10
        float Temp_float_Variable_3; // 0x14
        float K2Node_Select_Default; // 0x18
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x1c
        UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_PlayCountdownAnim params{};
    params.CountdownNum = (int32_t)CountdownNum;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_float_Variable = (float)Temp_float_Variable;
    params.Temp_float_Variable_1 = (float)Temp_float_Variable_1;
    params.Temp_float_Variable_2 = (float)Temp_float_Variable_2;
    params.Temp_float_Variable_3 = (float)Temp_float_Variable_3;
    params.K2Node_Select_Default = (float)K2Node_Select_Default;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimationTimeRange_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationTimeRange_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::ExecuteUbergraph_UI_BP_BroomRaceHUD(int32_t EntryPoint) {}
void UUI_BP_BroomRaceHUD_C::WidgetAnimationEvt_BestTimeResultsOn_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.WidgetAnimationEvt_BestTimeResultsOn_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_BestTimeResultsOn_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_BestTimeResultsOn_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::OnMissedGatePenalty(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnMissedGatePenalty"));
    struct Params_OnMissedGatePenalty {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_OnMissedGatePenalty params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::WidgetAnimationEvt_BRResultsPopupOn_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.WidgetAnimationEvt_BRResultsPopupOn_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_BRResultsPopupOn_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_BRResultsPopupOn_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::BroomBoost(UObject* Caller, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.BroomBoost"));
    struct Params_BroomBoost {
        UObject* Caller; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_BroomBoost params{};
    params.Caller = (UObject*)Caller;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::OnOutroStarted0(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::OnOutroEnded0(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::WidgetAnimationEvt_ShowTimeSummary_K2Node_WidgetAnimationEvent_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.WidgetAnimationEvt_ShowTimeSummary_K2Node_WidgetAnimationEvent_2"));
    struct Params_WidgetAnimationEvt_ShowTimeSummary_K2Node_WidgetAnimationEvent_2 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_ShowTimeSummary_K2Node_WidgetAnimationEvent_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::Show() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.Show"));
    struct Params_Show {
    }; // Size: 0x0
    Params_Show params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::OnRaceCountdownBegin(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceCountdownBegin"));
    struct Params_OnRaceCountdownBegin {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_OnRaceCountdownBegin params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::OnRaceCountdownUpdate(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceCountdownUpdate"));
    struct Params_OnRaceCountdownUpdate {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_OnRaceCountdownUpdate params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::OnRaceCountdownComplete(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceCountdownComplete"));
    struct Params_OnRaceCountdownComplete {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_OnRaceCountdownComplete params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::OnHitGate(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnHitGate"));
    struct Params_OnHitGate {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_OnHitGate params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::OnRaceFinished(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceFinished"));
    struct Params_OnRaceFinished {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnRaceFinished params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::HighBoostGainStart(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.HighBoostGainStart"));
    struct Params_HighBoostGainStart {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HighBoostGainStart params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::BroomBoostEnd(UObject* Caller, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.BroomBoostEnd"));
    struct Params_BroomBoostEnd {
        UObject* Caller; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_BroomBoostEnd params{};
    params.Caller = (UObject*)Caller;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::OnRaceAbandoned(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.OnRaceAbandoned"));
    struct Params_OnRaceAbandoned {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnRaceAbandoned params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomRaceHUD_C::PopupClosedEvent(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_BroomRaceHUD.UI_BP_BroomRaceHUD_C.PopupClosedEvent"));
    struct Params_PopupClosedEvent {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_PopupClosedEvent params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
