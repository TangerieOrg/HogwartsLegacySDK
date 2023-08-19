#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FNPC_ActionParams {
    AActor* ActorPtr; // 0x0
    FVector Loc; // 0x8
    char pad_14[0x4];
    FGameplayTagContainer TagContainer; // 0x18
}; // Size: 0x38
#pragma pack(pop)
