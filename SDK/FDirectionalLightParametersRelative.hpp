#pragma once
#include <cstdint>
#include "FDirectionalLightAdvancedParametersRelative.hpp"
#include "FDirectionalLightBasicParametersRelative.hpp"
#include "FDirectionalLightCascadedShadowMapsRelative.hpp"
#include "FDirectionalLightDistanceFieldShadowsRelative.hpp"
#include "FDirectionalLightShadowsRelative.hpp"
#include "FDirectionalLightShaftsRelative.hpp"
#pragma pack(push, 1)
struct FDirectionalLightParametersRelative {
    FDirectionalLightBasicParametersRelative Basic; // 0x0
    FDirectionalLightAdvancedParametersRelative Advanced; // 0xd0
    FDirectionalLightShaftsRelative LightShafts; // 0x11c
    FDirectionalLightShadowsRelative Shadows; // 0x1b4
    FDirectionalLightDistanceFieldShadowsRelative DistanceFieldShadows; // 0x278
    FDirectionalLightCascadedShadowMapsRelative CascadedShadowMaps; // 0x2dc
}; // Size: 0x3e0
#pragma pack(pop)
