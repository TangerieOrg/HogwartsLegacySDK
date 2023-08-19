#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FTableRowStyle.hpp"
#include "FTextBlockStyle.hpp"
#pragma pack(push, 1)
struct FPreloadArchitectHUDStyle : public FSlateWidgetStyle {
    FTextBlockStyle WorldTextStyle; // 0x8
    FTextBlockStyle LevelTextStyle; // 0x278
    FTextBlockStyle LoadedAssetTextStyle; // 0x4e8
    FTextBlockStyle LoadingAssetTextStyle; // 0x758
    FTableRowStyle TreeRowStyle; // 0x9c8
    FMargin HUDMargin; // 0x1190
    FMargin TreeMargin; // 0x11a0
}; // Size: 0x11b0
#pragma pack(pop)
