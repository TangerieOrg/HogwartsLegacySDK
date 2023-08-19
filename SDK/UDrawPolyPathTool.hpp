#pragma once
#include <cstdint>
#include "UInteractiveTool.hpp"
class UDrawPolyPathProperties;
class UDrawPolyPathExtrudeProperties;
class UPlaneDistanceFromHitMechanic;
class UNewMeshMaterialProperties;
class UConstructionPlaneMechanic;
class UPolyEditPreviewMesh;
class USpatialCurveDistanceMechanic;
class UCollectSurfacePathMechanic;
#pragma pack(push, 1)
class UDrawPolyPathTool : public UInteractiveTool {
public:
    char pad_80[0x20];
    UDrawPolyPathProperties* TransformProps; // 0xa0
    UDrawPolyPathExtrudeProperties* ExtrudeProperties; // 0xa8
    UNewMeshMaterialProperties* MaterialProperties; // 0xb0
    char pad_b8[0x88];
    UConstructionPlaneMechanic* PlaneMechanic; // 0x140
    char pad_148[0xa0];
    UPolyEditPreviewMesh* EditPreview; // 0x1e8
    UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic; // 0x1f0
    USpatialCurveDistanceMechanic* CurveDistMechanic; // 0x1f8
    UCollectSurfacePathMechanic* SurfacePathMechanic; // 0x200
    char pad_208[0x8];
    static UDrawPolyPathTool* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
