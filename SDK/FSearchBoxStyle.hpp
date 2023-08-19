#pragma once
#include <cstdint>
#include "FEditableTextBoxStyle.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FSearchBoxStyle : public FSlateWidgetStyle {
    FEditableTextBoxStyle TextBoxStyle; // 0x8
    FSlateFontInfo ActiveFontInfo; // 0x800
    FSlateBrush UpArrowImage; // 0x858
    FSlateBrush DownArrowImage; // 0x8e0
    FSlateBrush GlassImage; // 0x968
    FSlateBrush ClearImage; // 0x9f0
    FMargin ImagePadding; // 0xa78
    bool bLeftAlignButtons; // 0xa88
    char pad_a89[0x7];
}; // Size: 0xa90
#pragma pack(pop)
