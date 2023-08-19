#pragma once
#include <cstdint>
#include "FClothVertBoneData.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UClothPhysicalMeshDataBase_Legacy : public UObject {
public:
    TArray<FVector> Vertices; // 0x28
    TArray<FVector> Normals; // 0x38
    TArray<uint32_t> Indices; // 0x48
    TArray<float> InverseMasses; // 0x58
    TArray<FClothVertBoneData> BoneData; // 0x68
    int32_t NumFixedVerts; // 0x78
    int32_t MaxBoneWeights; // 0x7c
    TArray<uint32_t> SelfCollisionIndices; // 0x80
    char pad_90[0x50];
    static UClothPhysicalMeshDataBase_Legacy* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
