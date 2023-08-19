#pragma once
#include <cstdint>
#include "FDirectionalLightAdvancedParametersOverride.hpp"
#include "FDirectionalLightBasicParametersOverride.hpp"
#include "FDirectionalLightCascadedShadowMapsOverride.hpp"
#include "FDirectionalLightDistanceFieldShadowsOverride.hpp"
#include "FDirectionalLightShadowsOverride.hpp"
#include "FDirectionalLightShaftsOverride.hpp"
#pragma pack(push, 1)
struct FDirectionalLightParametersOverride {
    FDirectionalLightBasicParametersOverride Basic; // 0x0
    FDirectionalLightAdvancedParametersOverride Advanced; // 0x28
    FDirectionalLightShaftsOverride LightShafts; // 0x6c
    FDirectionalLightShadowsOverride Shadows; // 0x94
    FDirectionalLightDistanceFieldShadowsOverride DistanceFieldShadows; // 0xb4
    FDirectionalLightCascadedShadowMapsOverride CascadedShadowMaps; // 0xc4
}; // Size: 0xec
#pragma pack(pop)
