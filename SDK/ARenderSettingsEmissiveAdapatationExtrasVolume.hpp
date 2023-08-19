#pragma once
#include <cstdint>
#include "ARenderSettingsEmissiveAdapatationVolumeBase.hpp"
#include "FExposureExpressionsExtras.hpp"
#pragma pack(push, 1)
class ARenderSettingsEmissiveAdapatationExtrasVolume : public ARenderSettingsEmissiveAdapatationVolumeBase {
public:
    FExposureExpressionsExtras EmissiveAdaptationExtras; // 0x2d8
    static ARenderSettingsEmissiveAdapatationExtrasVolume* StaticClass();
}; // Size: 0x318
#pragma pack(pop)
