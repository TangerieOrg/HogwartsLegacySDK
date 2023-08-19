#pragma once
#include <cstdint>
#include "UAssetUserData.hpp"
class UAnimLayersAsset;
#pragma pack(push, 1)
class UAnimLayersAssetUserData : public UAssetUserData {
public:
    UAnimLayersAsset* AnimLayers; // 0x28
    static UAnimLayersAssetUserData* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
