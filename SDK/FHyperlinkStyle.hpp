#pragma once
#include <cstdint>
#include "FButtonStyle.hpp"
#include "FMargin.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FTextBlockStyle.hpp"
#pragma pack(push, 1)
struct FHyperlinkStyle : public FSlateWidgetStyle {
    FButtonStyle UnderlineStyle; // 0x8
    FTextBlockStyle TextStyle; // 0x280
    FMargin Padding; // 0x4f0
}; // Size: 0x500
#pragma pack(pop)
