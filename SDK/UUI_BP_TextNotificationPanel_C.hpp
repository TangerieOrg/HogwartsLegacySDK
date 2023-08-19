#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UVerticalBox;
class UObject;
#pragma pack(push, 1)
class UUI_BP_TextNotificationPanel_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UVerticalBox* Container; // 0x2f0
    float DefaultTimeToLive; // 0x2f8
    char pad_2fc[0x4];
    TArray<FString> PendingNotifications; // 0x300
    static UUI_BP_TextNotificationPanel_C* StaticClass();
    void Construct();
    void AddNotification(FString NotificationText);
    void OnDisplayTextTickerNotification(UObject* Caller);
    void ExecuteUbergraph_UI_BP_TextNotificationPanel(int32_t EntryPoint);
}; // Size: 0x310
#pragma pack(pop)
