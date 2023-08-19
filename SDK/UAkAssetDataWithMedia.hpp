#pragma once
#include <cstdint>
#include "UAkAssetData.hpp"
class UAkMediaAsset;
#pragma pack(push, 1)
class UAkAssetDataWithMedia : public UAkAssetData {
public:
    TArray<UAkMediaAsset*> MediaList; // 0x78
    static UAkAssetDataWithMedia* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
