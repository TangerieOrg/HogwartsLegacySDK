#pragma once
#include <cstdint>
#include "EOrientation.hpp"
#include "FMargin.hpp"
#include "FScrollBarStyle.hpp"
#include "FVector2D.hpp"
#include "UWidget.hpp"
class USlateWidgetStyleAsset;
#pragma pack(push, 1)
class UScrollBar : public UWidget {
public:
    FScrollBarStyle WidgetStyle; // 0x108
    USlateWidgetStyleAsset* Style; // 0x5d8
    bool bAlwaysShowScrollbar; // 0x5e0
    bool bAlwaysShowScrollbarTrack; // 0x5e1
    EOrientation Orientation; // 0x5e2
    char pad_5e3[0x1];
    FVector2D Thickness; // 0x5e4
    FMargin Padding; // 0x5ec
    char pad_5fc[0x14];
    static UScrollBar* StaticClass();
    void SetState(float InOffsetFraction, float InThumbSizeFraction);
}; // Size: 0x610
#pragma pack(pop)
