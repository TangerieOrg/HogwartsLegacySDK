#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "FSanctuaryIdentityDayNightSettings.hpp"
#include "FSanctuaryIdentityGlobalLightingSettings.hpp"
#include "FSanctuaryIdentityRenderSettings.hpp"
#pragma pack(push, 1)
struct FSanctuaryIdentitySettings {
    FSanctuaryIdentityDayNightSettings DayNightSettings; // 0x0
    FSanctuaryIdentityGlobalLightingSettings GlobalLightingSettings; // 0x20
    FSanctuaryIdentityRenderSettings RenderSettings; // 0x28
    FPostProcessSettings PostProcessSettings; // 0x90
}; // Size: 0x680
#pragma pack(pop)
