#pragma once
#include <cstdint>
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
#pragma pack(push, 1)
struct FLocalStencilEffectMeshBase {
    UStaticMeshComponent* MeshComponent; // 0x0
    TArray<UMaterialInterface*> OriginalMaterials; // 0x8
    TArray<UMaterialInstanceDynamic*> DynamicMaterials; // 0x18
}; // Size: 0x28
#pragma pack(pop)
