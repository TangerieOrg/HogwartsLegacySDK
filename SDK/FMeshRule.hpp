#pragma once
#include <cstdint>
#include "EComparisonEnum.hpp"
#include "EGenderEnum.hpp"
#include "EGloveTypeEnum.hpp"
#include "EHatTypeEnum.hpp"
#include "EPantLengthEnum.hpp"
#include "ERobeShoulderTypeEnum.hpp"
#include "ERobeTypeEnum.hpp"
#include "EShoeHeightEnum.hpp"
#include "ESleeveLengthEnum.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FMeshRule {
    FName CharacterID; // 0x0
    FName RuleType; // 0x8
    EComparisonEnum Comparison; // 0x10
    char pad_11[0x3];
    FName CharacterType; // 0x14
    EGenderEnum Gender; // 0x1c
    ESleeveLengthEnum SleeveLength; // 0x1d
    EHatTypeEnum HatType; // 0x1e
    EShoeHeightEnum ShoeHeight; // 0x1f
    EPantLengthEnum PantLength; // 0x20
    ERobeTypeEnum RobeType; // 0x21
    EGloveTypeEnum GloveType; // 0x22
    ERobeShoulderTypeEnum RobeShoulderType; // 0x23
    char pad_24[0x4];
    FGameplayTagContainer Tags; // 0x28
    FGameplayTagContainer CharacterPieceTags; // 0x48
    char pad_68[0x28];
}; // Size: 0x90
#pragma pack(pop)
