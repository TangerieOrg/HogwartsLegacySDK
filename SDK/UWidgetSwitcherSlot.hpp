#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class UWidgetSwitcherSlot : public UPanelSlot {
public:
    char pad_38[0x8];
    FMargin Padding; // 0x40
    EHorizontalAlignment HorizontalAlignment; // 0x50
    EVerticalAlignment VerticalAlignment; // 0x51
    char pad_52[0x6];
    static UWidgetSwitcherSlot* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
}; // Size: 0x58
#pragma pack(pop)
