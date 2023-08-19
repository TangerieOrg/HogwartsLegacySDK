#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UParallaxWidget : public UUserWidget {
public:
    float SlideRate; // 0x268
    char pad_26c[0x1c];
    static UParallaxWidget* StaticClass();
    void SyncParallaxToCursor(UCanvasPanelSlot* ParallaxingObject);
    void SetInitialCursorPosition(UCanvasPanelSlot* ParallaxingObject);
    void IgnoreParallax();
    UCanvasPanelSlot* GetSlot();
    void ApplyParallaxEffect(UCanvasPanelSlot* ParallaxingObject);
    void ApplyParallax();
}; // Size: 0x288
#pragma pack(pop)
