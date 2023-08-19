#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FScrollBorderStyle : public FSlateWidgetStyle {
    FSlateBrush TopShadowBrush; // 0x8
    FSlateBrush BottomShadowBrush; // 0x90
}; // Size: 0x118
#pragma pack(pop)
