#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UScreenFadeWidget : public UUserWidget {
public:
    bool FadeInStarted; // 0x268
    bool FadeOutStarted; // 0x269
    bool DoneFading; // 0x26a
    char pad_26b[0x1];
    float FadeSpeed; // 0x26c
    float DefaultFadeSpeed; // 0x270
    char pad_274[0x5c];
    static UScreenFadeWidget* StaticClass();
    void UI_SetManualFade(float Opacity);
    bool UI_IsFading();
    float UI_GetCurrentFade();
    void UI_FadeOutDone();
    void UI_FadeOut();
    void UI_FadeInDone();
    void UI_FadeIn();
    void SetFadeColor(FLinearColor TargetColor);
    void OnCurtainLowered();
}; // Size: 0x2d0
#pragma pack(pop)
