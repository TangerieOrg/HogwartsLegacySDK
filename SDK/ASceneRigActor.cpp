#include "AActor.hpp"
#include "ASceneRigActor.hpp"
#include "ETimeRigInitializingBehavior.hpp"
#include "FHitResult.hpp"
#include "FKey.hpp"
#include "FSceneRigParameters.hpp"
#include "UFunction.hpp"
#include "ULevelStreaming.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USceneRig.hpp"
#include "USceneRigPlayer.hpp"
#include "USceneRigProvider.hpp"
#include "USceneRigStageContainer.hpp"
USceneRigPlayer* ASceneRigActor::GetSceneRigPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.GetSceneRigPlayer"));
    struct Params_GetSceneRigPlayer {
        USceneRigPlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSceneRigPlayer params{};
    ProcessEvent(func, &params);
    return (USceneRigPlayer*)params.ReturnValue;
}
ASceneRigActor* ASceneRigActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigActor");
    return (ASceneRigActor*)res;
}
void ASceneRigActor::ShowSkipUI(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.ShowSkipUI"));
    struct Params_ShowSkipUI {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_ShowSkipUI params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
void ASceneRigActor::StopImmediate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.StopImmediate"));
    struct Params_StopImmediate {
    }; // Size: 0x0
    Params_StopImmediate params{};
    ProcessEvent(func, &params);
}
void ASceneRigActor::TriggerEvent(FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.TriggerEvent"));
    struct Params_TriggerEvent {
        FName EventName; // 0x0
    }; // Size: 0x8
    Params_TriggerEvent params{};
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
}
void ASceneRigActor::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void ASceneRigActor::StopRepeatedPlay(bool StopCurrentlyPlaying) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.StopRepeatedPlay"));
    struct Params_StopRepeatedPlay {
        bool StopCurrentlyPlaying; // 0x0
    }; // Size: 0x1
    Params_StopRepeatedPlay params{};
    params.StopCurrentlyPlaying = (bool)StopCurrentlyPlaying;
    ProcessEvent(func, &params);
}
USceneRigPlayer* ASceneRigActor::StartRepeatedPlay(float MinRepeatDelay, float MaxRepeatDelay, ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.StartRepeatedPlay"));
    struct Params_StartRepeatedPlay {
        float MinRepeatDelay; // 0x0
        float MaxRepeatDelay; // 0x4
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x8
        char pad_9[0x7];
        USceneRigPlayer* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_StartRepeatedPlay params{};
    params.MinRepeatDelay = (float)MinRepeatDelay;
    params.MaxRepeatDelay = (float)MaxRepeatDelay;
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ProcessEvent(func, &params);
    return (USceneRigPlayer*)params.ReturnValue;
}
USceneRigPlayer* ASceneRigActor::Initialize(ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.Initialize"));
    struct Params_Initialize {
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x0
        char pad_1[0x7];
        USceneRigPlayer* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Initialize params{};
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ProcessEvent(func, &params);
    return (USceneRigPlayer*)params.ReturnValue;
}
void ASceneRigActor::SetPlaybackScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.SetPlaybackScale"));
    struct Params_SetPlaybackScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetPlaybackScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
void ASceneRigActor::Resume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.Resume"));
    struct Params_Resume {
    }; // Size: 0x0
    Params_Resume params{};
    ProcessEvent(func, &params);
}
bool ASceneRigActor::PlayingOnRepeat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.PlayingOnRepeat"));
    struct Params_PlayingOnRepeat {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PlayingOnRepeat params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
USceneRigPlayer* ASceneRigActor::PlayImmediate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.PlayImmediate"));
    struct Params_PlayImmediate {
        USceneRigPlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_PlayImmediate params{};
    ProcessEvent(func, &params);
    return (USceneRigPlayer*)params.ReturnValue;
}
USceneRigPlayer* ASceneRigActor::Play(ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.Play"));
    struct Params_Play {
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x0
        char pad_1[0x7];
        USceneRigPlayer* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Play params{};
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ProcessEvent(func, &params);
    return (USceneRigPlayer*)params.ReturnValue;
}
void ASceneRigActor::Pause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.Pause"));
    struct Params_Pause {
    }; // Size: 0x0
    Params_Pause params{};
    ProcessEvent(func, &params);
}
void ASceneRigActor::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void ASceneRigActor::OnSetPlaying__DelegateSignature(bool bPlaying) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/SceneRig.SceneRigActor.OnSetPlaying__DelegateSignature"));
    struct Params_OnSetPlaying__DelegateSignature {
        bool bPlaying; // 0x0
    }; // Size: 0x1
    Params_OnSetPlaying__DelegateSignature params{};
    params.bPlaying = (bool)bPlaying;
    ProcessEvent(func, &params);
}
float ASceneRigActor::GetTimeRemaining() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.GetTimeRemaining"));
    struct Params_GetTimeRemaining {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTimeRemaining params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ASceneRigActor::OnPlaybackAlmostComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/SceneRig.SceneRigActor.OnPlaybackAlmostComplete__DelegateSignature"));
    struct Params_OnPlaybackAlmostComplete__DelegateSignature {
    }; // Size: 0x0
    Params_OnPlaybackAlmostComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ASceneRigActor::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.OnEndOverlap"));
    struct Params_OnEndOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnEndOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ASceneRigActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnBeginOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ASceneRigActor::AddEventHandler(FName EventName) {}
void ASceneRigActor::IsSceneRigBeingSkipped() {}
void ASceneRigActor::AddEventHandlerWithActor(FName EventName) {}
bool ASceneRigActor::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASceneRigActor::IsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.IsActive"));
    struct Params_IsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
USceneRigPlayer* ASceneRigActor::DebugTriggerPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.DebugTriggerPlay"));
    struct Params_DebugTriggerPlay {
        USceneRigPlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_DebugTriggerPlay params{};
    ProcessEvent(func, &params);
    return (USceneRigPlayer*)params.ReturnValue;
}
USceneRig* ASceneRigActor::GetSceneRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.GetSceneRig"));
    struct Params_GetSceneRig {
        USceneRig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSceneRig params{};
    ProcessEvent(func, &params);
    return (USceneRig*)params.ReturnValue;
}
float ASceneRigActor::GetPlaybackScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.GetPlaybackScale"));
    struct Params_GetPlaybackScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlaybackScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ASceneRigActor::AssignSceneRig(USceneRig* InSceneRig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigActor.AssignSceneRig"));
    struct Params_AssignSceneRig {
        USceneRig* InSceneRig; // 0x0
    }; // Size: 0x8
    Params_AssignSceneRig params{};
    params.InSceneRig = (USceneRig*)InSceneRig;
    ProcessEvent(func, &params);
}
void ASceneRigActor::AddStartHandler() {}
void ASceneRigActor::AddOnCleanupHandler() {}
void ASceneRigActor::AddFinishHandler() {}
