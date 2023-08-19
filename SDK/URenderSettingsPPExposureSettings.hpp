#pragma once
#include <cstdint>
#include "FRenderSettingsPPExposure.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPExposureSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPExposure> Settings; // 0x30
    static URenderSettingsPPExposureSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
