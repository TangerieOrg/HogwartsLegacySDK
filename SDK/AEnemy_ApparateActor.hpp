#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FEnemy_ApparateActorData.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class AEnemy_ApparateActor : public AActor {
public:
    FEnemy_ApparateActorData Data; // 0x248
    bool bArrived; // 0x288
    char pad_289[0x47];
    static AEnemy_ApparateActor* StaticClass();
    bool HasArrived();
    void BroadcastDone(AActor* pActor);
    void BroadcastArrived(AActor* pActor, FVector Loc);
}; // Size: 0x2d0
#pragma pack(pop)
