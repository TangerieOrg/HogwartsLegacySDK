#pragma once
#include <cstdint>
#include "UPanelWidget.hpp"
class UWidget;
class UOverlaySlot;
#pragma pack(push, 1)
class UOverlay : public UPanelWidget {
public:
    char pad_120[0x10];
    static UOverlay* StaticClass();
    UOverlaySlot* AddChildToOverlay(UWidget* Content);
}; // Size: 0x130
#pragma pack(pop)
