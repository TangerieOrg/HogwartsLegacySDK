#pragma once
#include <cstdint>
#include "ARenderSettingsPostProcessingVolume.hpp"
#include "FRenderSettingsPPProbesName.hpp"
#include "FRenderSettingsPPProbesToneMapping.hpp"
#pragma pack(push, 1)
class ARenderSettingsProbeVolume : public ARenderSettingsPostProcessingVolume {
public:
    FRenderSettingsPPProbesName Probes; // 0x8c0
    FRenderSettingsPPProbesToneMapping ToneMappingOverride; // 0x8c8
    char pad_8d8[0x8];
    static ARenderSettingsProbeVolume* StaticClass();
    void EditProbes();
}; // Size: 0x8e0
#pragma pack(pop)
