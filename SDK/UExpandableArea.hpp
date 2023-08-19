#pragma once
#include <cstdint>
#include "FExpandableAreaStyle.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class UExpandableArea : public UWidget {
public:
    char pad_108[0x8];
    FExpandableAreaStyle Style; // 0x110
    FSlateBrush BorderBrush; // 0x230
    FSlateColor BorderColor; // 0x2b8
    bool bIsExpanded; // 0x2e0
    char pad_2e1[0x3];
    float MaxHeight; // 0x2e4
    FMargin HeaderPadding; // 0x2e8
    FMargin AreaPadding; // 0x2f8
    char pad_308[0x10];
    UWidget* HeaderContent; // 0x318
    UWidget* BodyContent; // 0x320
    char pad_328[0x10];
    static UExpandableArea* StaticClass();
    void SetIsExpanded_Animated(bool IsExpanded);
    void SetIsExpanded(bool IsExpanded);
    bool GetIsExpanded();
}; // Size: 0x338
#pragma pack(pop)
