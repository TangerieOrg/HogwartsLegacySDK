#pragma once
#include <cstdint>
#include "AActor.hpp"
class UVolumeTexture;
class UMaterial;
#pragma pack(push, 1)
class AGeometryCollectionRenderLevelSetActor : public AActor {
public:
    UVolumeTexture* TargetVolumeTexture; // 0x248
    UMaterial* RayMarchMaterial; // 0x250
    float SurfaceTolerance; // 0x258
    float Isovalue; // 0x25c
    bool Enabled; // 0x260
    bool RenderVolumeBoundingBox; // 0x261
    char pad_262[0x7e];
    static AGeometryCollectionRenderLevelSetActor* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
