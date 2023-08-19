#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FScrollBoxStyle : public FSlateWidgetStyle {
    FSlateBrush TopShadowBrush; // 0x8
    FSlateBrush BottomShadowBrush; // 0x90
    FSlateBrush LeftShadowBrush; // 0x118
    FSlateBrush RightShadowBrush; // 0x1a0
}; // Size: 0x228
#pragma pack(pop)
