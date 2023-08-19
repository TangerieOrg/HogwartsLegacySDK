#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblBranchTaskScratchPad.hpp"
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UAblNpcCollisionBranchTaskScratchPad : public UAblBranchTaskScratchPad {
public:
    char pad_50[0x98];
    static UAblNpcCollisionBranchTaskScratchPad* StaticClass();
    void OnNpcCapsuleHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
}; // Size: 0xe8
#pragma pack(pop)
