#pragma once
#include <cstdint>
#include "FBaseArchitectAsset_AssetProxy.hpp"
class UObject;
#pragma pack(push, 1)
struct FPreLoadAssetArchitectAsset_AssetProxy : public FBaseArchitectAsset_AssetProxy {
    UObject* ObjectAsset; // 0x10
    float Probability; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
