#pragma once
#include <cstdint>
#include "UInteractiveGizmo.hpp"
class UPreviewMesh;
class UMaterialInstance;
#pragma pack(push, 1)
class UPositionPlaneGizmo : public UInteractiveGizmo {
public:
    char pad_38[0x50];
    UPreviewMesh* CenterBallShape; // 0x88
    UMaterialInstance* CenterBallMaterial; // 0x90
    char pad_98[0x488];
    static UPositionPlaneGizmo* StaticClass();
}; // Size: 0x520
#pragma pack(pop)
