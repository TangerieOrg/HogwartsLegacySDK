#pragma once
#include <cstdint>
#include "FHitResult.hpp"
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FSpellData {
    char pad_0[0x8];
    FName SpellName; // 0x8
    AActor* Instigator; // 0x10
    FHitResult Hit; // 0x18
    FVector ImpactDirection; // 0xa0
    FVector ImpactLocation; // 0xac
    FVector Velocity; // 0xb8
    FVector Destination; // 0xc4
    AActor* DestinationActor; // 0xd0
    float Duration; // 0xd8
    char pad_dc[0x4];
}; // Size: 0xe0
#pragma pack(pop)
