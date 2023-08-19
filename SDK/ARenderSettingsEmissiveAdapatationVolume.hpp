#pragma once
#include <cstdint>
#include "ARenderSettingsEmissiveAdapatationVolumeBase.hpp"
#include "FRenderSettingsEmissiveAdaptation.hpp"
#pragma pack(push, 1)
class ARenderSettingsEmissiveAdapatationVolume : public ARenderSettingsEmissiveAdapatationVolumeBase {
public:
    FRenderSettingsEmissiveAdaptation EmissiveAdaptation; // 0x2d8
    static ARenderSettingsEmissiveAdapatationVolume* StaticClass();
}; // Size: 0x368
#pragma pack(pop)
