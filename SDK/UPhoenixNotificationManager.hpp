#pragma once
#include <cstdint>
#include "ENotificationCategory.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPhoenixNotificationManager : public UObject {
public:
    char pad_28[0x170];
    static UPhoenixNotificationManager* StaticClass();
    void QueueNotification(UObject* Owner, ENotificationCategory Category, FString CallbackName, int32_t Priority);
    void PauseNotifications(bool ShouldPause, UObject* Provider, FName ProviderName);
    void PauseNotificationCategory(bool ShouldPause, ENotificationCategory Category, UObject* Provider, FName ProviderName);
    void NotificationComplete(ENotificationCategory Category);
    bool IsNotificationPending(ENotificationCategory Category);
    bool IsNotificationActive(ENotificationCategory Category);
    int32_t GetConcurrentNotifications(ENotificationCategory Category);
    TArray<ENotificationCategory> GetBlockingCategories(ENotificationCategory Category);
    void ClearPendingNotificationsInCategory(ENotificationCategory Category);
    void ClearActiveNotificationsInCategory(ENotificationCategory Category);
}; // Size: 0x198
#pragma pack(pop)
