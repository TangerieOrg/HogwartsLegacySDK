#pragma once
#include <cstdint>
#include "FSampleTextureToCurve.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UTexture2D;
class UCurveLinearColor;
#pragma pack(push, 1)
class UCurveFromTextureLibrary : public UBlueprintFunctionLibrary {
public:
    static UCurveFromTextureLibrary* StaticClass();
    static void TextureToLinearColorCurve(UTexture2D* Texture, FSampleTextureToCurve Settings, UCurveLinearColor* ColorCurve, bool& Worked);
}; // Size: 0x28
#pragma pack(pop)
