#pragma once
#include <cstdint>
#include "FClothLODDataCommon.hpp"
#include "UClothingAssetBase.hpp"
class UPhysicsAsset;
class UClothingAssetCustomData;
#pragma pack(push, 1)
class UClothingAssetCommon : public UClothingAssetBase {
public:
    UPhysicsAsset* PhysicsAsset; // 0x48
    char pad_50[0x50];
    TArray<FClothLODDataCommon> LODData; // 0xa0
    TArray<int32_t> LodMap; // 0xb0
    TArray<FName> UsedBoneNames; // 0xc0
    TArray<int32_t> UsedBoneIndices; // 0xd0
    int32_t ReferenceBoneIndex; // 0xe0
    char pad_e4[0x4];
    UClothingAssetCustomData* CustomData; // 0xe8
    static UClothingAssetCommon* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
