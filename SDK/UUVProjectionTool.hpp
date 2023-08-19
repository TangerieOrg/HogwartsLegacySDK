#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class UUVProjectionToolProperties;
class UUVProjectionAdvancedProperties;
class UMaterialInstanceDynamic;
class UExistingMeshMaterialProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UTransformProxy;
class UTransformGizmo;
#pragma pack(push, 1)
class UUVProjectionTool : public UMultiSelectionTool {
public:
    UUVProjectionToolProperties* BasicProperties; // 0x90
    UUVProjectionAdvancedProperties* AdvancedProperties; // 0x98
    UExistingMeshMaterialProperties* MaterialSettings; // 0xa0
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews; // 0xa8
    UMaterialInstanceDynamic* CheckerMaterial; // 0xb8
    TArray<UTransformGizmo*> TransformGizmos; // 0xc0
    TArray<UTransformProxy*> TransformProxies; // 0xd0
    char pad_e0[0x140];
    static UUVProjectionTool* StaticClass();
}; // Size: 0x220
#pragma pack(pop)
