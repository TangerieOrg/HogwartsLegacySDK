#pragma once
#include <cstdint>
#include "FCompositeFallbackFont.hpp"
#include "FInt32Range.hpp"
#pragma pack(push, 1)
struct FCompositeSubFont : public FCompositeFallbackFont {
    TArray<FInt32Range> CharacterRanges; // 0x18
    FString Cultures; // 0x28
}; // Size: 0x38
#pragma pack(pop)
