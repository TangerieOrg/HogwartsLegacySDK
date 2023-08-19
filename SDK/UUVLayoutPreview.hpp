#pragma once
#include <cstdint>
#include "UObject.hpp"
class UUVLayoutPreviewProperties;
class UTriangleSetComponent;
class UPreviewMesh;
class UMaterialInterface;
#pragma pack(push, 1)
class UUVLayoutPreview : public UObject {
public:
    UUVLayoutPreviewProperties* Settings; // 0x28
    UPreviewMesh* PreviewMesh; // 0x30
    UTriangleSetComponent* TriangleComponent; // 0x38
    bool bShowBackingRectangle; // 0x40
    char pad_41[0x7];
    UMaterialInterface* BackingRectangleMaterial; // 0x48
    char pad_50[0xf0];
    static UUVLayoutPreview* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
