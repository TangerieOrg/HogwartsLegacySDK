#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UMeshInspectorProperties : public UInteractiveToolPropertySet {
public:
    bool bWireframe; // 0x60
    bool bBoundaryEdges; // 0x61
    bool bBowtieVertices; // 0x62
    bool bPolygonBorders; // 0x63
    bool bUVSeams; // 0x64
    bool bUVBowties; // 0x65
    bool bNormalSeams; // 0x66
    bool bNormalVectors; // 0x67
    bool bTangentVectors; // 0x68
    char pad_69[0x3];
    float NormalLength; // 0x6c
    float TangentLength; // 0x70
    char pad_74[0x4];
    static UMeshInspectorProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
