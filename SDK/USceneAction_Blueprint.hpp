#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "USceneRigObjectActionBase.hpp"
class USceneActionState_Blueprint;
class UObject;
class UTimeRig_StoryGraphNode;
class UTimeRig_StoryGraph;
class USceneRig;
#pragma pack(push, 1)
class USceneAction_Blueprint : public USceneRigObjectActionBase {
public:
    USceneActionState_Blueprint* State; // 0xa0
    static USceneAction_Blueprint* StaticClass();
    void SetBranchID(FName BranchID);
    void SetAutoDurationBP(float Duration);
    void OnSetTimeInsideIntervalPostActorTick(float Time, float LocalTime, bool IsScrubbing);
    void OnSetTimeInsideInterval(float Time, float LocalTime, bool IsScrubbing);
    void OnPauseInsideInterval(bool bPause);
    void OnInstantPostActorTick(float Time, bool IsScrubbing);
    void OnInstant(float Time, bool IsScrubbing);
    void OnExitInterval(float Time, bool Cancelled, bool IsScrubbing);
    void OnEnterInterval(float Time, bool IsScrubbing);
    void OnDestroy();
    void OnCreate(UObject* ActionState);
    bool IsProxyRequiredBP();
    bool IsInstant();
    bool IsInEditor();
    bool IsEnabledBP();
    bool HasPostActorTick();
    bool HasNormalTick();
    void GetValidBranchIDsBP(UObject* Caller);
    UTimeRig_StoryGraphNode* GetStoryGraphNode(UObject* Caller);
    UTimeRig_StoryGraph* GetStoryGraph(UObject* Caller);
    float GetStartTimeBP();
    float GetSortOrderPostActorTick();
    float GetSortOrder();
    USceneRig* GetSceneRig();
    float GetIterationLength();
    float GetDuration();
    void GetDisplayName();
    UObject* GetContext();
    float GetAutoDurationBP();
    UObject* GetActionObjectBP();
    FLinearColor GetActionColor();
    void FinishNow();
    void FinishIn(float SecondsFromNow);
    bool DevOnly_IsHammerTime();
}; // Size: 0xa8
#pragma pack(pop)
