#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
class UImage;
class ABiped_Player;
#pragma pack(push, 1)
class UUI_BP_OutOfAreaNotification_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* PulseCountdownText; // 0x2f0
    UWidgetAnimation* hideNotification; // 0x2f8
    UWidgetAnimation* PulseText; // 0x300
    UWidgetAnimation* ShowNotification; // 0x308
    UPhoenixTextBlock* countdown; // 0x310
    UPhoenixTextBlock* notificationMessage; // 0x318
    UImage* redScrim; // 0x320
    bool isReadyForCountdown; // 0x328
    bool HasCountdownStarted; // 0x329
    char pad_32a[0x2];
    int32_t CountTime; // 0x32c
    int32_t currentCountTime; // 0x330
    char pad_334[0x4];
    FTimerHandle CountdownTimer; // 0x338
    bool DesiredActiveState; // 0x340
    char pad_341[0x7];
    static UUI_BP_OutOfAreaNotification_C* StaticClass();
    void StopNotification(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void UpdateNotificationTime(float NewTime, int32_t CallFunc_FCeil_ReturnValue);
    void StartNotification(FString ErrorMessage, float CountdownTime, int32_t CallFunc_FCeil_ReturnValue);
    void WidgetAnimationEvt_showNotification_K2Node_WidgetAnimationEvent_0();
    void Destruct();
    void ExecuteUbergraph_UI_BP_OutOfAreaNotification(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}; // Size: 0x348
#pragma pack(pop)
