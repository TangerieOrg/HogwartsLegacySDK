#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class USizeBoxSlot : public UPanelSlot {
public:
    FMargin Padding; // 0x38
    char pad_48[0x10];
    EHorizontalAlignment HorizontalAlignment; // 0x58
    EVerticalAlignment VerticalAlignment; // 0x59
    char pad_5a[0x6];
    static USizeBoxSlot* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
}; // Size: 0x60
#pragma pack(pop)
