#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UCloudParams;
#pragma pack(push, 1)
class UCloudDefinitions : public UDataAsset {
public:
    TArray<UCloudParams*> Definitions; // 0x30
    static UCloudDefinitions* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
