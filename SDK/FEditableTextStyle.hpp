#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FEditableTextStyle : public FSlateWidgetStyle {
    FSlateFontInfo Font; // 0x8
    FSlateColor ColorAndOpacity; // 0x60
    FSlateBrush BackgroundImageSelected; // 0x88
    FSlateBrush BackgroundImageComposing; // 0x110
    FSlateBrush CaretImage; // 0x198
}; // Size: 0x220
#pragma pack(pop)
