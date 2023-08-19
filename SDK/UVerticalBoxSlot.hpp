#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "FSlateChildSize.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class UVerticalBoxSlot : public UPanelSlot {
public:
    FSlateChildSize Size; // 0x38
    FMargin Padding; // 0x40
    char pad_50[0x8];
    EHorizontalAlignment HorizontalAlignment; // 0x58
    EVerticalAlignment VerticalAlignment; // 0x59
    char pad_5a[0x6];
    static UVerticalBoxSlot* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetSize(FSlateChildSize InSize);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
}; // Size: 0x60
#pragma pack(pop)
