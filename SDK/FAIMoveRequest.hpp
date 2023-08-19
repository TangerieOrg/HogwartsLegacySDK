#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FAIMoveRequest {
    AActor* GoalActor; // 0x0
    char pad_8[0x38];
}; // Size: 0x40
#pragma pack(pop)
