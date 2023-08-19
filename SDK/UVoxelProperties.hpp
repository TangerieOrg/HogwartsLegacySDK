#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UVoxelProperties : public UInteractiveToolPropertySet {
public:
    int32_t VoxelCount; // 0x60
    bool bAutoSimplify; // 0x64
    bool bRemoveInternalSurfaces; // 0x65
    char pad_66[0x2];
    double SimplifyMaxErrorFactor; // 0x68
    double CubeRootMinComponentVolume; // 0x70
    static UVoxelProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
