#pragma once
#include <cstdint>
#include "EMenuReaderInterruptType.hpp"
#include "UUMGFocusWidget.hpp"
class UObject;
#pragma pack(push, 1)
class UPhoenixUserWidget : public UUMGFocusWidget {
public:
    char pad_2c8[0x40];
    float DefaultIntroDuration; // 0x308
    float DefaultOutroDuration; // 0x30c
    bool InterruptMenuReaderOnDestruct; // 0x310
    char pad_311[0x17];
    static UPhoenixUserWidget* StaticClass();
    void TriggerOutro(int32_t OutroType);
    void TriggerIntro(int32_t IntroType);
    void TriggerCustomOutro(int32_t OutroType, float OutroDuration);
    void TriggerCustomIntro(int32_t IntroType, float IntroDuration);
    void ReadMenu(int32_t DepthLevel, EMenuReaderInterruptType InterruptType, UObject* InterruptOwnerFilter);
    void PhoenixUserWidgetIntEvent__DelegateSignature(UPhoenixUserWidget* PhoenixUserWidget, int32_t IntParam);
    void OverrideInitialIntroType(int32_t IntroType);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnIntroEnded(int32_t IntroType);
    bool IsTransitionInProgress();
    bool IsCurrentTransitionAnIntro();
    void InterruptMenuReader(EMenuReaderInterruptType InterruptType, UObject* InterruptOwnerFilter);
    int32_t GetCurrentTransitionType();
    float GetCurrentTransitionProgress();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel);
}; // Size: 0x328
#pragma pack(pop)
