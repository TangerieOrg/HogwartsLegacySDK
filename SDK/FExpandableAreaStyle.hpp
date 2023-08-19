#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FExpandableAreaStyle : public FSlateWidgetStyle {
    FSlateBrush CollapsedImage; // 0x8
    FSlateBrush ExpandedImage; // 0x90
    float RolloutAnimationSeconds; // 0x118
    char pad_11c[0x4];
}; // Size: 0x120
#pragma pack(pop)
