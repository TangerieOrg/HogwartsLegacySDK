#pragma once
#include <cstdint>
#include "EMorphologyOperation.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet {
public:
    EMorphologyOperation Operation; // 0x60
    char pad_61[0x7];
    double Distance; // 0x68
    bool bSolidifyInput; // 0x70
    bool bRemoveInternalsAfterSolidify; // 0x71
    char pad_72[0x6];
    double OffsetSolidifySurface; // 0x78
    static UVoxelMorphologyMeshesToolProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
