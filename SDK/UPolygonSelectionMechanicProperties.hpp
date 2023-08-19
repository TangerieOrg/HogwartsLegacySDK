#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet {
public:
    bool bSelectFaces; // 0x60
    bool bSelectEdges; // 0x61
    bool bSelectVertices; // 0x62
    bool bSelectEdgeLoops; // 0x63
    bool bSelectEdgeRings; // 0x64
    bool bPreferProjectedElement; // 0x65
    bool bSelectDownRay; // 0x66
    bool bIgnoreOcclusion; // 0x67
    static UPolygonSelectionMechanicProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
