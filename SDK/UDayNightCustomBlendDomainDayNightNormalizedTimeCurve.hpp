#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UDayNightCustomBlendDomainDayNightNormalizedTimeCurve : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    UCurveFloat* NormalizedTimeCurve; // 0x28
    bool bMirrorAroundNoon; // 0x30
    char pad_31[0x7];
    static UDayNightCustomBlendDomainDayNightNormalizedTimeCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
