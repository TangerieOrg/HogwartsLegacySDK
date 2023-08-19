#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UObject.hpp"
class ASceneRigActor;
class AActor;
class UScheduledEntity;
#pragma pack(push, 1)
class UAIPerformTaskBase : public UObject {
public:
    ASceneRigActor* ParallelSceneRigActor; // 0x28
    bool bSkipThisTask; // 0x30
    bool bShouldWaitToFinish; // 0x31
    char pad_32[0xe];
    FTransform ElementTransform; // 0x40
    bool bTrackPlayer; // 0x70
    char pad_71[0x7];
    AActor* HeadTrackingTargetActor; // 0x78
    AActor* PerformTaskContainer; // 0x80
    char pad_88[0x58];
    static UAIPerformTaskBase* StaticClass();
    void OnPerformTaskExecutionCompleteImp(UScheduledEntity* ScheduledEntity, int32_t ActivityTypeBits);
    void OnFleshLoadComplete(AActor* FleshActor);
}; // Size: 0xe0
#pragma pack(pop)
