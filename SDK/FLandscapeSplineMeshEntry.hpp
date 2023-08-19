#pragma once
#include <cstdint>
#include "ESplineMeshAxis\Type.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "LandscapeSplineMeshOrientation.hpp"
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
struct FLandscapeSplineMeshEntry {
    UStaticMesh* Mesh; // 0x0
    TArray<UMaterialInterface*> MaterialOverrides; // 0x8
    uint8_t bCenterH : 1; // 0x18
    uint8_t pad_bitfield_18_1 : 7;
    char pad_19[0x3];
    FVector2D CenterAdjust; // 0x1c
    uint8_t bScaleToWidth : 1; // 0x24
    uint8_t pad_bitfield_24_1 : 7;
    char pad_25[0x3];
    FVector Scale; // 0x28
    LandscapeSplineMeshOrientation Orientation; // 0x34
    ESplineMeshAxis::Type ForwardAxis; // 0x35
    ESplineMeshAxis::Type UpAxis; // 0x36
    char pad_37[0x1];
}; // Size: 0x38
#pragma pack(pop)
