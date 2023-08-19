#pragma once
#include <cstdint>
#include "UFoliageType.hpp"
class UStaticMesh;
class UMaterialInterface;
class UClass;
#pragma pack(push, 1)
class UFoliageType_InstancedStaticMesh : public UFoliageType {
public:
    UStaticMesh* Mesh; // 0x3b8
    TArray<UMaterialInterface*> OverrideMaterials; // 0x3c0
    UClass* ComponentClass; // 0x3d0
    char pad_3d8[0x50];
    TArray<void*> SpringOverrideMaterials; // 0x428
    TArray<void*> SummerOverrideMaterials; // 0x438
    TArray<void*> FallOverrideMaterials; // 0x448
    TArray<void*> WinterOverrideMaterials; // 0x458
    static UFoliageType_InstancedStaticMesh* StaticClass();
}; // Size: 0x468
#pragma pack(pop)
