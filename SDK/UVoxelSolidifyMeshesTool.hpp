#pragma once
#include <cstdint>
#include "UBaseVoxelTool.hpp"
class UVoxelSolidifyMeshesToolProperties;
#pragma pack(push, 1)
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool {
public:
    UVoxelSolidifyMeshesToolProperties* SolidifyProperties; // 0x108
    static UVoxelSolidifyMeshesTool* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
