#pragma once
#include <cstdint>
#include "FFilePath.hpp"
#pragma pack(push, 1)
struct FBlueprintEditorPromotionSettings {
    FFilePath FirstMeshPath; // 0x0
    FFilePath SecondMeshPath; // 0x10
    FFilePath DefaultParticleAsset; // 0x20
}; // Size: 0x30
#pragma pack(pop)
