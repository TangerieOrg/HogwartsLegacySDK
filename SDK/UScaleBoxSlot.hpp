#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class UScaleBoxSlot : public UPanelSlot {
public:
    FMargin Padding; // 0x38
    EHorizontalAlignment HorizontalAlignment; // 0x48
    EVerticalAlignment VerticalAlignment; // 0x49
    char pad_4a[0x16];
    static UScaleBoxSlot* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
}; // Size: 0x60
#pragma pack(pop)
