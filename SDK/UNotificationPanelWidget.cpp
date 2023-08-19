#include "FChallengeNotificationData.hpp"
#include "FCollectionNotificationData.hpp"
#include "FPickupNotificationData.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UNotificationPanelWidget.hpp"
#include "UObject.hpp"
#include "UPooledVerticalBox.hpp"
void UNotificationPanelWidget::OnDisplayPickupNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.OnDisplayPickupNotification"));
    struct Params_OnDisplayPickupNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnDisplayPickupNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
UNotificationPanelWidget* UNotificationPanelWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NotificationPanelWidget");
    return (UNotificationPanelWidget*)res;
}
void UNotificationPanelWidget::OnDisplayMoneyNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.OnDisplayMoneyNotification"));
    struct Params_OnDisplayMoneyNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnDisplayMoneyNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::RequestChallengeUpdatedNotification(FChallengeNotificationData NewItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.RequestChallengeUpdatedNotification"));
    struct Params_RequestChallengeUpdatedNotification {
        FChallengeNotificationData NewItem; // 0x0
    }; // Size: 0x18
    Params_RequestChallengeUpdatedNotification params{};
    params.NewItem = (FChallengeNotificationData)NewItem;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::RequestCollectionObtainedNotification(FCollectionNotificationData NewItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.RequestCollectionObtainedNotification"));
    struct Params_RequestCollectionObtainedNotification {
        FCollectionNotificationData NewItem; // 0x0
    }; // Size: 0x10
    Params_RequestCollectionObtainedNotification params{};
    params.NewItem = (FCollectionNotificationData)NewItem;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::RequestCollectionKnownNotification(FCollectionNotificationData NewItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.RequestCollectionKnownNotification"));
    struct Params_RequestCollectionKnownNotification {
        FCollectionNotificationData NewItem; // 0x0
    }; // Size: 0x10
    Params_RequestCollectionKnownNotification params{};
    params.NewItem = (FCollectionNotificationData)NewItem;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::IncrementCurrentChallengeUpdate(FChallengeNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.IncrementCurrentChallengeUpdate"));
    struct Params_IncrementCurrentChallengeUpdate {
        FChallengeNotificationData ItemData; // 0x0
    }; // Size: 0x18
    Params_IncrementCurrentChallengeUpdate params{};
    params.ItemData = (FChallengeNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::RequestChallengeCompleteNotification(FChallengeNotificationData NewItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.RequestChallengeCompleteNotification"));
    struct Params_RequestChallengeCompleteNotification {
        FChallengeNotificationData NewItem; // 0x0
    }; // Size: 0x18
    Params_RequestChallengeCompleteNotification params{};
    params.NewItem = (FChallengeNotificationData)NewItem;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::OnNotificationAborted(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.OnNotificationAborted"));
    struct Params_OnNotificationAborted {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnNotificationAborted params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::OnDisplayCollectionObtainedNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.OnDisplayCollectionObtainedNotification"));
    struct Params_OnDisplayCollectionObtainedNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnDisplayCollectionObtainedNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::AddMoneyNotification(FPickupNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.AddMoneyNotification"));
    struct Params_AddMoneyNotification {
        FPickupNotificationData ItemData; // 0x0
    }; // Size: 0x60
    Params_AddMoneyNotification params{};
    params.ItemData = (FPickupNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::OnDisplayCollectionKnownNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.OnDisplayCollectionKnownNotification"));
    struct Params_OnDisplayCollectionKnownNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnDisplayCollectionKnownNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::OnDisplayChallengeUpdatedNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.OnDisplayChallengeUpdatedNotification"));
    struct Params_OnDisplayChallengeUpdatedNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnDisplayChallengeUpdatedNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::OnDisplayChallengeCompleteNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.OnDisplayChallengeCompleteNotification"));
    struct Params_OnDisplayChallengeCompleteNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OnDisplayChallengeCompleteNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::ItemCollected(FPickupNotificationData NewItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.ItemCollected"));
    struct Params_ItemCollected {
        FPickupNotificationData NewItem; // 0x0
    }; // Size: 0x60
    Params_ItemCollected params{};
    params.NewItem = (FPickupNotificationData)NewItem;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::IncrementCurrentMoneyNotification(int32_t Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.IncrementCurrentMoneyNotification"));
    struct Params_IncrementCurrentMoneyNotification {
        int32_t Amount; // 0x0
    }; // Size: 0x4
    Params_IncrementCurrentMoneyNotification params{};
    params.Amount = (int32_t)Amount;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::AddPickupNotification(FPickupNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.AddPickupNotification"));
    struct Params_AddPickupNotification {
        FPickupNotificationData ItemData; // 0x0
    }; // Size: 0x60
    Params_AddPickupNotification params{};
    params.ItemData = (FPickupNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::AddChallengeUpdatedNotification(FChallengeNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.AddChallengeUpdatedNotification"));
    struct Params_AddChallengeUpdatedNotification {
        FChallengeNotificationData ItemData; // 0x0
    }; // Size: 0x18
    Params_AddChallengeUpdatedNotification params{};
    params.ItemData = (FChallengeNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::AddCollectionObtainedNotification(FCollectionNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.AddCollectionObtainedNotification"));
    struct Params_AddCollectionObtainedNotification {
        FCollectionNotificationData ItemData; // 0x0
    }; // Size: 0x10
    Params_AddCollectionObtainedNotification params{};
    params.ItemData = (FCollectionNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::AddCollectionKnownNotification(FCollectionNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.AddCollectionKnownNotification"));
    struct Params_AddCollectionKnownNotification {
        FCollectionNotificationData ItemData; // 0x0
    }; // Size: 0x10
    Params_AddCollectionKnownNotification params{};
    params.ItemData = (FCollectionNotificationData)ItemData;
    ProcessEvent(func, &params);
}
void UNotificationPanelWidget::AddChallengeCompleteNotification(FChallengeNotificationData ItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationPanelWidget.AddChallengeCompleteNotification"));
    struct Params_AddChallengeCompleteNotification {
        FChallengeNotificationData ItemData; // 0x0
    }; // Size: 0x18
    Params_AddChallengeCompleteNotification params{};
    params.ItemData = (FChallengeNotificationData)ItemData;
    ProcessEvent(func, &params);
}
