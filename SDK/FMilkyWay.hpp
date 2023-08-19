#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FMilkyWayCorrection.hpp"
class UStaticMesh;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UCurveFloat;
#pragma pack(push, 1)
struct FMilkyWay {
    UStaticMesh* Mesh; // 0x0
    UStaticMeshComponent* MeshComponent; // 0x8
    TArray<UMaterialInterface*> OriginalMaterials; // 0x10
    TArray<UMaterialInstanceDynamic*> DynamicMaterials; // 0x20
    float BaseBrightness; // 0x30
    float Contrast; // 0x34
    float Desaturation; // 0x38
    FLinearColor SolidColor; // 0x3c
    float SolidColorBlend; // 0x4c
    float AlphaEdgePower; // 0x50
    char pad_54[0x4];
    UCurveFloat* MoonBrightnessModifier; // 0x58
    UCurveFloat* MoonFadePower; // 0x60
    FMilkyWayCorrection Correction; // 0x68
    bool bCorrection; // 0x78
    char pad_79[0x7];
}; // Size: 0x80
#pragma pack(pop)
