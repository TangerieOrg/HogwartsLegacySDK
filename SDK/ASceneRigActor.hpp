#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimeRigInitializingBehavior.hpp"
#include "FKey.hpp"
#include "FSceneRigParameters.hpp"
class USceneComponent;
struct FHitResult;
class USceneRigProvider;
class USceneRig;
class USceneRigStageContainer;
class UPrimitiveComponent;
class ULevelStreaming;
class USceneRigPlayer;
#pragma pack(push, 1)
class ASceneRigActor : public AActor {
public:
    char pad_248[0x58];
    bool bAutoInitialize; // 0x2a0
    bool bAutoPlay; // 0x2a1
    char pad_2a2[0x2];
    float StartTime; // 0x2a4
    char pad_2a8[0x1];
    bool LoadStage; // 0x2a9
    bool bCreatePreviewActors; // 0x2aa
    char pad_2ab[0x5];
    FKey DebugTriggerSceneRig; // 0x2b0
    bool LoopIndefinitely; // 0x2c8
    char pad_2c9[0x7];
    USceneComponent* SceneComponent; // 0x2d0
    TArray<void*> TriggerVolumes; // 0x2d8
    char pad_2e8[0x58];
    USceneRig* SceneRig; // 0x340
    USceneRigProvider* SceneRigProvider; // 0x348
    TArray<FName> LookupAlias; // 0x350
    char pad_360[0x8];
    FSceneRigParameters SceneInterface; // 0x368
    char pad_3f0[0x20];
    USceneRigStageContainer* StageContainer; // 0x410
    char pad_418[0x60];
    TArray<ULevelStreaming*> StreamedStages; // 0x478
    char pad_488[0x28];
    static ASceneRigActor* StaticClass();
    void TriggerEvent(FName EventName);
    void StopRepeatedPlay(bool StopCurrentlyPlaying);
    void StopImmediate();
    void Stop();
    USceneRigPlayer* StartRepeatedPlay(float MinRepeatDelay, float MaxRepeatDelay, ETimeRigInitializingBehavior InitializingBehaviorType);
    void ShowSkipUI(bool bShow);
    void SetPlaybackScale(float Scale);
    void Resume();
    bool PlayingOnRepeat();
    USceneRigPlayer* PlayImmediate();
    USceneRigPlayer* Play(ETimeRigInitializingBehavior InitializingBehaviorType);
    void Pause();
    void OnSetPlaying__DelegateSignature(bool bPlaying);
    void OnPlaybackAlmostComplete__DelegateSignature();
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnCurtainRaised();
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    static void IsSceneRigBeingSkipped();
    bool IsPlaying();
    bool IsActive();
    USceneRigPlayer* Initialize(ETimeRigInitializingBehavior InitializingBehaviorType);
    float GetTimeRemaining();
    USceneRigPlayer* GetSceneRigPlayer();
    USceneRig* GetSceneRig();
    float GetPlaybackScale();
    USceneRigPlayer* DebugTriggerPlay();
    void AssignSceneRig(USceneRig* InSceneRig);
    void AddStartHandler();
    void AddOnCleanupHandler();
    void AddFinishHandler();
    void AddEventHandlerWithActor(FName EventName);
    void AddEventHandler(FName EventName);
}; // Size: 0x4b0
#pragma pack(pop)
