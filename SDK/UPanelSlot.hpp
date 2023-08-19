#pragma once
#include <cstdint>
#include "UVisual.hpp"
class UPanelWidget;
class UWidget;
#pragma pack(push, 1)
class UPanelSlot : public UVisual {
public:
    UPanelWidget* Parent; // 0x28
    UWidget* Content; // 0x30
    static UPanelSlot* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
