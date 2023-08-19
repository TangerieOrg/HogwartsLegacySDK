#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
class UProceduralMeshComponent;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FPlanet {
    UProceduralMeshComponent* MeshComponent; // 0x0
    UMaterialInstanceDynamic* DynamicMaterial; // 0x8
    FName Name; // 0x10
    FLinearColor Color; // 0x18
    float Brightness; // 0x28
    float DayModulate; // 0x2c
    float SizeModulate; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
