#pragma once
#include <cstdint>
#include "UPanelWidget.hpp"
class UWidget;
class UPanelSlot;
#pragma pack(push, 1)
class UContentWidget : public UPanelWidget {
public:
    static UContentWidget* StaticClass();
    UPanelSlot* SetContent(UWidget* Content);
    UPanelSlot* GetContentSlot();
    UWidget* GetContent();
}; // Size: 0x120
#pragma pack(pop)
