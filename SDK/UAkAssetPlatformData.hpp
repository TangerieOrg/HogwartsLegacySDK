#pragma once
#include <cstdint>
#include "UObject.hpp"
class UAkAssetData;
#pragma pack(push, 1)
class UAkAssetPlatformData : public UObject {
public:
    UAkAssetData* CurrentAssetData; // 0x28
    static UAkAssetPlatformData* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
