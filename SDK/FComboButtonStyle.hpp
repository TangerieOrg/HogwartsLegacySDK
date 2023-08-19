#pragma once
#include <cstdint>
#include "FButtonStyle.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FComboButtonStyle : public FSlateWidgetStyle {
    FButtonStyle ButtonStyle; // 0x8
    FSlateBrush DownArrowImage; // 0x280
    FVector2D ShadowOffset; // 0x308
    FLinearColor ShadowColorAndOpacity; // 0x310
    FSlateBrush MenuBorderBrush; // 0x320
    FMargin MenuBorderPadding; // 0x3a8
}; // Size: 0x3b8
#pragma pack(pop)
