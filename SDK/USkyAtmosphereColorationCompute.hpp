#pragma once
#include <cstdint>
#include "ESkyAtmosphereColorationComputeOutput.hpp"
#include "ESkyAtmosphereColorationComputeType.hpp"
#include "FDayNightLightSkyAtmosphereComputeParams.hpp"
#include "FDayNightLightSkyAtmosphereComputeSampleDirectionParams.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FDayNightLightSkyAtmosphereComputeDirLight;
class UPrimitiveComponent;
#pragma pack(push, 1)
class USkyAtmosphereColorationCompute : public UBlueprintFunctionLibrary {
public:
    static USkyAtmosphereColorationCompute* StaticClass();
    static void SkySunInfo(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FDayNightLightSkyAtmosphereComputeDirLight& SunInfo);
    static void SkyMoonInfo(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FDayNightLightSkyAtmosphereComputeDirLight& MoonInfo);
    static void SkyDirectionalInfo(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FDayNightLightSkyAtmosphereComputeDirLight& DirectionalLightInfo);
    static void SkyColorsLitPacked(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, TArray<FVector>& Directions, TArray<FLinearColor>& SkyColorsRGBIntensityAs);
    static void SkyColorsLitCompute(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, TArray<FVector>& Directions, TArray<FLinearColor>& SkyColors, ESkyAtmosphereColorationComputeType ComputeType, ESkyAtmosphereColorationComputeOutput OutputType);
    static void SkyColorsLitComposited(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, TArray<FVector>& Directions, TArray<FLinearColor>& SkyColors);
    static void SkyColorsLit(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, TArray<FVector>& Directions, TArray<FLinearColor>& SkyColors, TArray<float>& SkyIntensites);
    static void SkyColorSamplingDirection(FDayNightLightSkyAtmosphereComputeSampleDirectionParams DirectionParams, FVector Direction, FVector& SamplingDirection);
    static void SkyColorLitCompute(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FVector Direction, FLinearColor& SkyColor, ESkyAtmosphereColorationComputeType ComputeType, ESkyAtmosphereColorationComputeOutput OutputType);
    static void SkyColorLit(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FVector Direction, FLinearColor& SkyColor, float& SkyIntensity);
    static void SkyColorBase(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FVector Direction, FLinearColor& SkyColor);
    static void SetupDebugPrimitive(UPrimitiveComponent* Component, bool bIsSelectable, bool bShowInReflections);
}; // Size: 0x28
#pragma pack(pop)
