#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FSynth2DSliderStyle : public FSlateWidgetStyle {
    FSlateBrush NormalThumbImage; // 0x8
    FSlateBrush DisabledThumbImage; // 0x90
    FSlateBrush NormalBarImage; // 0x118
    FSlateBrush DisabledBarImage; // 0x1a0
    FSlateBrush BackgroundImage; // 0x228
    float BarThickness; // 0x2b0
    char pad_2b4[0x4];
}; // Size: 0x2b8
#pragma pack(pop)
