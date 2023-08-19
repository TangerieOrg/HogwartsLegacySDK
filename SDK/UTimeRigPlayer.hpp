#pragma once
#include <cstdint>
#include "ETimeRigPlayerState.hpp"
#include "UObject.hpp"
class UTimeRig;
class UClass;
class UTimeRigInstanceContext;
#pragma pack(push, 1)
class UTimeRigPlayer : public UObject {
public:
    char pad_28[0x98];
    FName BranchID; // 0xc0
    char pad_c8[0x118];
    UTimeRig* TimeRig; // 0x1e0
    UTimeRigInstanceContext* InstanceContext; // 0x1e8
    float PlaybackScale; // 0x1f0
    float RoundTimeToFPS; // 0x1f4
    float SecondsRemainingForAlmostCompleteTrigger; // 0x1f8
    char pad_1fc[0x8c];
    static UTimeRigPlayer* StaticClass();
    void StopIn(float SecondsFromNow, float BlendTime);
    void StopImmediate();
    void Stop();
    bool Skip();
    void SetTime(float Seconds);
    void SetSecondsRemainingForAlmostCompleteTrigger(float Seconds);
    void SetRoundTimeToFPS(float FPS);
    void SetPlaybackScale(float Scale);
    void SetOnPlaybackStarting();
    void SetOnPlaybackStarted();
    bool SetLooping(bool LoopingEnabled);
    void RewindToCurrentStartOf(UClass* ActionType);
    bool ReadyToPlay();
    bool PlayImmediate(FName InActivationSource);
    bool PlaybackHasStarted();
    bool Play(FName InActivationSource);
    void PauseAfterCurrentEndOf(UClass* ActionType);
    void Pause();
    bool IsWantingToPlayButNotPlaying();
    bool IsTicking();
    bool IsStopping();
    bool IsPlaying();
    bool IsLooping();
    bool IsInitializing();
    bool IsInitialized();
    bool IsActive();
    bool HasEvent(FName EventName);
    UTimeRig* GetTimeRig();
    float GetTime();
    float GetSecondsRemainingForAlmostCompleteTrigger();
    float GetRoundTimeToFPS();
    ETimeRigPlayerState GetPlayerState();
    float GetPlaybackScale();
    float GetEndTime();
    float GetCurrentTime();
    float GetBeginTime();
    void FastForwardToNextStartOf(UClass* ActionType);
    void FastForwardToNextEndOf(UClass* ActionType);
    void FastForwardToEvent(FName& EventName);
    void FastForwardToCurrentEndOf(UClass* ActionType);
    bool EventOccursNow(FName EventName);
    bool EventOccursAt(FName EventName, float SecondsFromNow);
    void AddEventHandler(FName EventName);
    void AddCriticalEventHandler(FName EventName);
}; // Size: 0x288
#pragma pack(pop)
