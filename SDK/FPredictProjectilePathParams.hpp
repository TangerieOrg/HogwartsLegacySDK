#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "EObjectTypeQuery.hpp"
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FPredictProjectilePathParams {
    FVector StartLocation; // 0x0
    FVector LaunchVelocity; // 0xc
    bool bTraceWithCollision; // 0x18
    char pad_19[0x3];
    float ProjectileRadius; // 0x1c
    float MaxSimTime; // 0x20
    bool bTraceWithChannel; // 0x24
    ECollisionChannel TraceChannel; // 0x25
    char pad_26[0x2];
    TArray<EObjectTypeQuery> ObjectTypes; // 0x28
    TArray<AActor*> ActorsToIgnore; // 0x38
    float SimFrequency; // 0x48
    float OverrideGravityZ; // 0x4c
    EDrawDebugTrace::Type DrawDebugType; // 0x50
    char pad_51[0x3];
    float DrawDebugTime; // 0x54
    bool bTraceComplex; // 0x58
    char pad_59[0x7];
}; // Size: 0x60
#pragma pack(pop)
