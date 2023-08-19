#pragma once
#include <cstdint>
#include "UAkAssetDataWithMedia.hpp"
class UAkAssetDataSwitchContainerData;
class UAkGroupValue;
#pragma pack(push, 1)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia {
public:
    TArray<UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x88
    UAkGroupValue* DefaultGroupValue; // 0x98
    char pad_a0[0x50];
    static UAkAssetDataSwitchContainer* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
