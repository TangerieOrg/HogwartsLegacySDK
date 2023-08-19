#pragma once
#include <cstdint>
#include "FSpellLevelData.hpp"
class UClass;
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FImpactLevelData : public FSpellLevelData {
    char pad_1[0x7];
    UClass* MunitionActor; // 0x8
    TArray<UMultiFX2_Base*> HitActorFX2; // 0x10
    TArray<UMultiFX2_Base*> HitTerrainFX2; // 0x20
    TArray<UMultiFX2_Base*> HitBlockedFX2; // 0x30
    TArray<UMultiFX2_Base*> HitDeflectedFX2; // 0x40
    TArray<UMultiFX2_Base*> DeflectedMunitionFX2; // 0x50
    TArray<UMultiFX2_Base*> FizzleOutFX2; // 0x60
    TArray<UMultiFX2_Base*> PostPerfectProtegoFX2; // 0x70
    TArray<UMultiFX2_Base*> AffectTargetFX2; // 0x80
}; // Size: 0x90
#pragma pack(pop)
