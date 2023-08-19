#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FSpinBoxStyle : public FSlateWidgetStyle {
    FSlateBrush BackgroundBrush; // 0x8
    FSlateBrush HoveredBackgroundBrush; // 0x90
    FSlateBrush ActiveFillBrush; // 0x118
    FSlateBrush InactiveFillBrush; // 0x1a0
    FSlateBrush ArrowsImage; // 0x228
    FSlateColor ForegroundColor; // 0x2b0
    FMargin TextPadding; // 0x2d8
}; // Size: 0x2e8
#pragma pack(pop)
