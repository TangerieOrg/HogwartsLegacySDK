#pragma once
#include <cstdint>
#include "FSkyLightAdvancedParameters.hpp"
#include "FSkyLightBasicParameters.hpp"
#include "FSkyLightDFAOParameters.hpp"
#include "FSkyLightHemisphereParameters.hpp"
#include "FSkyLightShadowParameters.hpp"
#pragma pack(push, 1)
struct FSkyLightLightingParameters {
    FSkyLightBasicParameters Basic; // 0x0
    FSkyLightAdvancedParameters Advanced; // 0x10
    FSkyLightShadowParameters Shadows; // 0x48
    char pad_4d[0x3];
    FSkyLightDFAOParameters DFAO; // 0x50
    FSkyLightHemisphereParameters Hemisphere; // 0x68
    char pad_a4[0x4];
}; // Size: 0xa8
#pragma pack(pop)
