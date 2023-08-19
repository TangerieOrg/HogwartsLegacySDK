#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#include "UMultiSelectionTool.hpp"
class UPlaneCutToolProperties;
class UAcceptOutputProperties;
class UDynamicMeshReplacementChangeTarget;
class UTransformGizmo;
class UMeshOpPreviewWithBackgroundCompute;
class UTransformProxy;
#pragma pack(push, 1)
class UPlaneCutTool : public UMultiSelectionTool {
public:
    char pad_90[0x8];
    UPlaneCutToolProperties* BasicProperties; // 0x98
    UAcceptOutputProperties* AcceptProperties; // 0xa0
    FVector CutPlaneOrigin; // 0xa8
    char pad_b4[0xc];
    FQuat CutPlaneOrientation; // 0xc0
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xd0
    TArray<UDynamicMeshReplacementChangeTarget*> MeshesToCut; // 0xe0
    char pad_f0[0x58];
    UTransformGizmo* PlaneTransformGizmo; // 0x148
    UTransformProxy* PlaneTransformProxy; // 0x150
    char pad_158[0x8];
    static UPlaneCutTool* StaticClass();
    void Cut();
}; // Size: 0x160
#pragma pack(pop)
