#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EActionsCompleteBehaviour.hpp"
#include "FBroomRiderActionContainer.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FGuid.hpp"
class USplineComponent;
class UClass;
class AFlyingBroom;
class UFlyingBroomPhysics;
#pragma pack(push, 1)
class ABroomActionSpline : public AActor {
public:
    USplineComponent* SplineComponent; // 0x248
    FName BroomActionSplineName; // 0x250
    FDbSingleColumnInfo ScheduledEntityName; // 0x258
    bool bForceHighLOD; // 0x2e0
    bool bMountIfNotAlready; // 0x2e1
    char pad_2e2[0x6];
    UClass* BroomToUse; // 0x2e8
    UFlyingBroomPhysics* BroomPhysicsData; // 0x2f0
    TArray<FBroomRiderActionContainer> ActionsToBePerformedContainer; // 0x2f8
    char pad_308[0x19];
    EActionsCompleteBehaviour EndBehaviour; // 0x321
    char pad_322[0x6];
    ABroomActionSpline* NextBroomActionSpline; // 0x328
    FGuid Guid; // 0x330
    bool bSaveState; // 0x340
    bool bSaveTaskState; // 0x341
    char pad_342[0x36];
    AFlyingBroom* NPCBroom; // 0x378
    char pad_380[0x20];
    static ABroomActionSpline* StaticClass();
    void TriggerEndBehaviour(bool bOverrideEndBehaviour, EActionsCompleteBehaviour EndBehaviourOverride);
    void StartBroomActionSequence();
    void OnSaveGameLoaded();
    void OnGameToBeSaved();
}; // Size: 0x3a0
#pragma pack(pop)
