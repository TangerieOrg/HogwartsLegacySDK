#pragma once
#include <cstdint>
#include "ECharacterPieceGenderEnum.hpp"
#include "EGloveTypeEnum.hpp"
#include "EHatTypeEnum.hpp"
#include "EPantLengthEnum.hpp"
#include "ERobeShoulderTypeEnum.hpp"
#include "ERobeTypeEnum.hpp"
#include "EShoeHeightEnum.hpp"
#include "ESleeveLengthEnum.hpp"
#include "FCharacterPieceCharacterClassification.hpp"
#include "FCharacterPieceNiagaraSystem.hpp"
#include "FCharacterPieceType.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMaterialOverride.hpp"
#include "FMeshOverride.hpp"
#include "UDataAsset.hpp"
class USkeletalMesh;
class UPoseAsset;
class UClass;
#pragma pack(push, 1)
class UCharacterPiece : public UDataAsset {
public:
    FCharacterPieceCharacterClassification CharacterClassification; // 0x30
    FCharacterPieceType CharacterPieceType; // 0x38
    FGameplayTagContainer Tags; // 0x40
    ECharacterPieceGenderEnum Gender; // 0x60
    ESleeveLengthEnum SleeveLength; // 0x61
    EHatTypeEnum HatType; // 0x62
    EShoeHeightEnum ShoeHeight; // 0x63
    EPantLengthEnum PantLength; // 0x64
    ERobeTypeEnum RobeType; // 0x65
    EGloveTypeEnum GloveType; // 0x66
    ERobeShoulderTypeEnum RobeShoulderType; // 0x67
    USkeletalMesh* DefaultMesh; // 0x68
    UPoseAsset* FacialPoseAsset; // 0x70
    TArray<FMeshOverride> MeshOverrides; // 0x78
    TArray<FMaterialOverride> MaterialOverrides; // 0x88
    TArray<FName> RegionNames; // 0x98
    TArray<FCharacterPieceNiagaraSystem> NiagaraSystems; // 0xa8
    UClass* AnimClass; // 0xb8
    static UCharacterPiece* StaticClass();
    FName ToId();
}; // Size: 0xc0
#pragma pack(pop)
