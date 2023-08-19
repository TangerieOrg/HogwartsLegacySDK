#pragma once
#include <cstdint>
#include "FMeshStateLightingFeatures.hpp"
#include "UMaterialSwapMeshStateIntMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateLightingFeatures : public UMaterialSwapMeshStateIntMap {
public:
    FMeshStateLightingFeatures LightingFeatures; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateLightingFeatures* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
