#pragma once
#include <cstdint>
#include "FDirectionalLightAdvancedParameters.hpp"
#include "FDirectionalLightBasicParameters.hpp"
#include "FDirectionalLightCascadedShadowMaps.hpp"
#include "FDirectionalLightDistanceFieldShadows.hpp"
#include "FDirectionalLightShadows.hpp"
#include "FDirectionalLightShafts.hpp"
#pragma pack(push, 1)
struct FDirectionalLightParameters {
    FDirectionalLightBasicParameters Basic; // 0x0
    FDirectionalLightAdvancedParameters Advanced; // 0x24
    FDirectionalLightShafts LightShafts; // 0x64
    FDirectionalLightShadows Shadows; // 0x8c
    FDirectionalLightDistanceFieldShadows DistanceFieldShadows; // 0xa8
    FDirectionalLightCascadedShadowMaps CascadedShadowMaps; // 0xb8
}; // Size: 0xdc
#pragma pack(pop)
