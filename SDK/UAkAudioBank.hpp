#pragma once
#include <cstdint>
#include "UAkAssetBase.hpp"
class UAkAssetPlatformData;
#pragma pack(push, 1)
class UAkAudioBank : public UAkAssetBase {
public:
    bool AutoLoad; // 0x50
    char pad_51[0xa7];
    UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xf8
    char pad_100[0x20];
    static UAkAudioBank* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
