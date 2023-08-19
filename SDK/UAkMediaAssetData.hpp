#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkMediaAssetData : public UObject {
public:
    bool IsStreamed; // 0x28
    bool UseDeviceMemory; // 0x29
    char pad_2a[0x6];
    FString Language; // 0x30
    FString AssetPlatform; // 0x40
    char pad_50[0x28];
    static UAkMediaAssetData* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
