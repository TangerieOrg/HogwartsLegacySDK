#pragma once
#include <cstdint>
#include "ESlateCheckBoxType\Type.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateSound.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FCheckBoxStyle : public FSlateWidgetStyle {
    ESlateCheckBoxType::Type CheckBoxType; // 0x8
    char pad_9[0x7];
    FSlateBrush UncheckedImage; // 0x10
    FSlateBrush UncheckedHoveredImage; // 0x98
    FSlateBrush UncheckedPressedImage; // 0x120
    FSlateBrush CheckedImage; // 0x1a8
    FSlateBrush CheckedHoveredImage; // 0x230
    FSlateBrush CheckedPressedImage; // 0x2b8
    FSlateBrush UndeterminedImage; // 0x340
    FSlateBrush UndeterminedHoveredImage; // 0x3c8
    FSlateBrush UndeterminedPressedImage; // 0x450
    FMargin Padding; // 0x4d8
    FSlateColor ForegroundColor; // 0x4e8
    FSlateColor BorderBackgroundColor; // 0x510
    FSlateSound CheckedSlateSound; // 0x538
    FSlateSound UncheckedSlateSound; // 0x550
    FSlateSound HoveredSlateSound; // 0x568
}; // Size: 0x580
#pragma pack(pop)
