#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FTextBlockStyle : public FSlateWidgetStyle {
    FSlateFontInfo Font; // 0x8
    FSlateColor ColorAndOpacity; // 0x60
    FVector2D ShadowOffset; // 0x88
    FLinearColor ShadowColorAndOpacity; // 0x90
    FSlateColor SelectedBackgroundColor; // 0xa0
    FLinearColor HighlightColor; // 0xc8
    FSlateBrush HighlightShape; // 0xd8
    FSlateBrush StrikeBrush; // 0x160
    FSlateBrush UnderlineBrush; // 0x1e8
}; // Size: 0x270
#pragma pack(pop)
