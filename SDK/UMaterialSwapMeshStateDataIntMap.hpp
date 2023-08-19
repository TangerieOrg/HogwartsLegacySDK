#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateData.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateDataIntMap : public UMaterialSwapMeshStateData {
public:
    char pad_28[0x50];
    static UMaterialSwapMeshStateDataIntMap* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
