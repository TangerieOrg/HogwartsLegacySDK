#pragma once
#include <cstdint>
#include "ARenderSettingsPostProcessingVolume.hpp"
#include "FRenderSettingsPPExposureName.hpp"
#pragma pack(push, 1)
class ARenderSettingsExposureVolume : public ARenderSettingsPostProcessingVolume {
public:
    FRenderSettingsPPExposureName Exposure; // 0x8c0
    float ExposureTweak; // 0x8c8
    bool bExposureTweak; // 0x8cc
    char pad_8cd[0x3];
    static ARenderSettingsExposureVolume* StaticClass();
    void EditExposure();
}; // Size: 0x8d0
#pragma pack(pop)
