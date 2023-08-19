#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FEnemy_SplineSpawnActorData.hpp"
#include "FMultiFX2Handle.hpp"
#include "FVector.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class AEnemy_SplineSpawnActor : public AActor {
public:
    char pad_248[0x8];
    FEnemy_SplineSpawnActorData Data; // 0x250
    bool bAutoStart; // 0x320
    char pad_321[0x3];
    float DestroyDelayTime; // 0x324
    char pad_328[0x20];
    TArray<UMultiFX2_Base*> ArrivedFX2; // 0x348
    TArray<UMultiFX2_Base*> LandingFX2; // 0x358
    FMultiFX2Handle ArrivedFX2Handle; // 0x368
    FMultiFX2Handle LandingFXHandle2; // 0x370
    char pad_378[0x38];
    static AEnemy_SplineSpawnActor* StaticClass();
    void StartLandingVFX(FVector StartLocation);
    void StartArrivedVFX();
    void Start();
    bool HasArrived();
    void BroadcastDone(AActor* pActor);
    void BroadcastArrived(AActor* pActor, FVector Loc);
    void ApplyStopFX();
    void ApplyStartFX();
}; // Size: 0x3b0
#pragma pack(pop)
