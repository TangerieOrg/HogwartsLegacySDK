#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FScrollBarStyle.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FEditableTextBoxStyle : public FSlateWidgetStyle {
    FSlateBrush BackgroundImageNormal; // 0x8
    FSlateBrush BackgroundImageHovered; // 0x90
    FSlateBrush BackgroundImageFocused; // 0x118
    FSlateBrush BackgroundImageReadOnly; // 0x1a0
    FMargin Padding; // 0x228
    FSlateFontInfo Font; // 0x238
    FSlateColor ForegroundColor; // 0x290
    FSlateColor BackgroundColor; // 0x2b8
    FSlateColor ReadOnlyForegroundColor; // 0x2e0
    FMargin HScrollBarPadding; // 0x308
    FMargin VScrollBarPadding; // 0x318
    FScrollBarStyle ScrollBarStyle; // 0x328
}; // Size: 0x7f8
#pragma pack(pop)
