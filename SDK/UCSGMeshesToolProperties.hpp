#pragma once
#include <cstdint>
#include "ECSGOperation.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet {
public:
    ECSGOperation Operation; // 0x60
    bool bShowNewBoundaryEdges; // 0x61
    bool bAttemptFixHoles; // 0x62
    bool bOnlyUseFirstMeshMaterials; // 0x63
    char pad_64[0x4];
    static UCSGMeshesToolProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
