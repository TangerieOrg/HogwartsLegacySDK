#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
class UUIManager;
#pragma pack(push, 1)
class UUI_BP_TextNotificationItem_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* hideNotification; // 0x270
    UWidgetAnimation* ShowNotification; // 0x278
    UPhoenixTextBlock* NotificationText; // 0x280
    float TimeToLive; // 0x288
    float CurrentLifespan; // 0x28c
    FString TextKey; // 0x290
    bool IsCompleted; // 0x2a0
    char pad_2a1[0x7];
    static UUI_BP_TextNotificationItem_C* StaticClass();
    void SetText(FString newText);
    void Construct0();
    void Tick0(FGeometry MyGeometry, float InDeltaTime);
    void Initialize(FString NotificationText, float TimeToLive);
    void WidgetAnimationEvt_hideNotification_K2Node_WidgetAnimationEvent_0();
    void ExecuteUbergraph_UI_BP_TextNotificationItem(int32_t EntryPoint, UUIManager* CallFunc_Get_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString K2Node_CustomEvent_NotificationText, float K2Node_CustomEvent_TimeToLive, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}; // Size: 0x2a8
#pragma pack(pop)
