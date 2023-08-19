#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "USceneComponent.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UVolumetricCloudComponent : public USceneComponent {
public:
    float TracingStartMaxDistance; // 0x220
    float TracingMaxDistance; // 0x224
    float PlanetRadius; // 0x228
    FColor GroundAlbedo; // 0x22c
    UMaterialInterface* Material; // 0x230
    uint8_t bUsePerSampleAtmosphericLightTransmittance : 1; // 0x238
    uint8_t pad_bitfield_238_1 : 7;
    char pad_239[0x3];
    float SkyLightCloudBottomOcclusion; // 0x23c
    float ViewSampleCountScale; // 0x240
    float ReflectionSampleCountScale; // 0x244
    float ShadowViewSampleCountScale; // 0x248
    float ShadowReflectionSampleCountScale; // 0x24c
    float ShadowTracingDistance; // 0x250
    float StopTracingTransmittanceThreshold; // 0x254
    char pad_258[0x8];
    static UVolumetricCloudComponent* StaticClass();
    void SetViewSampleCountScale(float NewValue);
    void SetTracingStartMaxDistance(float NewValue);
    void SetTracingMaxDistance(float NewValue);
    void SetStopTracingTransmittanceThreshold(float NewValue);
    void SetSkyLightCloudBottomOcclusion(float NewValue);
    void SetShadowViewSampleCountScale(float NewValue);
    void SetShadowTracingDistance(float NewValue);
    void SetShadowReflectionSampleCountScale(float NewValue);
    void SetReflectionSampleCountScale(float NewValue);
    void SetPlanetRadius(float NewValue);
    void SetMaterial(UMaterialInterface* NewValue);
    void SetLayerHeight(float NewValue);
    void SetLayerBottomAltitude(float NewValue);
    void SetGroundAlbedo(FColor NewValue);
    void SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue);
}; // Size: 0x260
#pragma pack(pop)
