#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FOpenColorIOColorConversionSettings;
class UTexture;
class UTextureRenderTarget2D;
#pragma pack(push, 1)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UOpenColorIOBlueprintLibrary* StaticClass();
    static bool ApplyColorSpaceTransform(UObject* WorldContextObject, FOpenColorIOColorConversionSettings& ConversionSettings, UTexture* InputTexture, UTextureRenderTarget2D* OutputRenderTarget);
}; // Size: 0x28
#pragma pack(pop)
