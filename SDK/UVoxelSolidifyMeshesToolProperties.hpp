#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet {
public:
    double WindingThreshold; // 0x60
    double ExtendBounds; // 0x68
    int32_t SurfaceSearchSteps; // 0x70
    bool bSolidAtBoundaries; // 0x74
    bool bMakeOffsetSurfaces; // 0x75
    char pad_76[0x2];
    double OffsetThickness; // 0x78
    static UVoxelSolidifyMeshesToolProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
