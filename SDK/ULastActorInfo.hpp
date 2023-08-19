#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
class UStaticMesh;
class UProceduralShapeToolProperties;
class UNewMeshMaterialProperties;
#pragma pack(push, 1)
class ULastActorInfo : public UObject {
public:
    char pad_28[0x10];
    AActor* Actor; // 0x38
    UStaticMesh* StaticMesh; // 0x40
    UProceduralShapeToolProperties* ShapeSettings; // 0x48
    UNewMeshMaterialProperties* MaterialProperties; // 0x50
    static ULastActorInfo* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
