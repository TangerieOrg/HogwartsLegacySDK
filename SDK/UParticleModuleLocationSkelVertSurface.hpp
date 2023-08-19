#pragma once
#include <cstdint>
#include "ELocationSkelVertSurfaceSource.hpp"
#include "FVector.hpp"
#include "UParticleModuleLocationBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase {
public:
    ELocationSkelVertSurfaceSource SourceType; // 0x30
    char pad_31[0x3];
    FVector UniversalOffset; // 0x34
    uint8_t bUpdatePositionEachFrame : 1; // 0x40
    uint8_t bOrientMeshEmitters : 1; // 0x40
    uint8_t bInheritBoneVelocity : 1; // 0x40
    uint8_t pad_bitfield_40_3 : 5;
    char pad_41[0x3];
    float InheritVelocityScale; // 0x44
    FName SkelMeshActorParamName; // 0x48
    TArray<FName> ValidAssociatedBones; // 0x50
    uint8_t bEnforceNormalCheck : 1; // 0x60
    uint8_t pad_bitfield_60_1 : 7;
    char pad_61[0x3];
    FVector NormalToCompare; // 0x64
    float NormalCheckToleranceDegrees; // 0x70
    float NormalCheckTolerance; // 0x74
    TArray<int32_t> ValidMaterialIndices; // 0x78
    uint8_t bInheritVertexColor : 1; // 0x88
    uint8_t bInheritUV : 1; // 0x88
    uint8_t pad_bitfield_88_2 : 6;
    char pad_89[0x3];
    uint32_t InheritUVChannel; // 0x8c
    static UParticleModuleLocationSkelVertSurface* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
