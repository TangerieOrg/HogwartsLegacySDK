#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FInlineTextImageStyle : public FSlateWidgetStyle {
    FSlateBrush Image; // 0x8
    int16_t Baseline; // 0x90
    char pad_92[0x6];
}; // Size: 0x98
#pragma pack(pop)
