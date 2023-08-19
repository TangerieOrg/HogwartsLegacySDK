#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UFunction.hpp"
#include "UUI_BP_MoneyBar_C.hpp"
#include "UUI_BP_MoneyNotification_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_MoneyNotification_C::WidgetAnimationEvt_AnimateOut_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.WidgetAnimationEvt_AnimateOut_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_AnimateOut_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_AnimateOut_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyNotification_C::WidgetAnimationEvt_AnimateIn_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.WidgetAnimationEvt_AnimateIn_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_AnimateIn_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_AnimateIn_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
UUI_BP_MoneyNotification_C* UUI_BP_MoneyNotification_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Notifications/UI_BP_MoneyNotification.UI_BP_MoneyNotification_C");
    return (UUI_BP_MoneyNotification_C*)res;
}
void UUI_BP_MoneyNotification_C::Increment(int32_t AddVal, bool& Success, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.Increment"));
    struct Params_Increment {
        int32_t AddVal; // 0x0
        bool Success; // 0x4
        char pad_5[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0xc
        char pad_d[0x3];
        FTimerHandle CallFunc_K2_SetTimer_ReturnValue; // 0x10
        bool CallFunc_K2_IsValidTimerHandle_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Increment params{};
    params.AddVal = (int32_t)AddVal;
    params.Success = (bool)Success;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    params.CallFunc_K2_SetTimer_ReturnValue = (FTimerHandle)CallFunc_K2_SetTimer_ReturnValue;
    params.CallFunc_K2_IsValidTimerHandle_ReturnValue = (bool)CallFunc_K2_IsValidTimerHandle_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
}
void UUI_BP_MoneyNotification_C::Show(int32_t Amount, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.Show"));
    struct Params_Show {
        int32_t Amount; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Show params{};
    params.Amount = (int32_t)Amount;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyNotification_C::ExecuteUbergraph_UI_BP_MoneyNotification(int32_t EntryPoint) {}
void UUI_BP_MoneyNotification_C::DurationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.DurationComplete"));
    struct Params_DurationComplete {
    }; // Size: 0x0
    Params_DurationComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyNotification_C::AnimatingOut__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.AnimatingOut__DelegateSignature"));
    struct Params_AnimatingOut__DelegateSignature {
    }; // Size: 0x0
    Params_AnimatingOut__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MoneyNotification_C::NotificationComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_MoneyNotification.UI_BP_MoneyNotification_C.NotificationComplete__DelegateSignature"));
    struct Params_NotificationComplete__DelegateSignature {
    }; // Size: 0x0
    Params_NotificationComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
