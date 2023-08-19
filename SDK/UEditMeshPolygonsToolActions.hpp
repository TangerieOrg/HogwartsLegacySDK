#pragma once
#include <cstdint>
#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#pragma pack(push, 1)
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet {
public:
    static UEditMeshPolygonsToolActions* StaticClass();
    void Retriangulate();
    void RecalcNormals();
    void Outset();
    void Offset();
    void Merge();
    void Inset();
    void Flip();
    void Extrude();
    void Disconnect();
    void DELETE();
    void Decompose();
    void CutFaces();
}; // Size: 0x68
#pragma pack(pop)
