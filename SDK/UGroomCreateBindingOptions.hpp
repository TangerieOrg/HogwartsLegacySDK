#pragma once
#include <cstdint>
#include "EGroomBindingMeshType.hpp"
#include "UObject.hpp"
class USkeletalMesh;
class UGeometryCache;
#pragma pack(push, 1)
class UGroomCreateBindingOptions : public UObject {
public:
    EGroomBindingMeshType GroomBindingType; // 0x28
    char pad_29[0x7];
    USkeletalMesh* SourceSkeletalMesh; // 0x30
    USkeletalMesh* TargetSkeletalMesh; // 0x38
    UGeometryCache* SourceGeometryCache; // 0x40
    UGeometryCache* TargetGeometryCache; // 0x48
    int32_t NumInterpolationPoints; // 0x50
    int32_t MatchingSection; // 0x54
    static UGroomCreateBindingOptions* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
