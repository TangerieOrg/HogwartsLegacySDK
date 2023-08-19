#pragma once
#include <cstdint>
#include "FChallengeNotificationData.hpp"
#include "FCollectionNotificationData.hpp"
#include "FPickupNotificationData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UNotificationPanelWidget.hpp"
class UUI_BP_ChallengeNotification_C;
class UUI_BP_CollectionNotification_C;
class UUI_BP_MoneyNotification_C;
class UUI_BP_NotificationItem_C;
#pragma pack(push, 1)
class UUI_BP_NotificationPanel_C : public UNotificationPanelWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3a8
    UUI_BP_ChallengeNotification_C* ChallengeNotification; // 0x3b0
    UUI_BP_CollectionNotification_C* CollectionNotification; // 0x3b8
    UUI_BP_MoneyNotification_C* MoneyNotification; // 0x3c0
    static UUI_BP_NotificationPanel_C* StaticClass();
    void AddPickupNotification0(FPickupNotificationData ItemData);
    void AddChallengeCompleteNotification0(FChallengeNotificationData ItemData);
    void AddCollectionKnownNotification0(FCollectionNotificationData ItemData);
    void AddCollectionObtainedNotification0(FCollectionNotificationData ItemData);
    void AddChallengeUpdatedNotification0(FChallengeNotificationData ItemData);
    void IncrementCurrentChallengeUpdate0(FChallengeNotificationData ItemData);
    void PickupNotificationComplete(UUI_BP_NotificationItem_C* Item);
    void OnInitialized();
    void AddMoneyNotification0(FPickupNotificationData ItemData);
    void BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_0_NotificationComplete__DelegateSignature();
    void BndEvt__UI_BP_NotificationPanel_MoneyNotification_K2Node_ComponentBoundEvent_1_AnimatingOut__DelegateSignature();
    void IncrementCurrentMoneyNotification0(int32_t Amount);
    void BndEvt__UI_BP_NotificationPanel_ChallengeNotification_K2Node_ComponentBoundEvent_2_OutAnimationStarted__DelegateSignature();
    void ExecuteUbergraph_UI_BP_NotificationPanel(int32_t EntryPoint, FCollectionNotificationData K2Node_Event_ItemData_3);
}; // Size: 0x3c8
#pragma pack(pop)
