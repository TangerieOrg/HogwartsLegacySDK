#pragma once
#include <cstdint>
#include "EGroupTopologyDeformationStrategy.hpp"
#include "EQuickTransformerMode.hpp"
#include "EWeightScheme.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet {
public:
    EGroupTopologyDeformationStrategy DeformationStrategy; // 0x60
    EQuickTransformerMode TransformMode; // 0x61
    bool bSelectFaces; // 0x62
    bool bSelectEdges; // 0x63
    bool bSelectVertices; // 0x64
    bool bSnapToWorldGrid; // 0x65
    bool bShowWireframe; // 0x66
    char pad_67[0x1];
    EWeightScheme SelectedWeightScheme; // 0x68
    char pad_6c[0x4];
    double HandleWeight; // 0x70
    bool bPostFixHandles; // 0x78
    char pad_79[0x7];
    static UDeformMeshPolygonsTransformProperties* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
