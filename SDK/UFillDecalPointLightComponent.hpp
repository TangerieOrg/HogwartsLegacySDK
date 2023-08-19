#pragma once
#include <cstdint>
#include "UFadeToDecalPointLightComponent.hpp"
#pragma pack(push, 1)
class UFillDecalPointLightComponent : public UFadeToDecalPointLightComponent {
public:
    float IntensityMultiplier; // 0x330
    float InnerCutoutRadius; // 0x334
    float OuterCutoutRadius; // 0x338
    float FullRadius; // 0x33c
    static UFillDecalPointLightComponent* StaticClass();
    void SetRadii(float NewInnerCutoutRadius, float NewOuterCutoutRadius, float NewFullRadius);
    void SetOuterCutoutRadius(float NewOuterCutoutRadius);
    void SetIntensityMultiplier(float NewIntensityMultiplier);
    void SetInnerCutoutRadius(float NewInnerCutoutRadius);
    void SetFullRadius(float NewFullRadius);
}; // Size: 0x340
#pragma pack(pop)
