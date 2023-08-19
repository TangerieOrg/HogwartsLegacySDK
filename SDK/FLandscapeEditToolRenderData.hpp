#pragma once
#include <cstdint>
class UMaterialInterface;
class UTexture2D;
#pragma pack(push, 1)
struct FLandscapeEditToolRenderData {
    UMaterialInterface* ToolMaterial; // 0x0
    UMaterialInterface* GizmoMaterial; // 0x8
    int32_t SelectedType; // 0x10
    int32_t DebugChannelR; // 0x14
    int32_t DebugChannelG; // 0x18
    int32_t DebugChannelB; // 0x1c
    UTexture2D* DataTexture; // 0x20
    UTexture2D* LayerContributionTexture; // 0x28
    UTexture2D* DirtyTexture; // 0x30
}; // Size: 0x38
#pragma pack(pop)
