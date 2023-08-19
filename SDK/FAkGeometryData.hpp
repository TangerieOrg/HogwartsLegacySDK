#pragma once
#include <cstdint>
#include "FAkAcousticSurface.hpp"
#include "FAkTriangle.hpp"
#include "FVector.hpp"
class UPhysicalMaterial;
#pragma pack(push, 1)
struct FAkGeometryData {
    TArray<FVector> Vertices; // 0x0
    TArray<FAkAcousticSurface> Surfaces; // 0x10
    TArray<FAkTriangle> Triangles; // 0x20
    TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
    TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
}; // Size: 0x50
#pragma pack(pop)
