#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UInterface.hpp"
struct FEnemy_SplineSpawnActorData;
class AEnemy_SplineSpawnActor;
struct FEnemy_ApparateActorData;
class AEnemy_ApparateActor;
#pragma pack(push, 1)
class UEnemyAIStateInterface : public UInterface {
public:
    static UEnemyAIStateInterface* StaticClass();
    AEnemy_SplineSpawnActor* SpawnSplineSpawnActor(FTransform SpawnTransform, FEnemy_SplineSpawnActorData& Data);
    AEnemy_ApparateActor* SpawnApparateActor(FTransform SpawnTransform, FEnemy_ApparateActorData& Data);
}; // Size: 0x28
#pragma pack(pop)
