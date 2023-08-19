#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FHitBySpellData {
    AActor* Victim; // 0x0
    AActor* Instigator; // 0x8
    FVector ImpactLocation; // 0x10
    FName SpellType; // 0x1c
    char pad_24[0x4];
    FGameplayTagContainer ImpactTagContainer; // 0x28
}; // Size: 0x48
#pragma pack(pop)
