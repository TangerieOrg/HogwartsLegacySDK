#pragma once
#include <cstdint>
#include "FGearBackSlotName.hpp"
#include "FGearFaceSlotName.hpp"
#include "FGearHandSlotName.hpp"
#include "FGearHeadSlotName.hpp"
#include "FGearNeckSlotName.hpp"
#include "FGearOutfitSlotName.hpp"
#include "FItemInput.hpp"
#include "FLockChange.hpp"
#include "FSpellDiamondInput.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UPlayerTemplateDataAsset : public UDataAsset {
public:
    int32_t PlayerLevel; // 0x30
    bool OverrideGearStatWithExpected; // 0x34
    char pad_35[0x3];
    FGearHeadSlotName HeadGear; // 0x38
    FName HeadGearTrait; // 0x48
    int32_t HeadUpgrades; // 0x50
    int32_t HeadStatOverride; // 0x54
    FGearBackSlotName BackGear; // 0x58
    FName BackGearTrait; // 0x68
    int32_t BackUpgrades; // 0x70
    int32_t BackStatOverride; // 0x74
    FGearOutfitSlotName OutfitGear; // 0x78
    FName OutfitGearTrait; // 0x88
    int32_t OutfitUpgrades; // 0x90
    int32_t OutfitStatOverride; // 0x94
    FGearNeckSlotName NeckGear; // 0x98
    FName NeckGearTrait; // 0xa8
    int32_t NeckUpgrades; // 0xb0
    int32_t NeckStatOverride; // 0xb4
    FGearHandSlotName HandGear; // 0xb8
    FName HandGearTrait; // 0xc8
    int32_t HandUpgrades; // 0xd0
    int32_t HandStatOverride; // 0xd4
    FGearFaceSlotName FaceGear; // 0xd8
    FName FaceGearTrait; // 0xe8
    int32_t FaceUpgrades; // 0xf0
    int32_t FaceStatOverride; // 0xf4
    TArray<FItemInput> ItemsToAdd; // 0xf8
    TArray<FName> Talents; // 0x108
    TArray<FSpellDiamondInput> SpellsToSlot; // 0x118
    TArray<FLockChange> LocksToChange; // 0x128
    static UPlayerTemplateDataAsset* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
