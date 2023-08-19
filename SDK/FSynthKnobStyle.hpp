#pragma once
#include <cstdint>
#include "ESynthKnobSize.hpp"
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FSynthKnobStyle : public FSlateWidgetStyle {
    FSlateBrush LargeKnob; // 0x8
    FSlateBrush LargeKnobOverlay; // 0x90
    FSlateBrush MediumKnob; // 0x118
    FSlateBrush MediumKnobOverlay; // 0x1a0
    float MinValueAngle; // 0x228
    float MaxValueAngle; // 0x22c
    ESynthKnobSize KnobSize; // 0x230
    char pad_231[0x7];
}; // Size: 0x238
#pragma pack(pop)
