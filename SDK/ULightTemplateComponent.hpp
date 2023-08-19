#pragma once
#include <cstdint>
#include "FLightTemplateSettings.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class ULightTemplateComponent : public USceneComponent {
public:
    char pad_220[0x20];
    static ULightTemplateComponent* StaticClass();
    void SetIntensityFactor(float InIntensityFactor, bool bApplyNow);
}; // Size: 0x240
#pragma pack(pop)
