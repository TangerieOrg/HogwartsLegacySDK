#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FSplitterStyle.hpp"
#include "FTableColumnHeaderStyle.hpp"
#pragma pack(push, 1)
struct FHeaderRowStyle : public FSlateWidgetStyle {
    FTableColumnHeaderStyle ColumnStyle; // 0x8
    FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
    FSplitterStyle ColumnSplitterStyle; // 0x9a8
    FSlateBrush BackgroundBrush; // 0xac0
    FSlateColor ForegroundColor; // 0xb48
}; // Size: 0xb70
#pragma pack(pop)
