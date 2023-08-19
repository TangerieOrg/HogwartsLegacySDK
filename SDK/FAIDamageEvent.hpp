#pragma once
#include <cstdint>
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FAIDamageEvent {
    float Amount; // 0x0
    FVector Location; // 0x4
    FVector HitLocation; // 0x10
    char pad_1c[0x4];
    AActor* DamagedActor; // 0x20
    AActor* Instigator; // 0x28
    FName Tag; // 0x30
}; // Size: 0x38
#pragma pack(pop)
