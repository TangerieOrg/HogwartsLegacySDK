#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FAIPredictionEvent {
    AActor* Requestor; // 0x0
    AActor* PredictedActor; // 0x8
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
