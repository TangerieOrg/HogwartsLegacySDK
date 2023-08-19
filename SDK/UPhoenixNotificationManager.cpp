#include "ENotificationCategory.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixNotificationManager.hpp"
bool UPhoenixNotificationManager::IsNotificationActive(ENotificationCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.IsNotificationActive"));
    struct Params_IsNotificationActive {
        ENotificationCategory Category; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsNotificationActive params{};
    params.Category = (ENotificationCategory)Category;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPhoenixNotificationManager* UPhoenixNotificationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixNotificationManager");
    return (UPhoenixNotificationManager*)res;
}
void UPhoenixNotificationManager::QueueNotification(UObject* Owner, ENotificationCategory Category, FString CallbackName, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.QueueNotification"));
    struct Params_QueueNotification {
        UObject* Owner; // 0x0
        ENotificationCategory Category; // 0x8
        char pad_9[0x7];
        FString CallbackName; // 0x10
        int32_t Priority; // 0x20
    }; // Size: 0x24
    Params_QueueNotification params{};
    params.Owner = (UObject*)Owner;
    params.Category = (ENotificationCategory)Category;
    params.CallbackName = (FString)CallbackName;
    params.Priority = (int32_t)Priority;
    ProcessEvent(func, &params);
}
bool UPhoenixNotificationManager::IsNotificationPending(ENotificationCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.IsNotificationPending"));
    struct Params_IsNotificationPending {
        ENotificationCategory Category; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsNotificationPending params{};
    params.Category = (ENotificationCategory)Category;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<ENotificationCategory> UPhoenixNotificationManager::GetBlockingCategories(ENotificationCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.GetBlockingCategories"));
    struct Params_GetBlockingCategories {
        ENotificationCategory Category; // 0x0
        char pad_1[0x7];
        TArray<ENotificationCategory> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetBlockingCategories params{};
    params.Category = (ENotificationCategory)Category;
    ProcessEvent(func, &params);
    return (TArray<ENotificationCategory>)params.ReturnValue;
}
void UPhoenixNotificationManager::NotificationComplete(ENotificationCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.NotificationComplete"));
    struct Params_NotificationComplete {
        ENotificationCategory Category; // 0x0
    }; // Size: 0x1
    Params_NotificationComplete params{};
    params.Category = (ENotificationCategory)Category;
    ProcessEvent(func, &params);
}
void UPhoenixNotificationManager::PauseNotifications(bool ShouldPause, UObject* Provider, FName ProviderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.PauseNotifications"));
    struct Params_PauseNotifications {
        bool ShouldPause; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
        FName ProviderName; // 0x10
    }; // Size: 0x18
    Params_PauseNotifications params{};
    params.ShouldPause = (bool)ShouldPause;
    params.Provider = (UObject*)Provider;
    params.ProviderName = (FName)ProviderName;
    ProcessEvent(func, &params);
}
void UPhoenixNotificationManager::PauseNotificationCategory(bool ShouldPause, ENotificationCategory Category, UObject* Provider, FName ProviderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.PauseNotificationCategory"));
    struct Params_PauseNotificationCategory {
        bool ShouldPause; // 0x0
        ENotificationCategory Category; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
        FName ProviderName; // 0x10
    }; // Size: 0x18
    Params_PauseNotificationCategory params{};
    params.ShouldPause = (bool)ShouldPause;
    params.Category = (ENotificationCategory)Category;
    params.Provider = (UObject*)Provider;
    params.ProviderName = (FName)ProviderName;
    ProcessEvent(func, &params);
}
int32_t UPhoenixNotificationManager::GetConcurrentNotifications(ENotificationCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.GetConcurrentNotifications"));
    struct Params_GetConcurrentNotifications {
        ENotificationCategory Category; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetConcurrentNotifications params{};
    params.Category = (ENotificationCategory)Category;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UPhoenixNotificationManager::ClearPendingNotificationsInCategory(ENotificationCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.ClearPendingNotificationsInCategory"));
    struct Params_ClearPendingNotificationsInCategory {
        ENotificationCategory Category; // 0x0
    }; // Size: 0x1
    Params_ClearPendingNotificationsInCategory params{};
    params.Category = (ENotificationCategory)Category;
    ProcessEvent(func, &params);
}
void UPhoenixNotificationManager::ClearActiveNotificationsInCategory(ENotificationCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixNotificationManager.ClearActiveNotificationsInCategory"));
    struct Params_ClearActiveNotificationsInCategory {
        ENotificationCategory Category; // 0x0
    }; // Size: 0x1
    Params_ClearActiveNotificationsInCategory params{};
    params.Category = (ENotificationCategory)Category;
    ProcessEvent(func, &params);
}
