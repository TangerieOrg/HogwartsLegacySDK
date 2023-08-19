#pragma once
#include <cstdint>
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FAINoiseEvent {
    char pad_0[0x4];
    FVector NoiseLocation; // 0x4
    float Loudness; // 0x10
    float MaxRange; // 0x14
    AActor* Instigator; // 0x18
    FName Tag; // 0x20
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
