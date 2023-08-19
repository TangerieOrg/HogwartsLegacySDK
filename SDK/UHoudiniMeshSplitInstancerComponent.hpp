#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class UStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;
#pragma pack(push, 1)
class UHoudiniMeshSplitInstancerComponent : public USceneComponent {
public:
    char pad_220[0x8];
    UMaterialInterface* OverrideMaterial; // 0x228
    UStaticMesh* InstancedMesh; // 0x230
    char pad_238[0x8];
    static UHoudiniMeshSplitInstancerComponent* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
