#pragma once
#include <cstdint>
#include "EGroomBindingMeshType.hpp"
#include "FGoomBindingGroupInfo.hpp"
#include "UObject.hpp"
class UGroomAsset;
class USkeletalMesh;
class UGeometryCache;
#pragma pack(push, 1)
class UGroomBindingAsset : public UObject {
public:
    EGroomBindingMeshType GroomBindingType; // 0x28
    char pad_29[0x7];
    UGroomAsset* Groom; // 0x30
    USkeletalMesh* SourceSkeletalMesh; // 0x38
    USkeletalMesh* TargetSkeletalMesh; // 0x40
    UGeometryCache* SourceGeometryCache; // 0x48
    UGeometryCache* TargetGeometryCache; // 0x50
    int32_t NumInterpolationPoints; // 0x58
    int32_t MatchingSection; // 0x5c
    TArray<FGoomBindingGroupInfo> GroupInfos; // 0x60
    char pad_70[0x40];
    static UGroomBindingAsset* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
