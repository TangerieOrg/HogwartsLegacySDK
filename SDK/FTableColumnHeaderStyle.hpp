#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle {
    FSlateBrush SortPrimaryAscendingImage; // 0x8
    FSlateBrush SortPrimaryDescendingImage; // 0x90
    FSlateBrush SortSecondaryAscendingImage; // 0x118
    FSlateBrush SortSecondaryDescendingImage; // 0x1a0
    FSlateBrush NormalBrush; // 0x228
    FSlateBrush HoveredBrush; // 0x2b0
    FSlateBrush MenuDropdownImage; // 0x338
    FSlateBrush MenuDropdownNormalBorderBrush; // 0x3c0
    FSlateBrush MenuDropdownHoveredBorderBrush; // 0x448
}; // Size: 0x4d0
#pragma pack(pop)
