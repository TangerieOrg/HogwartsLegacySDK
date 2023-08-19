#pragma once
#include <cstdint>
#include "FAkPluginInfo.hpp"
#include "UAkAssetDataWithMedia.hpp"
#pragma pack(push, 1)
class UAkInitBankAssetData : public UAkAssetDataWithMedia {
public:
    TArray<FAkPluginInfo> PluginInfos; // 0x88
    static UAkInitBankAssetData* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
