#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EClusterConnectionTypeEnum.hpp"
#include "FChaosDebugSubstepControl.hpp"
#include "FChaosSolverConfiguration.hpp"
#include "FSolverBreakingFilterSettings.hpp"
#include "FSolverCollisionFilterSettings.hpp"
#include "FSolverTrailingFilterSettings.hpp"
class UBillboardComponent;
class UChaosGameplayEventDispatcher;
#pragma pack(push, 1)
class AChaosSolverActor : public AActor {
public:
    FChaosSolverConfiguration Properties; // 0x248
    float TimeStepMultiplier; // 0x2b4
    int32_t CollisionIterations; // 0x2b8
    int32_t PushOutIterations; // 0x2bc
    int32_t PushOutPairIterations; // 0x2c0
    float ClusterConnectionFactor; // 0x2c4
    EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2c8
    bool DoGenerateCollisionData; // 0x2c9
    char pad_2ca[0x2];
    FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2cc
    bool DoGenerateBreakingData; // 0x2dc
    char pad_2dd[0x3];
    FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2e0
    bool DoGenerateTrailingData; // 0x2f0
    char pad_2f1[0x3];
    FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2f4
    float MassScale; // 0x304
    bool bGenerateContactGraph; // 0x308
    bool bHasFloor; // 0x309
    char pad_30a[0x2];
    float FloorHeight; // 0x30c
    FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x310
    char pad_313[0x5];
    UBillboardComponent* SpriteComponent; // 0x318
    char pad_320[0x18];
    UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x338
    char pad_340[0x8];
    static AChaosSolverActor* StaticClass();
    void SetSolverActive(bool bActive);
    void SetAsCurrentWorldSolver();
}; // Size: 0x348
#pragma pack(pop)
