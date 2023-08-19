#pragma once
#include <cstdint>
#include "ELightUnits.hpp"
#include "FLightmassPointLightSettings.hpp"
#include "FWCullingPlane.hpp"
#include "ULightComponent.hpp"
class ULightClippingProvider;
#pragma pack(push, 1)
class ULocalLightComponent : public ULightComponent {
public:
    float AttenuationRadius; // 0x390
    FLightmassPointLightSettings LightmassSettings; // 0x394
    ULightClippingProvider* LightClippingProvider; // 0x3a0
    TArray<FWCullingPlane> WCullingPlanes; // 0x3a8
    float wNearShadowClippingDistance; // 0x3b8
    char pad_3bc[0x4];
    static ULocalLightComponent* StaticClass();
    void SetIntensityUnits(ELightUnits NewIntensityUnits);
    void SetAttenuationRadius(float NewRadius);
    static float GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle);
}; // Size: 0x3c0
#pragma pack(pop)
