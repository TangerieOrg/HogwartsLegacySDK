#pragma once
#include <cstdint>
#include "FRenderSettingsPPColorGrading.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPColorGradingSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPColorGrading> Settings; // 0x30
    static URenderSettingsPPColorGradingSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
