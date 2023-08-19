#pragma once
#include <cstdint>
#include "FDynamicLightAdaptationSettings.hpp"
#include "UAnimatedLightClusterComponent.hpp"
#pragma pack(push, 1)
class ULightAdaptationComponent : public UAnimatedLightClusterComponent {
public:
    FDynamicLightAdaptationSettings Settings; // 0x250
    float Adaptation; // 0x2b0
    float LastExposure; // 0x2b4
    uint32_t FirstUpdateFrame; // 0x2b8
    bool bForceClusterUpdate; // 0x2bc
    char pad_2bd[0x3];
    static ULightAdaptationComponent* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
