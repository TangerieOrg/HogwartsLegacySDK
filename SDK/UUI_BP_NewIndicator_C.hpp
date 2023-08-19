#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_NewIndicator_C : public UUserWidget {
public:
    UWidgetAnimation* NewPulse; // 0x268
    UWidgetAnimation* ShowNewIndicator; // 0x270
    UCanvasPanel* NewItem; // 0x278
    bool IsShowing; // 0x280
    char pad_281[0x7];
    static UUI_BP_NewIndicator_C* StaticClass();
    void StopPulse();
    void HideAnimationFinished();
    void HideNewItem();
    void PulseNewIcon(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowNewItem();
}; // Size: 0x288
#pragma pack(pop)
