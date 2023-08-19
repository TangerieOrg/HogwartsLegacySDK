#pragma once
#include <cstdint>
#include "FAnimSetMeshLinkup.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAnimSet : public UObject {
public:
    uint8_t bAnimRotationOnly : 1; // 0x28
    uint8_t pad_bitfield_28_1 : 7;
    char pad_29[0x7];
    TArray<FName> TrackBoneNames; // 0x30
    TArray<FAnimSetMeshLinkup> LinkupCache; // 0x40
    TArray<uint8_t> BoneUseAnimTranslation; // 0x50
    TArray<uint8_t> ForceUseMeshTranslation; // 0x60
    TArray<FName> UseTranslationBoneNames; // 0x70
    TArray<FName> ForceMeshTranslationBoneNames; // 0x80
    FName PreviewSkelMeshName; // 0x90
    FName BestRatioSkelMeshName; // 0x98
    char pad_a0[0x50];
    static UAnimSet* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
