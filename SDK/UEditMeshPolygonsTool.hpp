#pragma once
#include <cstdint>
#include "UMeshSurfacePointTool.hpp"
class UEditMeshPolygonsToolActions_Triangles;
class USimpleDynamicMeshComponent;
class UEditMeshPolygonsToolEdgeActions_Triangles;
class UPolyEditCommonProperties;
class UEditMeshPolygonsToolActions;
class UEditMeshPolygonsToolEdgeActions;
class UPolygonSelectionMechanic;
class UEditMeshPolygonsToolUVActions;
class UPolyEditExtrudeProperties;
class UPolyEditOffsetProperties;
class UPolyEditInsetProperties;
class UPolyEditOutsetProperties;
class UPolyEditCutProperties;
class UPolyEditSetUVProperties;
class UMultiTransformer;
class UPolyEditPreviewMesh;
class UPlaneDistanceFromHitMechanic;
class USpatialCurveDistanceMechanic;
class UCollectSurfacePathMechanic;
#pragma pack(push, 1)
class UEditMeshPolygonsTool : public UMeshSurfacePointTool {
public:
    char pad_c0[0x10];
    USimpleDynamicMeshComponent* DynamicMeshComponent; // 0xd0
    UPolyEditCommonProperties* CommonProps; // 0xd8
    UEditMeshPolygonsToolActions* EditActions; // 0xe0
    UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles; // 0xe8
    UEditMeshPolygonsToolEdgeActions* EditEdgeActions; // 0xf0
    UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles; // 0xf8
    UEditMeshPolygonsToolUVActions* EditUVActions; // 0x100
    UPolyEditExtrudeProperties* ExtrudeProperties; // 0x108
    UPolyEditOffsetProperties* OffsetProperties; // 0x110
    UPolyEditInsetProperties* InsetProperties; // 0x118
    UPolyEditOutsetProperties* OutsetProperties; // 0x120
    UPolyEditCutProperties* CutProperties; // 0x128
    UPolyEditSetUVProperties* SetUVProperties; // 0x130
    UPolygonSelectionMechanic* SelectionMechanic; // 0x138
    char pad_140[0x8];
    UMultiTransformer* MultiTransformer; // 0x148
    char pad_150[0x350];
    UPolyEditPreviewMesh* EditPreview; // 0x4a0
    char pad_4a8[0x8];
    UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x4b0
    USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x4b8
    UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x4c0
    char pad_4c8[0x308];
    static UEditMeshPolygonsTool* StaticClass();
}; // Size: 0x7d0
#pragma pack(pop)
