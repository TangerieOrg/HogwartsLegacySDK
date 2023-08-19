#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FSpellCastData {
    AActor* Target; // 0x0
    AActor* Instigator; // 0x8
    FName SpellType; // 0x10
}; // Size: 0x18
#pragma pack(pop)
