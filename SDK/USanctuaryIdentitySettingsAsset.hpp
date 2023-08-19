#pragma once
#include <cstdint>
#include "FSanctuaryIdentitySettings.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class USanctuaryIdentitySettingsAsset : public UDataAsset {
public:
    FSanctuaryIdentitySettings IdentitySettings; // 0x30
    static USanctuaryIdentitySettingsAsset* StaticClass();
}; // Size: 0x6b0
#pragma pack(pop)
