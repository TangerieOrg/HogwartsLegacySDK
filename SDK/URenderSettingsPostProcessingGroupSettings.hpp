#pragma once
#include <cstdint>
#include "FRenderSettingsPostProcessingGroup.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPostProcessingGroupSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPostProcessingGroup> Settings; // 0x30
    static URenderSettingsPostProcessingGroupSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
