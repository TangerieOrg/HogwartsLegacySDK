#include "AHUD.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UNotificationWidget.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_ChallengeNotification_C.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_ChallengeNotification_C* UUI_BP_ChallengeNotification_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Notifications/UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C");
    return (UUI_BP_ChallengeNotification_C*)res;
}
void UUI_BP_ChallengeNotification_C::IncrementNotification(int32_t NewCount) {}
void UUI_BP_ChallengeNotification_C::SetNotificationData(FName ChallengeID, FName Category, int32_t CurrentCount, int32_t MaxCount, int32_t TempTier, FString StrCategory, FString tempChallengeIcon, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FString CallFunc_Conv_NameToString_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array) {}
void UUI_BP_ChallengeNotification_C::WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2"));
    struct Params_WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_NotificationOUT_K2Node_WidgetAnimationEvent_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeNotification_C::ClearKnowledgeFlag(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.ClearKnowledgeFlag"));
    struct Params_ClearKnowledgeFlag {
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x0
        AHUD* CallFunc_GetHUD_ReturnValue; // 0x8
        APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_ClearKnowledgeFlag params{};
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetHUD_ReturnValue = (AHUD*)CallFunc_GetHUD_ReturnValue;
    params.K2Node_DynamicCast_AsPhoenix_HUD = (APhoenixHUD*)K2Node_DynamicCast_AsPhoenix_HUD;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeNotification_C::WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeNotification_C::WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_NotificationIN_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeNotification_C::ShowNotification() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.ShowNotification"));
    struct Params_ShowNotification {
    }; // Size: 0x0
    Params_ShowNotification params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeNotification_C::ChallengeNotificationIconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.ChallengeNotificationIconLoaded"));
    struct Params_ChallengeNotificationIconLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_ChallengeNotificationIconLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeNotification_C::LifetimeComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.LifetimeComplete"));
    struct Params_LifetimeComplete {
    }; // Size: 0x0
    Params_LifetimeComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ChallengeNotification_C::ExecuteUbergraph_UI_BP_ChallengeNotification(int32_t EntryPoint, FTimerHandle CallFunc_K2_InvalidateTimerHandle_ReturnValue) {}
void UUI_BP_ChallengeNotification_C::OutAnimationStarted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_ChallengeNotification.UI_BP_ChallengeNotification_C.OutAnimationStarted__DelegateSignature"));
    struct Params_OutAnimationStarted__DelegateSignature {
    }; // Size: 0x0
    Params_OutAnimationStarted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
