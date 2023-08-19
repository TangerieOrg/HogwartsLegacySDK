#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#pragma pack(push, 1)
class UDayNightCustomBlendDomainDayNightAltitudeRemap : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    float AltitudeMin; // 0x28
    float AltitudeMax; // 0x2c
    float OunputMin; // 0x30
    float OutputMax; // 0x34
    static UDayNightCustomBlendDomainDayNightAltitudeRemap* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
