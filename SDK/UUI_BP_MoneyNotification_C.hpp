#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UUI_BP_MoneyBar_C;
#pragma pack(push, 1)
class UUI_BP_MoneyNotification_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* AnimateOut; // 0x270
    UWidgetAnimation* AnimateIn; // 0x278
    UUI_BP_MoneyBar_C* UI_BP_MoneyBar; // 0x280
    float Duration; // 0x288
    char pad_28c[0x4];
    FTimerHandle DurationHandle; // 0x290
    int32_t CurrentAmount; // 0x298
    char pad_29c[0x24];
    static UUI_BP_MoneyNotification_C* StaticClass();
    void Increment(int32_t AddVal, bool& Success, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
    void Show(int32_t Amount, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void WidgetAnimationEvt_AnimateIn_K2Node_WidgetAnimationEvent_0();
    void WidgetAnimationEvt_AnimateOut_K2Node_WidgetAnimationEvent_1();
    void DurationComplete();
    void ExecuteUbergraph_UI_BP_MoneyNotification(int32_t EntryPoint);
    void AnimatingOut__DelegateSignature();
    void NotificationComplete__DelegateSignature();
}; // Size: 0x2c0
#pragma pack(pop)
