#pragma once
#include <cstdint>
class AActor;
class USpellToolRecord;
#pragma pack(push, 1)
struct FRPGHitTracker {
    AActor* Target; // 0x0
    float Timestamp; // 0x8
    char pad_c[0x4];
    USpellToolRecord* Spell; // 0x10
}; // Size: 0x18
#pragma pack(pop)
