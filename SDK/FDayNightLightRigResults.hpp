#pragma once
#include <cstdint>
#include "EDayNightLightSource.hpp"
#include "FDayNightLightRigState.hpp"
#include "FLightParameterSmoothingTime.hpp"
#pragma pack(push, 1)
struct FDayNightLightRigResults {
    FDayNightLightRigState ActiveLight; // 0x0
    FDayNightLightRigState Sunlight; // 0x2c8
    FDayNightLightRigState MoonLight; // 0x590
    float Night0Day1; // 0x858
    float SunLightInfluence; // 0x85c
    float MoonLightInfluence; // 0x860
    EDayNightLightSource LightSource; // 0x864
    char pad_865[0x3];
    FLightParameterSmoothingTime Time; // 0x868
    int32_t BlendOps; // 0x880
    float SunAltitudeDegrees; // 0x884
    float MoonAltitudeDegrees; // 0x888
    float NormalizedTime; // 0x88c
    bool bUsingSecondaryDirectionalLight; // 0x890
    char pad_891[0x7];
    FString DebugModReport; // 0x898
}; // Size: 0x8a8
#pragma pack(pop)
