#pragma once
#include <cstdint>
#include "ERenderSettingsIndoorsType.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainIndoorsOutdoorsCurve : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    UCurveFloat* IndoorsOutdoorsCurve; // 0x28
    ERenderSettingsIndoorsType IndoorsType; // 0x30
    char pad_31[0x7];
    static URenderSettingsCustomBlendDomainIndoorsOutdoorsCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
