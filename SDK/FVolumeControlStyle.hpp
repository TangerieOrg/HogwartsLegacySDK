#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FSliderStyle.hpp"
#pragma pack(push, 1)
struct FVolumeControlStyle : public FSlateWidgetStyle {
    FSliderStyle SliderStyle; // 0x8
    FSlateBrush HighVolumeImage; // 0x348
    FSlateBrush MidVolumeImage; // 0x3d0
    FSlateBrush LowVolumeImage; // 0x458
    FSlateBrush NoVolumeImage; // 0x4e0
    FSlateBrush MutedImage; // 0x568
}; // Size: 0x5f0
#pragma pack(pop)
