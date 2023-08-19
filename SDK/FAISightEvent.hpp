#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FAISightEvent {
    char pad_0[0x8];
    AActor* SeenActor; // 0x8
    AActor* Observer; // 0x10
}; // Size: 0x18
#pragma pack(pop)
