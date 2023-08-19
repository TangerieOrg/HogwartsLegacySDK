#pragma once
#include <cstdint>
#include "UAkAudioType.hpp"
class UAkAssetPlatformData;
#pragma pack(push, 1)
class UAkAssetBase : public UAkAudioType {
public:
    UAkAssetPlatformData* PlatformAssetData; // 0x40
    char pad_48[0x8];
    static UAkAssetBase* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
