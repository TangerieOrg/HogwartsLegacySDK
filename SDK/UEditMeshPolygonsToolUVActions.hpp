#pragma once
#include <cstdint>
#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#pragma pack(push, 1)
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet {
public:
    static UEditMeshPolygonsToolUVActions* StaticClass();
    void PlanarProjection();
}; // Size: 0x68
#pragma pack(pop)
