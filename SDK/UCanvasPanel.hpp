#pragma once
#include <cstdint>
#include "UPanelWidget.hpp"
class UWidget;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UCanvasPanel : public UPanelWidget {
public:
    char pad_120[0x10];
    static UCanvasPanel* StaticClass();
    UCanvasPanelSlot* AddChildToCanvas(UWidget* Content);
}; // Size: 0x130
#pragma pack(pop)
