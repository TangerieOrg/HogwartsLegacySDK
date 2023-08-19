#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "FSlateChildSize.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class UHorizontalBoxSlot : public UPanelSlot {
public:
    char pad_38[0x8];
    FMargin Padding; // 0x40
    FSlateChildSize Size; // 0x50
    EHorizontalAlignment HorizontalAlignment; // 0x58
    EVerticalAlignment VerticalAlignment; // 0x59
    char pad_5a[0x6];
    static UHorizontalBoxSlot* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetSize(FSlateChildSize InSize);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
}; // Size: 0x60
#pragma pack(pop)
