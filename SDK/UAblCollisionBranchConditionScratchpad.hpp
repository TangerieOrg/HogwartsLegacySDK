#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblTaskConditionScratchpad.hpp"
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UAblCollisionBranchConditionScratchpad : public UAblTaskConditionScratchpad {
public:
    char pad_30[0x8];
    static UAblCollisionBranchConditionScratchpad* StaticClass();
    void HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
}; // Size: 0x38
#pragma pack(pop)
