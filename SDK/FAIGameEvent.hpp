#pragma once
#include <cstdint>
#include "EGameEvent_Intensity.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FAIGameEvent {
    FVector Location; // 0x0
    EGameEvent_Intensity Intensity; // 0xc
    char pad_d[0x3];
    float Duration; // 0x10
    float Range; // 0x14
    float Falloff; // 0x18
    char pad_1c[0xc];
    TArray<AActor*> Targets; // 0x28
    FGameplayTagContainer TagContainer; // 0x38
    FName Name; // 0x58
    bool bTrackBackToInstigator; // 0x60
    char pad_61[0x3];
    float TraceBackStepSize; // 0x64
    float TraceBackRadius; // 0x68
    char pad_6c[0x4];
    TArray<AActor*> EligibleActorsForEvent; // 0x70
    char pad_80[0x10];
}; // Size: 0x90
#pragma pack(pop)
