#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UMultiFX2_Base;
class UInteractionArchitectAsset;
class UPhoenixPhysicalMaterial;
#pragma pack(push, 1)
class USpellInfoData : public UDataAsset {
public:
    TArray<UMultiFX2_Base*> IneffectiveFX2; // 0x30
    float ChargedActivationDelay; // 0x40
    char pad_44[0x4];
    UPhoenixPhysicalMaterial* WaterPPM; // 0x48
    UInteractionArchitectAsset* ImmuneToDataAsset; // 0x50
    UInteractionArchitectAsset* ChargedSpellTagDataAsset; // 0x58
    TArray<UMultiFX2_Base*> SpellCastFX; // 0x60
    static USpellInfoData* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
