#pragma once
#include <cstdint>
#include "UBaseVoxelTool.hpp"
class UVoxelBlendMeshesToolProperties;
#pragma pack(push, 1)
class UVoxelBlendMeshesTool : public UBaseVoxelTool {
public:
    UVoxelBlendMeshesToolProperties* BlendProperties; // 0x108
    static UVoxelBlendMeshesTool* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
