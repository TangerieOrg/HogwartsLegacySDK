#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FKey.hpp"
class USceneComponent;
struct FHitResult;
class UTimeRig_StoryGraph;
class USceneRigPlayer;
class USceneRigStageParameterBlock;
class UPrimitiveComponent;
#pragma pack(push, 1)
class AStoryGraphActor : public AActor {
public:
    char pad_248[0x10];
    USceneComponent* SceneComponent; // 0x258
    FKey DebugTriggerKey; // 0x260
    FName DebugTriggerEventName; // 0x278
    TArray<void*> TriggerVolumes; // 0x280
    char pad_290[0x58];
    UTimeRig_StoryGraph* StoryGraph; // 0x2e8
    bool bHoldCurtainUntilPlay; // 0x2f0
    char pad_2f1[0x7];
    TArray<FName> LookupAlias; // 0x2f8
    USceneRigStageParameterBlock* ParameterBlock; // 0x308
    bool bAllowTimeRigsToBeSkipped; // 0x310
    char pad_311[0x1e7];
    USceneRigPlayer* AmbientPlayer; // 0x4f8
    char pad_500[0x28];
    static AStoryGraphActor* StaticClass();
    bool TriggerEventOnActiveSceneRigs(FName Event);
    bool TriggerEvent(FName Event, FName EventSource);
    bool TriggerAnyEvent(FName& OutEventTriggered, FName EventSource);
    bool SetBoolParameter(FName ParameterName, bool bBoolToSet);
    void SetAllowTimeRigsToBeSkipped();
    bool SetActorParameter(FName ParameterName, AActor* ActorToSet);
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnCurtainRaised();
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void HandleEvent(FName Event);
}; // Size: 0x528
#pragma pack(pop)
