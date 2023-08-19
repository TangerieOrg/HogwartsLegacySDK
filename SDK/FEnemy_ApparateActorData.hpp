#pragma once
#include <cstdint>
#include "EnemyApparateActor_Movement.hpp"
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FEnemy_ApparateActorData {
    FVector Destination; // 0x0
    FVector StartLoc; // 0xc
    float Speed; // 0x18
    EnemyApparateActor_Movement Movement; // 0x1c
    char pad_1d[0x3];
    AActor* Target; // 0x20
    float RangeToTarget; // 0x28
    float OffsetZDist; // 0x2c
    float CapsuleRadius; // 0x30
    float CapsuleHalfHeight; // 0x34
    float MaxTime; // 0x38
    bool bUseTravelTimeout; // 0x3c
    char pad_3d[0x3];
}; // Size: 0x40
#pragma pack(pop)
