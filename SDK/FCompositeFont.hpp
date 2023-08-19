#pragma once
#include <cstdint>
#include "FCompositeFallbackFont.hpp"
#include "FCompositeSubFont.hpp"
#include "FTypeface.hpp"
#pragma pack(push, 1)
struct FCompositeFont {
    FTypeface DefaultTypeface; // 0x0
    FCompositeFallbackFont FallbackTypeface; // 0x10
    TArray<FCompositeSubFont> SubTypefaces; // 0x28
}; // Size: 0x38
#pragma pack(pop)
