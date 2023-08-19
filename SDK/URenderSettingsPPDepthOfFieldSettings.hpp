#pragma once
#include <cstdint>
#include "FRenderSettingsPPDepthOfField.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPDepthOfFieldSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPDepthOfField> Settings; // 0x30
    static URenderSettingsPPDepthOfFieldSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
