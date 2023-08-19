#pragma once
#include <cstdint>
#include "ESlateColorStylingMode\Type.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSlateColor {
    FLinearColor SpecifiedColor; // 0x0
    ESlateColorStylingMode::Type ColorUseRule; // 0x10
    char pad_11[0x17];
}; // Size: 0x28
#pragma pack(pop)
