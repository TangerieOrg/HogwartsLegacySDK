#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "FVector2D.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class UGridSlot : public UPanelSlot {
public:
    FMargin Padding; // 0x38
    EHorizontalAlignment HorizontalAlignment; // 0x48
    EVerticalAlignment VerticalAlignment; // 0x49
    char pad_4a[0x2];
    int32_t Row; // 0x4c
    int32_t RowSpan; // 0x50
    int32_t Column; // 0x54
    int32_t ColumnSpan; // 0x58
    int32_t Layer; // 0x5c
    FVector2D Nudge; // 0x60
    char pad_68[0x8];
    static UGridSlot* StaticClass();
    void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
    void SetRowSpan(int32_t InRowSpan);
    void SetRow(int32_t InRow);
    void SetPadding(FMargin InPadding);
    void SetNudge(FVector2D InNudge);
    void SetLayer(int32_t InLayer);
    void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
    void SetColumnSpan(int32_t InColumnSpan);
    void SetColumn(int32_t InColumn);
}; // Size: 0x70
#pragma pack(pop)
