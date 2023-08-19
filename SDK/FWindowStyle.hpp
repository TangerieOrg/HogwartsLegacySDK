#pragma once
#include <cstdint>
#include "FButtonStyle.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FTextBlockStyle.hpp"
#pragma pack(push, 1)
struct FWindowStyle : public FSlateWidgetStyle {
    FButtonStyle MinimizeButtonStyle; // 0x8
    FButtonStyle MaximizeButtonStyle; // 0x280
    FButtonStyle RestoreButtonStyle; // 0x4f8
    FButtonStyle CloseButtonStyle; // 0x770
    FTextBlockStyle TitleTextStyle; // 0x9e8
    FSlateBrush ActiveTitleBrush; // 0xc58
    FSlateBrush InactiveTitleBrush; // 0xce0
    FSlateBrush FlashTitleBrush; // 0xd68
    FSlateColor BackgroundColor; // 0xdf0
    FSlateBrush OutlineBrush; // 0xe18
    FSlateColor OutlineColor; // 0xea0
    FSlateBrush BorderBrush; // 0xec8
    FSlateBrush BackgroundBrush; // 0xf50
    FSlateBrush ChildBackgroundBrush; // 0xfd8
}; // Size: 0x1060
#pragma pack(pop)
