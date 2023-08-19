#pragma once
#include <cstdint>
#include "EBlendDomainDayNight.hpp"
#include "EBlendDomainIndoorsOutdoors.hpp"
#include "EBlendDomainLightingMode.hpp"
#include "EBlendDomainOvercast.hpp"
#include "ERenderSettingsIndoorsType.hpp"
#include "FBlendDomainIndoorsOutdoorsCurve.hpp"
#include "FBlendDomainNormalizedTimeCurve.hpp"
#pragma pack(push, 1)
struct FBlendDomainLegacy {
    char pad_0[0x8];
    EBlendDomainIndoorsOutdoors IndoorsOutdoorsBlend; // 0x8
    ERenderSettingsIndoorsType IndoorsType; // 0x9
    EBlendDomainDayNight DayNightBlend; // 0xa
    EBlendDomainOvercast OvercastClearBlend; // 0xb
    EBlendDomainLightingMode LightingMode; // 0xc
    char pad_d[0x3];
    FBlendDomainNormalizedTimeCurve NormalizedTimeBlend; // 0x10
    FBlendDomainIndoorsOutdoorsCurve IndoorsOutdoorsBlendCurve; // 0x20
}; // Size: 0x28
#pragma pack(pop)
