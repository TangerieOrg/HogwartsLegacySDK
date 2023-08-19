#pragma once
#include <cstdint>
#include "FButtonStyle.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FDockTabStyle : public FSlateWidgetStyle {
    FButtonStyle CloseButtonStyle; // 0x8
    FSlateBrush NormalBrush; // 0x280
    FSlateBrush ActiveBrush; // 0x308
    FSlateBrush ColorOverlayTabBrush; // 0x390
    FSlateBrush ColorOverlayIconBrush; // 0x418
    FSlateBrush ForegroundBrush; // 0x4a0
    FSlateBrush HoveredBrush; // 0x528
    FSlateBrush ContentAreaBrush; // 0x5b0
    FSlateBrush TabWellBrush; // 0x638
    FMargin TabPadding; // 0x6c0
    float OverlapWidth; // 0x6d0
    char pad_6d4[0x4];
    FSlateColor FlashColor; // 0x6d8
}; // Size: 0x700
#pragma pack(pop)
