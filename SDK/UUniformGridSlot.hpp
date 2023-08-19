#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class UUniformGridSlot : public UPanelSlot {
public:
    EHorizontalAlignment HorizontalAlignment; // 0x38
    EVerticalAlignment VerticalAlignment; // 0x39
    char pad_3a[0x2];
    int32_t Row; // 0x3c
    int32_t Column; // 0x40
    char pad_44[0xc];
    static UUniformGridSlot* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetRow(int32_t InRow);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
    void SetColumn(int32_t InColumn);
}; // Size: 0x50
#pragma pack(pop)
