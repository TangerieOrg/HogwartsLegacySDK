#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class UWrapBoxSlot : public UPanelSlot {
public:
    FMargin Padding; // 0x38
    bool bFillEmptySpace; // 0x48
    char pad_49[0x3];
    float FillSpanWhenLessThan; // 0x4c
    EHorizontalAlignment HorizontalAlignment; // 0x50
    EVerticalAlignment VerticalAlignment; // 0x51
    char pad_52[0xe];
    static UWrapBoxSlot* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
    void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
    void SetFillEmptySpace(bool InbFillEmptySpace);
}; // Size: 0x60
#pragma pack(pop)
