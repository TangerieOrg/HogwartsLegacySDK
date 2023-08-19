#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_ErrorMessage_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_ErrorMessage_C* UUI_BP_ErrorMessage_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Notifications/UI_BP_ErrorMessage.UI_BP_ErrorMessage_C");
    return (UUI_BP_ErrorMessage_C*)res;
}
void UUI_BP_ErrorMessage_C::HermesDisplayErrorMessage(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ErrorMessage.UI_BP_ErrorMessage_C.HermesDisplayErrorMessage"));
    struct Params_HermesDisplayErrorMessage {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_HermesDisplayErrorMessage params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_ErrorMessage_C::DisplayErrorMessage(FString Key, float DisplayTime, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ErrorMessage.UI_BP_ErrorMessage_C.DisplayErrorMessage"));
    struct Params_DisplayErrorMessage {
        FString Key; // 0x0
        float DisplayTime; // 0x10
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x14
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x18
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x1c
        bool K2Node_SwitchString_CmpSuccess; // 0x20
        char pad_21[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x28
    }; // Size: 0x30
    Params_DisplayErrorMessage params{};
    params.Key = (FString)Key;
    params.DisplayTime = (float)DisplayTime;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ErrorMessage_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ErrorMessage.UI_BP_ErrorMessage_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ErrorMessage_C::WidgetAnimationEvt_ShowErrorMessage_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ErrorMessage.UI_BP_ErrorMessage_C.WidgetAnimationEvt_ShowErrorMessage_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_ShowErrorMessage_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_ShowErrorMessage_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ErrorMessage_C::ExecuteUbergraph_UI_BP_ErrorMessage(int32_t EntryPoint) {}
