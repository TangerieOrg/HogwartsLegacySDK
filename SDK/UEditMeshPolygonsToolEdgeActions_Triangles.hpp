#pragma once
#include <cstdint>
#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#pragma pack(push, 1)
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet {
public:
    static UEditMeshPolygonsToolEdgeActions_Triangles* StaticClass();
    void Weld();
    void Split();
    void Flip();
    void FillHole();
    void Collapse();
}; // Size: 0x68
#pragma pack(pop)
