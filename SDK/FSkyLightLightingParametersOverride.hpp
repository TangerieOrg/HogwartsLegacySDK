#pragma once
#include <cstdint>
#include "FSkyLightAdvancedParametersOverride.hpp"
#include "FSkyLightBasicParametersOverride.hpp"
#include "FSkyLightDFAOParametersOverride.hpp"
#include "FSkyLightHemisphereParametersOverride.hpp"
#include "FSkyLightShadowParametersOverride.hpp"
#pragma pack(push, 1)
struct FSkyLightLightingParametersOverride {
    FSkyLightBasicParametersOverride Basic; // 0x0
    char pad_14[0x4];
    FSkyLightAdvancedParametersOverride Advanced; // 0x18
    FSkyLightShadowParametersOverride Shadows; // 0x50
    char pad_56[0x2];
    FSkyLightDFAOParametersOverride DFAO; // 0x58
    FSkyLightHemisphereParametersOverride Hemisphere; // 0x74
}; // Size: 0xb0
#pragma pack(pop)
