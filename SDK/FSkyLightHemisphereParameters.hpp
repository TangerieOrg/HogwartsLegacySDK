#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSkyLightHemisphereParameters {
    bool bUseHemisphereLight; // 0x0
    char pad_1[0x3];
    FLinearColor HemiTopColor; // 0x4
    FLinearColor HemiBottomColor; // 0x14
    float HemiOutsideIntensity; // 0x24
    float HemiInsideIntensity; // 0x28
    float ProbeOutsideMinimumIntensity; // 0x2c
    float ProbeInsideMinimumIntensity; // 0x30
    float SkyOcclusionContrast; // 0x34
    float SkyOcclusionExponent; // 0x38
}; // Size: 0x3c
#pragma pack(pop)
