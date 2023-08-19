#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UAblDieOnNextImpactReactionScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    static UAblDieOnNextImpactReactionScratchpad* StaticClass();
    void HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
}; // Size: 0x30
#pragma pack(pop)
