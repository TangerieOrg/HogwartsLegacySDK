#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet {
public:
    bool bAttemptFixHoles; // 0x60
    bool bShowNewBoundaryEdges; // 0x61
    bool bTrimFlaps; // 0x62
    char pad_63[0x5];
    double WindingNumberThreshold; // 0x68
    bool bOnlyUseFirstMeshMaterials; // 0x70
    char pad_71[0x7];
    static USelfUnionMeshesToolProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
