#pragma once
#include <cstdint>
#include "UMeshSurfacePointTool.hpp"
class USimpleDynamicMeshComponent;
class UDeformMeshPolygonsTransformProperties;
#pragma pack(push, 1)
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool {
public:
    char pad_c0[0x8];
    USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xc8
    UDeformMeshPolygonsTransformProperties* TransformProps; // 0xd0
    char pad_d8[0x12e8];
    static UDeformMeshPolygonsTool* StaticClass();
}; // Size: 0x13c0
#pragma pack(pop)
