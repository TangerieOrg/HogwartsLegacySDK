#pragma once
#include <cstdint>
#include "UHUDElementGroup.hpp"
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UZoneNotification : public UHUDElementGroup {
public:
    UPhoenixTextBlock* ZoneNotification_Header; // 0x2e8
    UPhoenixTextBlock* ZoneNotification_Label; // 0x2f0
    char pad_2f8[0x8];
    static UZoneNotification* StaticClass();
    void Notify(FName Header_Name, FName Label_Name, FName Image_Left, FName Image_Right, float duration_seconds, bool PlaySound);
    void HideNotificationBP();
    void DisplayNotificationBP(bool PlaySound);
}; // Size: 0x300
#pragma pack(pop)
