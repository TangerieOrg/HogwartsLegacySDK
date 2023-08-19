#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UInterface.hpp"
class AActor;
class ASpellTool;
struct FHitResult;
class USpellToolRecord;
struct FVector;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class USpellInterface : public UInterface {
public:
    static USpellInterface* StaticClass();
    void OnSpellTooWeak(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellEffective(AActor* Instigator);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
}; // Size: 0x28
#pragma pack(pop)
