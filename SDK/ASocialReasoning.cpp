#include "AActor.hpp"
#include "APawn.hpp"
#include "ASocialReasoning.hpp"
#include "ESpawnedStationTypes.hpp"
#include "EStandardManagedPriority.hpp"
#include "FAmendSocapDetails.hpp"
#include "FGameplayTag.hpp"
#include "FGreetingQueryData.hpp"
#include "FStationQueryData.hpp"
#include "SocialActionTypes.hpp"
#include "SocialSemanticIDs.hpp"
#include "UBTCustomComponent.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStoryTeller.hpp"
ASocialReasoning* ASocialReasoning::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SocialReasoning");
    return (ASocialReasoning*)res;
}
void ASocialReasoning::StartSettingGhostStoryInterestFactor(float InInterestLevel, EStandardManagedPriority InPriority, UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.StartSettingGhostStoryInterestFactor"));
    struct Params_StartSettingGhostStoryInterestFactor {
        float InInterestLevel; // 0x0
        EStandardManagedPriority InPriority; // 0x4
        char pad_5[0x3];
        UObject* InCaller; // 0x8
    }; // Size: 0x10
    Params_StartSettingGhostStoryInterestFactor params{};
    params.InInterestLevel = (float)InInterestLevel;
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
FGreetingQueryData ASocialReasoning::WhomShallIGreet(TArray<AActor*>& PotentialGreetees, float& Score) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.WhomShallIGreet"));
    struct Params_WhomShallIGreet {
        TArray<AActor*> PotentialGreetees; // 0x0
        float Score; // 0x10
        FGreetingQueryData ReturnValue; // 0x14
    }; // Size: 0x34
    Params_WhomShallIGreet params{};
    params.PotentialGreetees = (TArray<AActor*>)PotentialGreetees;
    params.Score = (float)Score;
    ProcessEvent(func, &params);
    PotentialGreetees = params.PotentialGreetees;
    Score = params.Score;
    return (FGreetingQueryData)params.ReturnValue;
}
FGreetingQueryData ASocialReasoning::WhomShallIAccompany(TArray<AActor*>& PotentialAccompaniers, float& Score) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.WhomShallIAccompany"));
    struct Params_WhomShallIAccompany {
        TArray<AActor*> PotentialAccompaniers; // 0x0
        float Score; // 0x10
        FGreetingQueryData ReturnValue; // 0x14
    }; // Size: 0x34
    Params_WhomShallIAccompany params{};
    params.PotentialAccompaniers = (TArray<AActor*>)PotentialAccompaniers;
    params.Score = (float)Score;
    ProcessEvent(func, &params);
    PotentialAccompaniers = params.PotentialAccompaniers;
    Score = params.Score;
    return (FGreetingQueryData)params.ReturnValue;
}
void ASocialReasoning::SuppressGreetingGhostStories(bool InShouldSuppress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.SuppressGreetingGhostStories"));
    struct Params_SuppressGreetingGhostStories {
        bool InShouldSuppress; // 0x0
    }; // Size: 0x1
    Params_SuppressGreetingGhostStories params{};
    params.InShouldSuppress = (bool)InShouldSuppress;
    ProcessEvent(func, &params);
}
void ASocialReasoning::FinishSettingGhostStoryInterestFactor(EStandardManagedPriority InPriority, UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.FinishSettingGhostStoryInterestFactor"));
    struct Params_FinishSettingGhostStoryInterestFactor {
        EStandardManagedPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* InCaller; // 0x8
    }; // Size: 0x10
    Params_FinishSettingGhostStoryInterestFactor params{};
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
bool ASocialReasoning::TriggerSoloActionOnActor(AActor* InTargetActor, SocialActionTypes Story, SocialSemanticIDs Emotion, AActor* FocusActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.TriggerSoloActionOnActor"));
    struct Params_TriggerSoloActionOnActor {
        AActor* InTargetActor; // 0x0
        SocialActionTypes Story; // 0x8
        SocialSemanticIDs Emotion; // 0x9
        char pad_a[0x6];
        AActor* FocusActor; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_TriggerSoloActionOnActor params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.Story = (SocialActionTypes)Story;
    params.Emotion = (SocialSemanticIDs)Emotion;
    params.FocusActor = (AActor*)FocusActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASocialReasoning::Greet(FGreetingQueryData& TheGreeting) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.Greet"));
    struct Params_Greet {
        FGreetingQueryData TheGreeting; // 0x0
    }; // Size: 0x20
    Params_Greet params{};
    params.TheGreeting = (FGreetingQueryData)TheGreeting;
    ProcessEvent(func, &params);
    TheGreeting = params.TheGreeting;
}
bool ASocialReasoning::TriggerSoloAction(SocialActionTypes Story, SocialSemanticIDs Emotion, AActor* FocusActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.TriggerSoloAction"));
    struct Params_TriggerSoloAction {
        SocialActionTypes Story; // 0x0
        SocialSemanticIDs Emotion; // 0x1
        char pad_2[0x6];
        AActor* FocusActor; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_TriggerSoloAction params{};
    params.Story = (SocialActionTypes)Story;
    params.Emotion = (SocialSemanticIDs)Emotion;
    params.FocusActor = (AActor*)FocusActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASocialReasoning::SuppressGreetingGhostStoriesOnActor(AActor* InTargetActor, bool InShouldSuppress, UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.SuppressGreetingGhostStoriesOnActor"));
    struct Params_SuppressGreetingGhostStoriesOnActor {
        AActor* InTargetActor; // 0x0
        bool InShouldSuppress; // 0x8
        char pad_9[0x7];
        UObject* InCaller; // 0x10
    }; // Size: 0x18
    Params_SuppressGreetingGhostStoriesOnActor params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.InShouldSuppress = (bool)InShouldSuppress;
    params.InCaller = (UObject*)InCaller;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FName ASocialReasoning::GetReasonerDisplayName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.GetReasonerDisplayName"));
    struct Params_GetReasonerDisplayName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetReasonerDisplayName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool ASocialReasoning::MonitorTheAccompaniment(float LeashLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.MonitorTheAccompaniment"));
    struct Params_MonitorTheAccompaniment {
        float LeashLength; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_MonitorTheAccompaniment params{};
    params.LeashLength = (float)LeashLength;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASocialReasoning::StartActivateLookAtTrigger(bool inActivate, EStandardManagedPriority InPriority, FName InReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.StartActivateLookAtTrigger"));
    struct Params_StartActivateLookAtTrigger {
        bool inActivate; // 0x0
        EStandardManagedPriority InPriority; // 0x1
        char pad_2[0x2];
        FName InReason; // 0x4
    }; // Size: 0xc
    Params_StartActivateLookAtTrigger params{};
    params.inActivate = (bool)inActivate;
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InReason = (FName)InReason;
    ProcessEvent(func, &params);
}
void ASocialReasoning::SetGhostStoryInterestFactor(float inInterestFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.SetGhostStoryInterestFactor"));
    struct Params_SetGhostStoryInterestFactor {
        float inInterestFactor; // 0x0
    }; // Size: 0x4
    Params_SetGhostStoryInterestFactor params{};
    params.inInterestFactor = (float)inInterestFactor;
    ProcessEvent(func, &params);
}
bool ASocialReasoning::SelectGhostStoryPartners(TArray<AActor*>& PotentialPartners, TArray<AActor*>& AvailablePartners) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.SelectGhostStoryPartners"));
    struct Params_SelectGhostStoryPartners {
        TArray<AActor*> PotentialPartners; // 0x0
        TArray<AActor*> AvailablePartners; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SelectGhostStoryPartners params{};
    params.PotentialPartners = (TArray<AActor*>)PotentialPartners;
    params.AvailablePartners = (TArray<AActor*>)AvailablePartners;
    ProcessEvent(func, &params);
    PotentialPartners = params.PotentialPartners;
    AvailablePartners = params.AvailablePartners;
    return (bool)params.ReturnValue;
}
void ASocialReasoning::NoStationsFound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.NoStationsFound"));
    struct Params_NoStationsFound {
    }; // Size: 0x0
    Params_NoStationsFound params{};
    ProcessEvent(func, &params);
}
bool ASocialReasoning::CreateSocialInteraction(int32_t MinimumInteractors, FStationQueryData& ProvidedStationData, ESpawnedStationTypes SpawnedStationType, float TimeAvailable, bool IsDynamic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.CreateSocialInteraction"));
    struct Params_CreateSocialInteraction {
        int32_t MinimumInteractors; // 0x0
        FStationQueryData ProvidedStationData; // 0x4
        ESpawnedStationTypes SpawnedStationType; // 0x24
        char pad_25[0x3];
        float TimeAvailable; // 0x28
        bool IsDynamic; // 0x2c
        bool ReturnValue; // 0x2d
    }; // Size: 0x2e
    Params_CreateSocialInteraction params{};
    params.MinimumInteractors = (int32_t)MinimumInteractors;
    params.ProvidedStationData = (FStationQueryData)ProvidedStationData;
    params.SpawnedStationType = (ESpawnedStationTypes)SpawnedStationType;
    params.TimeAvailable = (float)TimeAvailable;
    params.IsDynamic = (bool)IsDynamic;
    ProcessEvent(func, &params);
    ProvidedStationData = params.ProvidedStationData;
    return (bool)params.ReturnValue;
}
bool ASocialReasoning::JoinStation(FStationQueryData& StationData, float Duration, bool OverwritePreviousGoal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.JoinStation"));
    struct Params_JoinStation {
        FStationQueryData StationData; // 0x0
        float Duration; // 0x20
        bool OverwritePreviousGoal; // 0x24
        bool ReturnValue; // 0x25
    }; // Size: 0x26
    Params_JoinStation params{};
    params.StationData = (FStationQueryData)StationData;
    params.Duration = (float)Duration;
    params.OverwritePreviousGoal = (bool)OverwritePreviousGoal;
    ProcessEvent(func, &params);
    StationData = params.StationData;
    return (bool)params.ReturnValue;
}
void ASocialReasoning::EndTheGhostStory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.EndTheGhostStory"));
    struct Params_EndTheGhostStory {
    }; // Size: 0x0
    Params_EndTheGhostStory params{};
    ProcessEvent(func, &params);
}
bool ASocialReasoning::GetUseOptimizedEQS() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.GetUseOptimizedEQS"));
    struct Params_GetUseOptimizedEQS {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUseOptimizedEQS params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
APawn* ASocialReasoning::GetReasonerPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.GetReasonerPawn"));
    struct Params_GetReasonerPawn {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetReasonerPawn params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
FName ASocialReasoning::GetReasonerName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.GetReasonerName"));
    struct Params_GetReasonerName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetReasonerName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UObject* ASocialReasoning::GetReasoner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.GetReasoner"));
    struct Params_GetReasoner {
        UObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetReasoner params{};
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
void ASocialReasoning::GetFreeTimeMinMaxStationChangeTime(float& outMinTime, float& outMaxTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.GetFreeTimeMinMaxStationChangeTime"));
    struct Params_GetFreeTimeMinMaxStationChangeTime {
        float outMinTime; // 0x0
        float outMaxTime; // 0x4
    }; // Size: 0x8
    Params_GetFreeTimeMinMaxStationChangeTime params{};
    params.outMinTime = (float)outMinTime;
    params.outMaxTime = (float)outMaxTime;
    ProcessEvent(func, &params);
    outMinTime = params.outMinTime;
    outMaxTime = params.outMaxTime;
}
FGameplayTag ASocialReasoning::GetDesiredBehavior() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.GetDesiredBehavior"));
    struct Params_GetDesiredBehavior {
        FGameplayTag ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDesiredBehavior params{};
    ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
FGameplayTag ASocialReasoning::GetCurrentBehavior() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.GetCurrentBehavior"));
    struct Params_GetCurrentBehavior {
        FGameplayTag ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentBehavior params{};
    ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
void ASocialReasoning::FinishActivateLookAtTrigger(EStandardManagedPriority InPriority, FName InReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.FinishActivateLookAtTrigger"));
    struct Params_FinishActivateLookAtTrigger {
        EStandardManagedPriority InPriority; // 0x0
        char pad_1[0x3];
        FName InReason; // 0x4
    }; // Size: 0xc
    Params_FinishActivateLookAtTrigger params{};
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InReason = (FName)InReason;
    ProcessEvent(func, &params);
}
bool ASocialReasoning::CreateSocialInteractionForChat(FStationQueryData& ProvidedStationData, ESpawnedStationTypes SpawnedStationType, float TimeAvailable, bool IsDynamic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.CreateSocialInteractionForChat"));
    struct Params_CreateSocialInteractionForChat {
        FStationQueryData ProvidedStationData; // 0x0
        ESpawnedStationTypes SpawnedStationType; // 0x20
        char pad_21[0x3];
        float TimeAvailable; // 0x24
        bool IsDynamic; // 0x28
        bool ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_CreateSocialInteractionForChat params{};
    params.ProvidedStationData = (FStationQueryData)ProvidedStationData;
    params.SpawnedStationType = (ESpawnedStationTypes)SpawnedStationType;
    params.TimeAvailable = (float)TimeAvailable;
    params.IsDynamic = (bool)IsDynamic;
    ProcessEvent(func, &params);
    ProvidedStationData = params.ProvidedStationData;
    return (bool)params.ReturnValue;
}
bool ASocialReasoning::AvailableToTellAGhostStory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.AvailableToTellAGhostStory"));
    struct Params_AvailableToTellAGhostStory {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AvailableToTellAGhostStory params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASocialReasoning::AbandonTheGhostStory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReasoning.AbandonTheGhostStory"));
    struct Params_AbandonTheGhostStory {
    }; // Size: 0x0
    Params_AbandonTheGhostStory params{};
    ProcessEvent(func, &params);
}
