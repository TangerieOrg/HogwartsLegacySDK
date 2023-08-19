#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FSliderStyle : public FSlateWidgetStyle {
    FSlateBrush NormalBarImage; // 0x8
    FSlateBrush HoveredBarImage; // 0x90
    FSlateBrush DisabledBarImage; // 0x118
    FSlateBrush NormalThumbImage; // 0x1a0
    FSlateBrush HoveredThumbImage; // 0x228
    FSlateBrush DisabledThumbImage; // 0x2b0
    float BarThickness; // 0x338
    char pad_33c[0x4];
}; // Size: 0x340
#pragma pack(pop)
