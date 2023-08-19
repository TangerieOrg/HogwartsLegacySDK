#pragma once
#include <cstdint>
#include "FRenderSettingsPPProbes.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPProbesSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPProbes> Settings; // 0x30
    static URenderSettingsPPProbesSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
