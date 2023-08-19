#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateFloatMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateBoundsScale : public UMaterialSwapMeshStateFloatMap {
public:
    float BoundsScale; // 0x28
    char pad_2c[0x4];
    static UMaterialSwapMeshStateBoundsScale* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
