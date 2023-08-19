#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "UPanelWidget.hpp"
class UWidget;
class UUniformGridSlot;
#pragma pack(push, 1)
class UUniformGridPanel : public UPanelWidget {
public:
    FMargin SlotPadding; // 0x120
    float MinDesiredSlotWidth; // 0x130
    float MinDesiredSlotHeight; // 0x134
    char pad_138[0x10];
    static UUniformGridPanel* StaticClass();
    void SetSlotPadding(FMargin InSlotPadding);
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32_t InRow, int32_t InColumn);
}; // Size: 0x148
#pragma pack(pop)
