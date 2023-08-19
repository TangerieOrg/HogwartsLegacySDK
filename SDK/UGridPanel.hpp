#pragma once
#include <cstdint>
#include "UPanelWidget.hpp"
class UWidget;
class UGridSlot;
#pragma pack(push, 1)
class UGridPanel : public UPanelWidget {
public:
    TArray<float> ColumnFill; // 0x120
    TArray<float> RowFill; // 0x130
    char pad_140[0x10];
    static UGridPanel* StaticClass();
    void SetRowFill(int32_t ColumnIndex, float Coefficient);
    void SetColumnFill(int32_t ColumnIndex, float Coefficient);
    UGridSlot* AddChildToGrid(UWidget* Content, int32_t InRow, int32_t InColumn);
}; // Size: 0x150
#pragma pack(pop)
