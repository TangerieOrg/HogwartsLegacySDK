#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FProgressBarStyle : public FSlateWidgetStyle {
    FSlateBrush BackgroundImage; // 0x8
    FSlateBrush FillImage; // 0x90
    FSlateBrush MarqueeImage; // 0x118
}; // Size: 0x1a0
#pragma pack(pop)
