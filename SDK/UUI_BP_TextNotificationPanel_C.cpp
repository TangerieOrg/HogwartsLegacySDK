#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UObject.hpp"
#include "UUI_BP_TextNotificationPanel_C.hpp"
#include "UVerticalBox.hpp"
UUI_BP_TextNotificationPanel_C* UUI_BP_TextNotificationPanel_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Notifications/UI_BP_TextNotificationPanel.UI_BP_TextNotificationPanel_C");
    return (UUI_BP_TextNotificationPanel_C*)res;
}
void UUI_BP_TextNotificationPanel_C::AddNotification(FString NotificationText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_TextNotificationPanel.UI_BP_TextNotificationPanel_C.AddNotification"));
    struct Params_AddNotification {
        FString NotificationText; // 0x0
    }; // Size: 0x10
    Params_AddNotification params{};
    params.NotificationText = (FString)NotificationText;
    ProcessEvent(func, &params);
}
void UUI_BP_TextNotificationPanel_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_TextNotificationPanel.UI_BP_TextNotificationPanel_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_TextNotificationPanel_C::OnDisplayTextTickerNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_TextNotificationPanel.UI_BP_TextNotificationPanel_C.OnDisplayTextTickerNotification"));
    struct Params_OnDisplayTextTickerNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnDisplayTextTickerNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_TextNotificationPanel_C::ExecuteUbergraph_UI_BP_TextNotificationPanel(int32_t EntryPoint) {}
