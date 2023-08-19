#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UDayNightCustomBlendDomainDayNightAltitudeCurveRemap : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    UCurveFloat* AltitudeRemapCurve; // 0x28
    static UDayNightCustomBlendDomainDayNightAltitudeCurveRemap* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
