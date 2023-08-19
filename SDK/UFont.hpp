#pragma once
#include <cstdint>
#include "EFontCacheType.hpp"
#include "FCompositeFont.hpp"
#include "FFontCharacter.hpp"
#include "FFontImportOptionsData.hpp"
#include "UObject.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UFont : public UObject {
public:
    char pad_28[0x8];
    EFontCacheType FontCacheType; // 0x30
    char pad_31[0x7];
    TArray<FFontCharacter> Characters; // 0x38
    TArray<UTexture2D*> Textures; // 0x48
    int32_t IsRemapped; // 0x58
    float EmScale; // 0x5c
    float Ascent; // 0x60
    float Descent; // 0x64
    float Leading; // 0x68
    int32_t Kerning; // 0x6c
    FFontImportOptionsData ImportOptions; // 0x70
    int32_t NumCharacters; // 0x120
    char pad_124[0x4];
    TArray<int32_t> MaxCharHeight; // 0x128
    float ScalingFactor; // 0x138
    int32_t LegacyFontSize; // 0x13c
    FName LegacyFontName; // 0x140
    FCompositeFont CompositeFont; // 0x148
    char pad_180[0x50];
    static UFont* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
