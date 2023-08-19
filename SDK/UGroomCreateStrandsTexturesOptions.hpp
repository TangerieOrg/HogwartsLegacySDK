#pragma once
#include <cstdint>
#include "EStrandsTexturesMeshType.hpp"
#include "EStrandsTexturesTraceType.hpp"
#include "UObject.hpp"
class UStaticMesh;
class USkeletalMesh;
#pragma pack(push, 1)
class UGroomCreateStrandsTexturesOptions : public UObject {
public:
    int32_t Resolution; // 0x28
    EStrandsTexturesTraceType TraceType; // 0x2c
    char pad_2d[0x3];
    float TraceDistance; // 0x30
    EStrandsTexturesMeshType MeshType; // 0x34
    char pad_35[0x3];
    UStaticMesh* StaticMesh; // 0x38
    USkeletalMesh* SkeletalMesh; // 0x40
    int32_t LODIndex; // 0x48
    int32_t SectionIndex; // 0x4c
    int32_t UVChannelIndex; // 0x50
    char pad_54[0x4];
    TArray<int32_t> GroupIndex; // 0x58
    static UGroomCreateStrandsTexturesOptions* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
