#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EPerformTaskContainerType.hpp"
#include "FAIPerformTaskContainer.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FDialogueConversationReference.hpp"
class UClass;
class USceneComponent;
class UAvaAudioDialogueEvent;
struct FHitResult;
class UBoxComponent;
class USphereComponent;
class UTextRenderComponent;
class UObject;
class USpellToolRecord;
class UScheduledEntity;
class UPrimitiveComponent;
#pragma pack(push, 1)
class APerformTasksForAI : public AActor {
public:
    FDbSingleColumnInfo NPCKey; // 0x248
    char pad_2d0[0x18];
    EPerformTaskContainerType PerformTaskContainerType; // 0x2e8
    char pad_2e9[0x7];
    FString LevelOwnerName; // 0x2f0
    TArray<FAIPerformTaskContainer> TasksToBePerformedContainer; // 0x300
    bool bStartOff; // 0x310
    bool bAutoActivate; // 0x311
    bool bAlwaysActive; // 0x312
    bool bCanActivateAgainWhenUnfinished; // 0x313
    bool bLumosOn; // 0x314
    char pad_315[0x3];
    UClass* ApparateInAblAbility; // 0x318
    UClass* ApparateOutAblAbility; // 0x320
    UClass* JumpDownAbilityPtr; // 0x328
    FDbSingleColumnInfo m_missionID; // 0x330
    int32_t MissionUID; // 0x3b8
    bool ResetGoal; // 0x3bc
    bool bReleaseOnCompletion; // 0x3bd
    char pad_3be[0x2];
    FDialogueConversationReference ClearedDialogueReference; // 0x3c0
    UAvaAudioDialogueEvent* ClearedDialogueEvent; // 0x3d0
    float clearedAudioDelay; // 0x3d8
    char pad_3dc[0x4];
    APerformTasksForAI* NextTask; // 0x3e0
    TArray<AActor*> OffTargets; // 0x3e8
    USceneComponent* Scene; // 0x3f8
    UBoxComponent* Trigger; // 0x400
    USphereComponent* SphereTrigger; // 0x408
    UTextRenderComponent* TextRenderer; // 0x410
    float FirstDelay; // 0x418
    char pad_41c[0x34];
    bool bShowAxisInGame; // 0x450
    char pad_451[0x7];
    TArray<USpellToolRecord*> SpellToolRecords; // 0x458
    char pad_468[0xc8];
    static APerformTasksForAI* StaticClass();
    void SwitchOnBPImplementation();
    void SetScheduledEntity(UScheduledEntity* InAI_ScheduledEntity);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnFleshLoadComplete(AActor* FleshActor);
    void HardExecuteStartPerformTasksForAI();
    FAIPerformTaskContainer GetTaskAtIndex(int32_t TaskIndex);
    UScheduledEntity* GetScheduledEntity();
    void ForceFinishCurrentTask();
    void FinishPerformTaskTriggerBP();
    static TArray<APerformTasksForAI*> FindMissionActors(FName InMissionID, int32_t InMissionUID);
    void ExecuteStartPerformTasksForAI();
    void ClearScheduledEntity();
    void CleanUpAndStartNextPerformTask(UScheduledEntity* ScheduledEntity, int32_t ActivityTypeBits);
    void CallSwitchOnBP(UObject* InTarget);
    void CallSwitchOffBP(UObject* InTarget);
}; // Size: 0x530
#pragma pack(pop)
