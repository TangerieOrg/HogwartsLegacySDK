#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UDataAsset.hpp"
class UMultiFX2_Base;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class USpellHelperData : public UDataAsset {
public:
    TArray<UMultiFX2_Base*> GlaciusFX2; // 0x30
    FGameplayTagContainer GlaciusMunitionTagContainer; // 0x40
    UInteractionArchitectAsset* GlaciusMunitionDataAsset; // 0x60
    TArray<UMultiFX2_Base*> DeflectedFX2; // 0x68
    float DeflectedMaxCharacterDamage; // 0x78
    float DeflectedMaxObjectDamage; // 0x7c
    static USpellHelperData* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
