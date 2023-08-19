#pragma once
#include <cstdint>
#include "FAIStimulus.hpp"
class AActor;
#pragma pack(push, 1)
struct FActorPerceptionBlueprintInfo {
    AActor* Target; // 0x0
    TArray<FAIStimulus> LastSensedStimuli; // 0x8
    uint8_t bIsHostile : 1; // 0x18
    uint8_t pad_bitfield_18_1 : 7;
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
