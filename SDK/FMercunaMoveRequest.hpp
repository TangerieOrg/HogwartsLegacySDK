#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FMercunaMoveRequest {
    char pad_0[0x8];
    AActor* GoalActor; // 0x8
    char pad_10[0x30];
}; // Size: 0x40
#pragma pack(pop)
