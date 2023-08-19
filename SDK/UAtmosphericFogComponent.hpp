#pragma once
#include <cstdint>
#include "FAtmospherePrecomputeFullParameters.hpp"
#include "FAtmospherePrecomputeParameters.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UAtmosphericFogComponent : public USceneComponent {
public:
    float DensityMultiplier; // 0x220
    float DensityOffset; // 0x224
    float DistanceScale; // 0x228
    float AltitudeScale; // 0x22c
    float DistanceOffset; // 0x230
    float GroundOffset; // 0x234
    float StartDistance; // 0x238
    float SunDiscScale; // 0x23c
    float Desaturation; // 0x240
    float GroundFogDesaturation; // 0x244
    float DefaultBrightness; // 0x248
    FColor DefaultLightColor; // 0x24c
    FVector DefaultSunDirection; // 0x250
    char pad_25c[0x4];
    UTexture2D* TwilightNightColoration; // 0x260
    float TwilightNightColorationU; // 0x268
    float TwilightNightColorationVBase; // 0x26c
    FLinearColor TwilightNightModColor; // 0x270
    float TwilightNightIntensity; // 0x280
    float TwilightNightDesaturation; // 0x284
    float TwilightNightFogIntensity; // 0x288
    float TwilightNightFogDesaturation; // 0x28c
    float TwilightNightFogStart; // 0x290
    float TwilightNightFogEnd; // 0x294
    float TwilightNightFogPower; // 0x298
    float TwilightNightFogVNear; // 0x29c
    float TwilightNightFogVFar; // 0x2a0
    uint8_t bDisableSunDisk : 1; // 0x2a4
    uint8_t bAtmosphereAffectsSunIlluminance : 1; // 0x2a4
    uint8_t bDisableGroundScattering : 1; // 0x2a4
    uint8_t bIgnoreSceneSunlight : 1; // 0x2a4
    uint8_t pad_bitfield_2a4_4 : 4;
    char pad_2a5[0x3];
    FAtmospherePrecomputeParameters PrecomputeParams; // 0x2a8
    UTexture2D* TransmittanceTexture; // 0x300
    UTexture2D* IrradianceTexture; // 0x308
    char pad_310[0xa0];
    static UAtmosphericFogComponent* StaticClass();
    void StartPrecompute();
    void SetTwilightNightModColor(FLinearColor NewModColor);
    void SetTwilightNightIntensity(float NewIntensity);
    void SetTwilightNightFogVNear(float NewFogVNear);
    void SetTwilightNightFogVFar(float NewFogVFar);
    void SetTwilightNightFogStart(float NewFogStart);
    void SetTwilightNightFogPower(float NewFogPower);
    void SetTwilightNightFogIntensity(float NewFogIntensity);
    void SetTwilightNightFogEnd(float NewFogEnd);
    void SetTwilightNightFogDesaturation(float NewFogDesaturation);
    void SetTwilightNightDesaturation(float NewDesaturation);
    void SetTwilightNightColorationVBase(float NewVBase);
    void SetTwilightNightColorationU(float NewU);
    void SetTwilightNightColorationTexture(UTexture2D* NewTexture);
    void SetSunMultiplier(float NewSunMultiplier);
    void SetSunDiscScale(float NewSunDiscScale);
    void SetStartDistance(float NewStartDistance);
    void SetPrecomputeParamsFull(FAtmospherePrecomputeFullParameters FullParameters, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum);
    void SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum);
    void SetGroundOffset(float NewGroundOffset);
    void SetGroundFogDesaturation(float NewGroundFogDesaturation);
    void SetFogMultiplier(float NewFogMultiplier);
    void SetDistanceScale(float NewDistanceScale);
    void SetDistanceOffset(float NewDistanceOffset);
    void SetDesaturation(float NewDesaturation);
    void SetDensityOffset(float NewDensityOffset);
    void SetDensityMultiplier(float NewDensityMultiplier);
    void SetDefaultSunDirection(FVector NewSunDirection);
    void SetDefaultLightColor(FLinearColor NewLightColor);
    void SetDefaultBrightness(float NewBrightness);
    void SetAltitudeScale(float NewAltitudeScale);
    void IgnoreSceneSunlight(bool NewIgnoreSceneSunlight);
    void DisableSunDisk(bool NewSunDisk);
    void DisableGroundScattering(bool NewGroundScattering);
}; // Size: 0x3b0
#pragma pack(pop)
