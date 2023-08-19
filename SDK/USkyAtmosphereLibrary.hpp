#pragma once
#include <cstdint>
#include "ESkyAtmosphereDirectionalLight.hpp"
#include "FGlobalLightingGenerateSunColorCurve.hpp"
#include "FGlobalLightingSunColorParams.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FLinearColor;
class UCurveLinearColor;
#pragma pack(push, 1)
class USkyAtmosphereLibrary : public UBlueprintFunctionLibrary {
public:
    static USkyAtmosphereLibrary* StaticClass();
    static bool GetSunZenithLuminance(UObject* WorldContextObject, float& Luminance, ESkyAtmosphereDirectionalLight DirectionalLight);
    static bool GetSunZenithColor(UObject* WorldContextObject, FLinearColor& SunColor, ESkyAtmosphereDirectionalLight DirectionalLight);
    static bool GetSunLuminanceFromDirection(UObject* WorldContextObject, FVector SunDirection, float& Luminance, ESkyAtmosphereDirectionalLight DirectionalLight);
    static bool GetSunLuminance(UObject* WorldContextObject, FGlobalLightingSunColorParams Params, float SunAngle, float& Luminance, ESkyAtmosphereDirectionalLight DirectionalLight);
    static bool GetSunColorFromDirection(UObject* WorldContextObject, FVector SunDirection, FLinearColor& SunColor, ESkyAtmosphereDirectionalLight DirectionalLight);
    static bool GetSunColor(UObject* WorldContextObject, FGlobalLightingSunColorParams Params, float SunAngle, FLinearColor& SunColor, ESkyAtmosphereDirectionalLight DirectionalLight);
    static bool GetSunBaseColor(UObject* WorldContextObject, FLinearColor& BaseSunColor, ESkyAtmosphereDirectionalLight DirectionalLight);
    static bool GenerateSunColorCurve(UObject* WorldContextObject, FGlobalLightingGenerateSunColorCurve CurveParams, UCurveLinearColor* SunColorCurve, ESkyAtmosphereDirectionalLight DirectionalLight);
}; // Size: 0x28
#pragma pack(pop)
