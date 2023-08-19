#pragma once
#include <cstdint>
#include "EDayNightTweakDirectionalLightMode.hpp"
#include "FDirectionalLightBasicParametersOverride.hpp"
#include "FDirectionalLightShadowsOverride.hpp"
#include "FDirectionalLightShaftsOverride.hpp"
#include "UGlobalLightingBlendableDayNightBase.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableTweakDirectionalLight : public UGlobalLightingBlendableDayNightBase {
public:
    EDayNightTweakDirectionalLightMode Mode; // 0x30
    char pad_31[0x3];
    float TweakAltitude; // 0x34
    float TweakAzimuth; // 0x38
    FDirectionalLightBasicParametersOverride LightParams; // 0x3c
    FDirectionalLightShaftsOverride LightShafts; // 0x64
    FDirectionalLightShadowsOverride Shadows; // 0x8c
    char pad_ac[0x4];
    static UGlobalLightingBlendableTweakDirectionalLight* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
