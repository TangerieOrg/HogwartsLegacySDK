#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomainPresetAsset;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainPreset : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    URenderSettingsCustomBlendDomainPresetAsset* Preset; // 0x28
    static URenderSettingsCustomBlendDomainPreset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
