#pragma once
#include <cstdint>
#include "UMeshSurfacePointToolBuilder.hpp"
#pragma pack(push, 1)
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder {
public:
    char pad_30[0x8];
    static UEditMeshPolygonsToolBuilder* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
