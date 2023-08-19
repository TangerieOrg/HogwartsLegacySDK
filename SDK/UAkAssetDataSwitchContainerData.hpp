#pragma once
#include <cstdint>
#include "UObject.hpp"
class UAkGroupValue;
class UAkMediaAsset;
#pragma pack(push, 1)
class UAkAssetDataSwitchContainerData : public UObject {
public:
    char pad_28[0x28];
    UAkGroupValue* DefaultGroupValue; // 0x50
    TArray<UAkMediaAsset*> MediaList; // 0x58
    TArray<UAkAssetDataSwitchContainerData*> Children; // 0x68
    static UAkAssetDataSwitchContainerData* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
