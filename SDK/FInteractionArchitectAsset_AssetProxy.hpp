#pragma once
#include <cstdint>
#include "FBaseArchitectAsset_AssetProxy.hpp"
class UClass;
#pragma pack(push, 1)
struct FInteractionArchitectAsset_AssetProxy : public FBaseArchitectAsset_AssetProxy {
    UClass* GeneratedClass; // 0x10
    float Probability; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
