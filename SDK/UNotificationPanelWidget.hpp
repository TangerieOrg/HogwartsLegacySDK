#pragma once
#include <cstdint>
#include "FChallengeNotificationData.hpp"
#include "FCollectionNotificationData.hpp"
#include "FPickupNotificationData.hpp"
#include "UHUDElementGroup.hpp"
class UPooledVerticalBox;
class UObject;
#pragma pack(push, 1)
class UNotificationPanelWidget : public UHUDElementGroup {
public:
    UPooledVerticalBox* NotificationsBox; // 0x2e8
    bool IsActiveChallengeUpdateIncrementable; // 0x2f0
    bool IsActiveMoneyNotificationIncrementable; // 0x2f1
    char pad_2f2[0xb6];
    static UNotificationPanelWidget* StaticClass();
    void RequestCollectionObtainedNotification(FCollectionNotificationData NewItem);
    void RequestCollectionKnownNotification(FCollectionNotificationData NewItem);
    void RequestChallengeUpdatedNotification(FChallengeNotificationData NewItem);
    void RequestChallengeCompleteNotification(FChallengeNotificationData NewItem);
    void OnNotificationAborted(UObject* Caller);
    void OnDisplayPickupNotification(UObject* Caller);
    void OnDisplayMoneyNotification(UObject* Caller);
    void OnDisplayCollectionObtainedNotification(UObject* Caller);
    void OnDisplayCollectionKnownNotification(UObject* Caller);
    void OnDisplayChallengeUpdatedNotification(UObject* Caller);
    void OnDisplayChallengeCompleteNotification(UObject* Caller);
    void ItemCollected(FPickupNotificationData NewItem);
    void IncrementCurrentMoneyNotification(int32_t Amount);
    void IncrementCurrentChallengeUpdate(FChallengeNotificationData ItemData);
    void AddPickupNotification(FPickupNotificationData ItemData);
    void AddMoneyNotification(FPickupNotificationData ItemData);
    void AddCollectionObtainedNotification(FCollectionNotificationData ItemData);
    void AddCollectionKnownNotification(FCollectionNotificationData ItemData);
    void AddChallengeUpdatedNotification(FChallengeNotificationData ItemData);
    void AddChallengeCompleteNotification(FChallengeNotificationData ItemData);
}; // Size: 0x3a8
#pragma pack(pop)
