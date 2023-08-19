#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateSound.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FButtonStyle : public FSlateWidgetStyle {
    FSlateBrush Normal; // 0x8
    FSlateBrush Hovered; // 0x90
    FSlateBrush Pressed; // 0x118
    FSlateBrush Disabled; // 0x1a0
    FMargin NormalPadding; // 0x228
    FMargin PressedPadding; // 0x238
    FSlateSound PressedSlateSound; // 0x248
    FSlateSound HoveredSlateSound; // 0x260
}; // Size: 0x278
#pragma pack(pop)
