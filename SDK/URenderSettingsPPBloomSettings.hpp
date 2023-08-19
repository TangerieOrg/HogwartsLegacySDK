#pragma once
#include <cstdint>
#include "FRenderSettingsPPBloom.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPBloomSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPBloom> Settings; // 0x30
    static URenderSettingsPPBloomSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
