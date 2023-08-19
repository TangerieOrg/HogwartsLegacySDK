#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet {
public:
    double BlendPower; // 0x60
    double BlendFalloff; // 0x68
    bool bSolidifyInput; // 0x70
    bool bRemoveInternalsAfterSolidify; // 0x71
    char pad_72[0x6];
    double OffsetSolidifySurface; // 0x78
    static UVoxelBlendMeshesToolProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
