#pragma once
#include <cstdint>
#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#pragma pack(push, 1)
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet {
public:
    static UEditMeshPolygonsToolActions_Triangles* StaticClass();
    void RecalcNormals();
    void Poke();
    void Outset();
    void Offset();
    void Inset();
    void Flip();
    void Extrude();
    void Disconnect();
    void DELETE();
    void CutFaces();
}; // Size: 0x68
#pragma pack(pop)
