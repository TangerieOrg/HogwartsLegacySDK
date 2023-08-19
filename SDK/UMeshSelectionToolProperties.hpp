#pragma once
#include <cstdint>
#include "EMeshFacesColorMode.hpp"
#include "EMeshSelectionToolPrimaryMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet {
public:
    EMeshSelectionToolPrimaryMode SelectionMode; // 0x60
    float AngleTolerance; // 0x64
    bool bHitBackFaces; // 0x68
    bool bShowWireframe; // 0x69
    char pad_6a[0x2];
    EMeshFacesColorMode FaceColorMode; // 0x6c
    static UMeshSelectionToolProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
