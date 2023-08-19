#pragma once
#include <cstdint>
#include "UMeshSurfacePointTool.hpp"
class UExistingMeshMaterialProperties;
class UMaterialInstanceDynamic;
class USimpleDynamicMeshComponent;
class UMultiTransformer;
class UPolygonSelectionMechanic;
#pragma pack(push, 1)
class UEditUVIslandsTool : public UMeshSurfacePointTool {
public:
    char pad_c0[0x8];
    UExistingMeshMaterialProperties* MaterialSettings; // 0xc8
    UMaterialInstanceDynamic* CheckerMaterial; // 0xd0
    USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd8
    UPolygonSelectionMechanic* SelectionMechanic; // 0xe0
    char pad_e8[0x8];
    UMultiTransformer* MultiTransformer; // 0xf0
    char pad_f8[0x288];
    static UEditUVIslandsTool* StaticClass();
}; // Size: 0x380
#pragma pack(pop)
