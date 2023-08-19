#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSimpleTopologyVoxelArrayDebug {
    bool bShowEmptySpace; // 0x0
    bool bShowSurfaceVoxels; // 0x1
    bool bShowSurfaceNormals; // 0x2
    bool bShowPointCenterOffset; // 0x3
    bool bShowSurfacePlanes; // 0x4
    bool bShowInterior; // 0x5
    bool bShowPendingCompute; // 0x6
    char pad_7[0x1];
    float PlaneOffset; // 0x8
}; // Size: 0xc
#pragma pack(pop)
