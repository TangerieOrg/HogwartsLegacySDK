#pragma once
#include <cstdint>
#include "UBaseVoxelTool.hpp"
class UVoxelMorphologyMeshesToolProperties;
#pragma pack(push, 1)
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool {
public:
    UVoxelMorphologyMeshesToolProperties* MorphologyProperties; // 0x108
    static UVoxelMorphologyMeshesTool* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
