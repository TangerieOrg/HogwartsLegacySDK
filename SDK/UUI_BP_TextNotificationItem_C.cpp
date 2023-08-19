#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_TextNotificationItem_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_TextNotificationItem_C::WidgetAnimationEvt_hideNotification_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.WidgetAnimationEvt_hideNotification_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_hideNotification_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_hideNotification_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
UUI_BP_TextNotificationItem_C* UUI_BP_TextNotificationItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Notifications/UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C");
    return (UUI_BP_TextNotificationItem_C*)res;
}
void UUI_BP_TextNotificationItem_C::SetText(FString newText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.SetText"));
    struct Params_SetText {
        FString newText; // 0x0
    }; // Size: 0x10
    Params_SetText params{};
    params.newText = (FString)newText;
    ProcessEvent(func, &params);
}
void UUI_BP_TextNotificationItem_C::ExecuteUbergraph_UI_BP_TextNotificationItem(int32_t EntryPoint, UUIManager* CallFunc_Get_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString K2Node_CustomEvent_NotificationText, float K2Node_CustomEvent_TimeToLive, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.ExecuteUbergraph_UI_BP_TextNotificationItem"));
    struct Params_ExecuteUbergraph_UI_BP_TextNotificationItem {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x10
        char pad_11[0x7];
        FString K2Node_CustomEvent_NotificationText; // 0x18
        float K2Node_CustomEvent_TimeToLive; // 0x28
        FGeometry K2Node_Event_MyGeometry; // 0x2c
        float K2Node_Event_InDeltaTime; // 0x64
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x68
        char pad_6c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x70
    }; // Size: 0x78
    Params_ExecuteUbergraph_UI_BP_TextNotificationItem params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.K2Node_CustomEvent_NotificationText = (FString)K2Node_CustomEvent_NotificationText;
    params.K2Node_CustomEvent_TimeToLive = (float)K2Node_CustomEvent_TimeToLive;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_TextNotificationItem_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_TextNotificationItem_C::Initialize(FString NotificationText, float TimeToLive) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.Initialize"));
    struct Params_Initialize {
        FString NotificationText; // 0x0
        float TimeToLive; // 0x10
    }; // Size: 0x14
    Params_Initialize params{};
    params.NotificationText = (FString)NotificationText;
    params.TimeToLive = (float)TimeToLive;
    ProcessEvent(func, &params);
}
void UUI_BP_TextNotificationItem_C::Tick0(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_TextNotificationItem.UI_BP_TextNotificationItem_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
