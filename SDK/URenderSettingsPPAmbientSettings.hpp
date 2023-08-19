#pragma once
#include <cstdint>
#include "FRenderSettingsPPAmbient.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPAmbientSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPAmbient> Settings; // 0x30
    static URenderSettingsPPAmbientSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
