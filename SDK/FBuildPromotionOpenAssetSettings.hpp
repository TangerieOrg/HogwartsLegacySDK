#pragma once
#include <cstdint>
#include "FFilePath.hpp"
#pragma pack(push, 1)
struct FBuildPromotionOpenAssetSettings {
    FFilePath BlueprintAsset; // 0x0
    FFilePath MaterialAsset; // 0x10
    FFilePath ParticleSystemAsset; // 0x20
    FFilePath SkeletalMeshAsset; // 0x30
    FFilePath StaticMeshAsset; // 0x40
    FFilePath TextureAsset; // 0x50
}; // Size: 0x60
#pragma pack(pop)
