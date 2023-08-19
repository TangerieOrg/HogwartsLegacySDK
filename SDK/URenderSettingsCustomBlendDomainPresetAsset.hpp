#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainPresetAsset : public UDataAsset {
public:
    TArray<URenderSettingsCustomBlendDomain*> Domains; // 0x30
    static URenderSettingsCustomBlendDomainPresetAsset* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
