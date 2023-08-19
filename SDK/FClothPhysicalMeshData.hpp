#pragma once
#include <cstdint>
#include "FClothTetherData.hpp"
#include "FClothVertBoneData.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FClothPhysicalMeshData {
    TArray<FVector> Vertices; // 0x0
    TArray<FVector> Normals; // 0x10
    TArray<uint32_t> Indices; // 0x20
    char pad_30[0x50];
    TArray<float> InverseMasses; // 0x80
    TArray<FClothVertBoneData> BoneData; // 0x90
    TArray<uint32_t> SelfCollisionIndices; // 0xa0
    FClothTetherData EuclideanTethers; // 0xb0
    FClothTetherData GeodesicTethers; // 0xc0
    int32_t MaxBoneWeights; // 0xd0
    int32_t NumFixedVerts; // 0xd4
}; // Size: 0xd8
#pragma pack(pop)
