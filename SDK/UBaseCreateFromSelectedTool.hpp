#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UMultiSelectionTool.hpp"
class UTransformInputsToolProperties;
class UBaseCreateFromSelectedHandleSourceProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UTransformProxy;
class UTransformGizmo;
#pragma pack(push, 1)
class UBaseCreateFromSelectedTool : public UMultiSelectionTool {
public:
    char pad_90[0x8];
    UTransformInputsToolProperties* TransformProperties; // 0x98
    UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties; // 0xa0
    UMeshOpPreviewWithBackgroundCompute* Preview; // 0xa8
    TArray<UTransformProxy*> TransformProxies; // 0xb0
    TArray<UTransformGizmo*> TransformGizmos; // 0xc0
    TArray<FVector> TransformInitialScales; // 0xd0
    char pad_e0[0x10];
    static UBaseCreateFromSelectedTool* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
