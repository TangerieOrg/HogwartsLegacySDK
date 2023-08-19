#include "AActor.hpp"
#include "AStoryGraphActor.hpp"
#include "FHitResult.hpp"
#include "FKey.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USceneRigPlayer.hpp"
#include "USceneRigStageParameterBlock.hpp"
#include "UTimeRig_StoryGraph.hpp"
bool AStoryGraphActor::TriggerEvent(FName Event, FName EventSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryGraphActor.TriggerEvent"));
    struct Params_TriggerEvent {
        FName Event; // 0x0
        FName EventSource; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_TriggerEvent params{};
    params.Event = (FName)Event;
    params.EventSource = (FName)EventSource;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AStoryGraphActor* AStoryGraphActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.StoryGraphActor");
    return (AStoryGraphActor*)res;
}
bool AStoryGraphActor::TriggerEventOnActiveSceneRigs(FName Event) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryGraphActor.TriggerEventOnActiveSceneRigs"));
    struct Params_TriggerEventOnActiveSceneRigs {
        FName Event; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_TriggerEventOnActiveSceneRigs params{};
    params.Event = (FName)Event;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AStoryGraphActor::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryGraphActor.OnEndOverlap"));
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
bool AStoryGraphActor::TriggerAnyEvent(FName& OutEventTriggered, FName EventSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryGraphActor.TriggerAnyEvent"));
    struct Params_TriggerAnyEvent {
        FName OutEventTriggered; // 0x0
        FName EventSource; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_TriggerAnyEvent params{};
    params.OutEventTriggered = (FName)OutEventTriggered;
    params.EventSource = (FName)EventSource;
    ProcessEvent(func, &params);
    OutEventTriggered = params.OutEventTriggered;
    return (bool)params.ReturnValue;
}
bool AStoryGraphActor::SetBoolParameter(FName ParameterName, bool bBoolToSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryGraphActor.SetBoolParameter"));
    struct Params_SetBoolParameter {
        FName ParameterName; // 0x0
        bool bBoolToSet; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_SetBoolParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.bBoolToSet = (bool)bBoolToSet;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AStoryGraphActor::SetAllowTimeRigsToBeSkipped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryGraphActor.SetAllowTimeRigsToBeSkipped"));
    struct Params_SetAllowTimeRigsToBeSkipped {
    }; // Size: 0x0
    Params_SetAllowTimeRigsToBeSkipped params{};
    ProcessEvent(func, &params);
}
bool AStoryGraphActor::SetActorParameter(FName ParameterName, AActor* ActorToSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryGraphActor.SetActorParameter"));
    struct Params_SetActorParameter {
        FName ParameterName; // 0x0
        AActor* ActorToSet; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetActorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.ActorToSet = (AActor*)ActorToSet;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AStoryGraphActor::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryGraphActor.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void AStoryGraphActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryGraphActor.OnBeginOverlap"));
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
void AStoryGraphActor::HandleEvent(FName Event) {}
