#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FSplitterStyle : public FSlateWidgetStyle {
    FSlateBrush HandleNormalBrush; // 0x8
    FSlateBrush HandleHighlightBrush; // 0x90
}; // Size: 0x118
#pragma pack(pop)
