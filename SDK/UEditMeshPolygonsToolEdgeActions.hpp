#pragma once
#include <cstdint>
#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#pragma pack(push, 1)
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet {
public:
    static UEditMeshPolygonsToolEdgeActions* StaticClass();
    void Weld();
    void Straighten();
    void FillHole();
}; // Size: 0x68
#pragma pack(pop)
