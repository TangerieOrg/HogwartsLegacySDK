#include "AEnemy_ApparateActor.hpp"
#include "AEnemy_SplineSpawnActor.hpp"
#include "FEnemy_ApparateActorData.hpp"
#include "FEnemy_SplineSpawnActorData.hpp"
#include "FTransform.hpp"
#include "UEnemyAIStateInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
AEnemy_ApparateActor* UEnemyAIStateInterface::SpawnApparateActor(FTransform SpawnTransform, FEnemy_ApparateActorData& Data) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIStateInterface.SpawnApparateActor"));
    struct Params_SpawnApparateActor {
        FTransform SpawnTransform; // 0x0
        FEnemy_ApparateActorData Data; // 0x30
        AEnemy_ApparateActor* ReturnValue; // 0x70
    }; // Size: 0x78
    Params_SpawnApparateActor params{};
    params.SpawnTransform = (FTransform)SpawnTransform;
    params.Data = (FEnemy_ApparateActorData)Data;
    ProcessEvent(func, &params);
    Data = params.Data;
    return (AEnemy_ApparateActor*)params.ReturnValue;
}
UEnemyAIStateInterface* UEnemyAIStateInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIStateInterface");
    return (UEnemyAIStateInterface*)res;
}
AEnemy_SplineSpawnActor* UEnemyAIStateInterface::SpawnSplineSpawnActor(FTransform SpawnTransform, FEnemy_SplineSpawnActorData& Data) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyAIStateInterface.SpawnSplineSpawnActor"));
    struct Params_SpawnSplineSpawnActor {
        FTransform SpawnTransform; // 0x0
        FEnemy_SplineSpawnActorData Data; // 0x30
        AEnemy_SplineSpawnActor* ReturnValue; // 0x100
    }; // Size: 0x108
    Params_SpawnSplineSpawnActor params{};
    params.SpawnTransform = (FTransform)SpawnTransform;
    params.Data = (FEnemy_SplineSpawnActorData)Data;
    ProcessEvent(func, &params);
    Data = params.Data;
    return (AEnemy_SplineSpawnActor*)params.ReturnValue;
}
