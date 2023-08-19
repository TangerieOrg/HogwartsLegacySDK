#pragma once
#include <cstdint>
#include "ESocialCombatMode.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UCreatureVariationDataAsset;
class ACreature_Character;
class UObjectArchitectAsset;
#pragma pack(push, 1)
class UCreature_NurtureComponent : public UActorComponent {
public:
    UCreatureVariationDataAsset* VariationData; // 0xc8
    bool bOverride_TameTargetPriorityWeight; // 0xd0
    char pad_d1[0x3];
    float TameTargetPriorityWeight; // 0xd4
    bool bOverride_TameTargetMode; // 0xd8
    ESocialCombatMode TameTargetMode; // 0xd9
    char pad_da[0x2e];
    FName NurtureCalloutsSocket; // 0x108
    FVector NurtureCalloutsOffset; // 0x110
    char pad_11c[0x4];
    ACreature_Character* CreatureCharacter; // 0x120
    char pad_128[0x98];
    UObjectArchitectAsset* LoadedAudioAsset; // 0x1c0
    char pad_1c8[0x20];
    static UCreature_NurtureComponent* StaticClass();
    bool GetIsMale();
    bool GetIsAlbino();
}; // Size: 0x1e8
#pragma pack(pop)
