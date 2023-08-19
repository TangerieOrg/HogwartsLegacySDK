#pragma once
#include <cstdint>
#include "FLightingChannels.hpp"
#include "UMaterialSwapMeshStateIntMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateLightingChannels : public UMaterialSwapMeshStateIntMap {
public:
    FLightingChannels LightingChannels; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateLightingChannels* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
