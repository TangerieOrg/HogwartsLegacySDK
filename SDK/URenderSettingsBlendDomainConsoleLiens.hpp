#pragma once
#include <cstdint>
#include "FRenderSettingsBlendDomainConsoleLien.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsBlendDomainConsoleLiens : public UDataAsset {
public:
    TArray<FRenderSettingsBlendDomainConsoleLien> Liens; // 0x30
    static URenderSettingsBlendDomainConsoleLiens* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
