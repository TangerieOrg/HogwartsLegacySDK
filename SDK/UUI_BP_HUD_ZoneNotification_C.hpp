#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UZoneNotification.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UBorder;
#pragma pack(push, 1)
class UUI_BP_HUD_ZoneNotification_C : public UZoneNotification {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x300
    UWidgetAnimation* hideNotification; // 0x308
    UWidgetAnimation* ShowNotification_New; // 0x310
    UBorder* textBorder; // 0x318
    static UUI_BP_HUD_ZoneNotification_C* StaticClass();
    void Construct();
    void DisplayNotificationBP0(bool PlaySound);
    void HideNotificationBP0();
    void HideAnimationFinished();
    void ExecuteUbergraph_UI_BP_HUD_ZoneNotification(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool K2Node_Event_PlaySound, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}; // Size: 0x320
#pragma pack(pop)
