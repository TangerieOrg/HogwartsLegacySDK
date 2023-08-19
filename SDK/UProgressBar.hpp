#pragma once
#include <cstdint>
#include "EProgressBarFillType\Type.hpp"
#include "FLinearColor.hpp"
#include "FProgressBarStyle.hpp"
#include "FVector2D.hpp"
#include "UWidget.hpp"
class USlateWidgetStyleAsset;
class USlateBrushAsset;
#pragma pack(push, 1)
class UProgressBar : public UWidget {
public:
    FProgressBarStyle WidgetStyle; // 0x108
    USlateWidgetStyleAsset* Style; // 0x2a8
    USlateBrushAsset* BackgroundImage; // 0x2b0
    USlateBrushAsset* FillImage; // 0x2b8
    USlateBrushAsset* MarqueeImage; // 0x2c0
    float Percent; // 0x2c8
    EProgressBarFillType::Type BarFillType; // 0x2cc
    bool bIsMarquee; // 0x2cd
    char pad_2ce[0x2];
    FVector2D BorderPadding; // 0x2d0
    char pad_2d8[0x10];
    FLinearColor FillColorAndOpacity; // 0x2e8
    char pad_2f8[0x20];
    static UProgressBar* StaticClass();
    void SetPercent(float InPercent);
    void SetIsMarquee(bool InbIsMarquee);
    void SetFillColorAndOpacity(FLinearColor InColor);
}; // Size: 0x318
#pragma pack(pop)
