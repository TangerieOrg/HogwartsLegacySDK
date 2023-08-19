#pragma once
#include <cstdint>
#include "UInteractiveTool.hpp"
class UDrawPolygonToolStandardProperties;
class UPlaneDistanceFromHitMechanic;
class UDrawPolygonToolSnapProperties;
class UNewMeshMaterialProperties;
class UPreviewMesh;
class UTransformGizmo;
class UTransformProxy;
#pragma pack(push, 1)
class UDrawPolygonTool : public UInteractiveTool {
public:
    char pad_80[0x8];
    UDrawPolygonToolStandardProperties* PolygonProperties; // 0x88
    UDrawPolygonToolSnapProperties* SnapProperties; // 0x90
    UNewMeshMaterialProperties* MaterialProperties; // 0x98
    char pad_a0[0xb0];
    UPreviewMesh* PreviewMesh; // 0x150
    UTransformGizmo* PlaneTransformGizmo; // 0x158
    UTransformProxy* PlaneTransformProxy; // 0x160
    char pad_168[0x3d8];
    UPlaneDistanceFromHitMechanic* HeightMechanic; // 0x540
    char pad_548[0x28];
    static UDrawPolygonTool* StaticClass();
}; // Size: 0x570
#pragma pack(pop)
