#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FScrollBarStyle : public FSlateWidgetStyle {
    FSlateBrush HorizontalBackgroundImage; // 0x8
    FSlateBrush VerticalBackgroundImage; // 0x90
    FSlateBrush VerticalTopSlotImage; // 0x118
    FSlateBrush HorizontalTopSlotImage; // 0x1a0
    FSlateBrush VerticalBottomSlotImage; // 0x228
    FSlateBrush HorizontalBottomSlotImage; // 0x2b0
    FSlateBrush NormalThumbImage; // 0x338
    FSlateBrush HoveredThumbImage; // 0x3c0
    FSlateBrush DraggedThumbImage; // 0x448
}; // Size: 0x4d0
#pragma pack(pop)
