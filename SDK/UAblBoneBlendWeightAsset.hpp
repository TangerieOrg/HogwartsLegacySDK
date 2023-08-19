#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FPerBoneBlendWeight.hpp"
#include "UDataAsset.hpp"
class USkeleton;
#pragma pack(push, 1)
class UAblBoneBlendWeightAsset : public UDataAsset {
public:
    float DefaultBoneWeight; // 0x30
    char pad_34[0x4];
    USkeleton* Skeleton; // 0x38
    TArray<FPerBoneBlendWeight> PerBoneBlendWeights; // 0x40
    TArray<FPerBoneBlendWeight> InversePerBoneBlendWeights; // 0x50
    FGuid SkeletonGuid; // 0x60
    FGuid VirtualBoneGuid; // 0x70
    bool bMeshSpaceRotationBlend; // 0x80
    bool BlendWeightsDirty; // 0x81
    char pad_82[0x6];
    static UAblBoneBlendWeightAsset* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
