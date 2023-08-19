#pragma once
#include <cstdint>
#include "ESynthSlateColorStyle.hpp"
#include "ESynthSlateSizeType.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FSynthSlateStyle : public FSlateWidgetStyle {
    ESynthSlateSizeType SizeType; // 0x8
    ESynthSlateColorStyle ColorStyle; // 0x9
    char pad_a[0x6];
}; // Size: 0x10
#pragma pack(pop)
