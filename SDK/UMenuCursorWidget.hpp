#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UMenuCursorWidget : public UUserWidget {
public:
    bool IsScaledDown; // 0x268
    bool DefaultExpandState; // 0x269
    bool FadeInStarted; // 0x26a
    bool FadeOutStarted; // 0x26b
    bool DoneFading; // 0x26c
    char pad_26d[0x3];
    float FadeSpeed; // 0x270
    float DefaultFadeSpeed; // 0x274
    static UMenuCursorWidget* StaticClass();
    void SetTooltipExpandState(bool IsExpanded, bool ShouldAnimate);
    void ScaleCursor(bool IsHover);
    void ResetTooltipState();
    void OnScaleCursor();
    void Cursor_FadeOutDone();
    void Cursor_FadeOut();
    void Cursor_FadeInDone();
    void Cursor_FadeIn();
}; // Size: 0x278
#pragma pack(pop)
