#include "FChallengeNotificationData.hpp"
#include "FCollectionNotificationData.hpp"
#include "FPickupNotificationData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UNotificationPanelWidget.hpp"
#include "UUI_BP_ChallengeNotification_C.hpp"
#include "UUI_BP_CollectionNotification_C.hpp"
#include "UUI_BP_MoneyNotification_C.hpp"
#include "UUI_BP_NotificationItem_C.hpp"
#include "UUI_BP_NotificationPanel_C.hpp"
void UUI_BP_NotificationPanel_C::BndEvt__UI_BP_NotificationPanel_ChallengeNotification_K2Node_ComponentBoundEvent_2_OutAnimationStarted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.BndEvt__UI_BP_NotificationPanel_ChallengeNotification_K2Node_ComponentBoundEvent_2_OutAnimationStarted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NotificationPanel_ChallengeNotification_K2Node_ComponentBoundEvent_2_OutAnimationStarted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_NotificationPanel_ChallengeNotification_K2Node_ComponentBoundEvent_2_OutAnimationStarted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::AddCollectionKnownNotification0(FCollectionNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddCollectionKnownNotification"));
    struct Params_AddCollectionKnownNotification {
        FCollectionNotificationData ItemData; // 0x0
    }; // Size: 0x10
    Params_AddCollectionKnownNotification params{};
    params.ItemData = (FCollectionNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::AddChallengeCompleteNotification0(FChallengeNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddChallengeCompleteNotification"));
    struct Params_AddChallengeCompleteNotification {
        FChallengeNotificationData ItemData; // 0x0
    }; // Size: 0x18
    Params_AddChallengeCompleteNotification params{};
    params.ItemData = (FChallengeNotificationData)ItemData;
    ProcessEvent(func, &params);
}
UUI_BP_NotificationPanel_C* UUI_BP_NotificationPanel_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C");
    return (UUI_BP_NotificationPanel_C*)res;
}
void UUI_BP_NotificationPanel_C::AddPickupNotification0(FPickupNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddPickupNotification"));
    struct Params_AddPickupNotification {
        FPickupNotificationData ItemData; // 0x0
    }; // Size: 0x60
    Params_AddPickupNotification params{};
    params.ItemData = (FPickupNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::AddCollectionObtainedNotification0(FCollectionNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddCollectionObtainedNotification"));
    struct Params_AddCollectionObtainedNotification {
        FCollectionNotificationData ItemData; // 0x0
    }; // Size: 0x10
    Params_AddCollectionObtainedNotification params{};
    params.ItemData = (FCollectionNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::PickupNotificationComplete(UUI_BP_NotificationItem_C* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.PickupNotificationComplete"));
    struct Params_PickupNotificationComplete {
        UUI_BP_NotificationItem_C* Item; // 0x0
    }; // Size: 0x8
    Params_PickupNotificationComplete params{};
    params.Item = (UUI_BP_NotificationItem_C*)Item;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::AddChallengeUpdatedNotification0(FChallengeNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddChallengeUpdatedNotification"));
    struct Params_AddChallengeUpdatedNotification {
        FChallengeNotificationData ItemData; // 0x0
    }; // Size: 0x18
    Params_AddChallengeUpdatedNotification params{};
    params.ItemData = (FChallengeNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::IncrementCurrentChallengeUpdate0(FChallengeNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.IncrementCurrentChallengeUpdate"));
    struct Params_IncrementCurrentChallengeUpdate {
        FChallengeNotificationData ItemData; // 0x0
    }; // Size: 0x18
    Params_IncrementCurrentChallengeUpdate params{};
    params.ItemData = (FChallengeNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::AddMoneyNotification0(FPickupNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.AddMoneyNotification"));
    struct Params_AddMoneyNotification {
        FPickupNotificationData ItemData; // 0x0
    }; // Size: 0x60
    Params_AddMoneyNotification params{};
    params.ItemData = (FPickupNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_0_NotificationComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_0_NotificationComplete__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_0_NotificationComplete__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_0_NotificationComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_1_AnimatingOut__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_1_AnimatingOut__DelegateSignature"));
    struct Params_BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_1_AnimatingOut__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_1_AnimatingOut__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::IncrementCurrentMoneyNotification0(int32_t Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Notifications/UI_BP_NotificationPanel.UI_BP_NotificationPanel_C.IncrementCurrentMoneyNotification"));
    struct Params_IncrementCurrentMoneyNotification {
        int32_t Amount; // 0x0
    }; // Size: 0x4
    Params_IncrementCurrentMoneyNotification params{};
    params.Amount = (int32_t)Amount;
    ProcessEvent(func, &params);
}
void UUI_BP_NotificationPanel_C::ExecuteUbergraph_UI_BP_NotificationPanel(int32_t EntryPoint, FCollectionNotificationData K2Node_Event_ItemData_3) {}
