#pragma once
#include <cstdint>
#include "ETextJustify\Type.hpp"
#include "ETextWrappingPolicy.hpp"
#include "FMargin.hpp"
#include "FShapedTextOptions.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class UTextLayoutWidget : public UWidget {
public:
    FShapedTextOptions ShapedTextOptions; // 0x108
    ETextJustify::Type Justification; // 0x10b
    ETextWrappingPolicy WrappingPolicy; // 0x10c
    uint8_t AutoWrapText : 1; // 0x10d
    uint8_t pad_bitfield_10d_1 : 7;
    char pad_10e[0x2];
    float WrapTextAt; // 0x110
    FMargin Margin; // 0x114
    float LineHeightPercentage; // 0x124
    static UTextLayoutWidget* StaticClass();
    void SetJustification(ETextJustify::Type InJustification);
}; // Size: 0x128
#pragma pack(pop)
