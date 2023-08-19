#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FTableRowStyle : public FSlateWidgetStyle {
    FSlateBrush SelectorFocusedBrush; // 0x8
    FSlateBrush ActiveHoveredBrush; // 0x90
    FSlateBrush ActiveBrush; // 0x118
    FSlateBrush InactiveHoveredBrush; // 0x1a0
    FSlateBrush InactiveBrush; // 0x228
    FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2b0
    FSlateBrush EvenRowBackgroundBrush; // 0x338
    FSlateBrush OddRowBackgroundHoveredBrush; // 0x3c0
    FSlateBrush OddRowBackgroundBrush; // 0x448
    FSlateColor TextColor; // 0x4d0
    FSlateColor SelectedTextColor; // 0x4f8
    FSlateBrush DropIndicator_Above; // 0x520
    FSlateBrush DropIndicator_Onto; // 0x5a8
    FSlateBrush DropIndicator_Below; // 0x630
    FSlateBrush ActiveHighlightedBrush; // 0x6b8
    FSlateBrush InactiveHighlightedBrush; // 0x740
}; // Size: 0x7c8
#pragma pack(pop)
