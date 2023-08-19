#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ESpawnedStationTypes.hpp"
#include "EStandardManagedPriority.hpp"
#include "FAmendSocapDetails.hpp"
#include "FGameplayTag.hpp"
#include "FGreetingQueryData.hpp"
#include "SocialActionTypes.hpp"
#include "SocialSemanticIDs.hpp"
class UBTCustomComponent;
struct FStationQueryData;
class UBlackboardComponent;
class UObject;
class UStoryTeller;
class APawn;
#pragma pack(push, 1)
class ASocialReasoning : public AActor {
public:
    char pad_248[0x8];
    FAmendSocapDetails SocialCapitalDetails; // 0x250
    char pad_278[0x20];
    UBTCustomComponent* Mind; // 0x298
    UBlackboardComponent* Memory; // 0x2a0
    char pad_2a8[0xc0];
    UStoryTeller* StoryTeller; // 0x368
    char pad_370[0x20];
    float PatrolWaitTime; // 0x390
    char pad_394[0x19c];
    static ASocialReasoning* StaticClass();
    FGreetingQueryData WhomShallIGreet(TArray<AActor*>& PotentialGreetees, float& Score);
    FGreetingQueryData WhomShallIAccompany(TArray<AActor*>& PotentialAccompaniers, float& Score);
    static bool TriggerSoloActionOnActor(AActor* InTargetActor, SocialActionTypes Story, SocialSemanticIDs Emotion, AActor* FocusActor);
    bool TriggerSoloAction(SocialActionTypes Story, SocialSemanticIDs Emotion, AActor* FocusActor);
    static void SuppressGreetingGhostStoriesOnActor(AActor* InTargetActor, bool InShouldSuppress, UObject* InCaller);
    void SuppressGreetingGhostStories(bool InShouldSuppress);
    void StartSettingGhostStoryInterestFactor(float InInterestLevel, EStandardManagedPriority InPriority, UObject* InCaller);
    void StartActivateLookAtTrigger(bool inActivate, EStandardManagedPriority InPriority, FName InReason);
    void SetGhostStoryInterestFactor(float inInterestFactor);
    bool SelectGhostStoryPartners(TArray<AActor*>& PotentialPartners, TArray<AActor*>& AvailablePartners);
    void NoStationsFound();
    bool MonitorTheAccompaniment(float LeashLength);
    bool JoinStation(FStationQueryData& StationData, float Duration, bool OverwritePreviousGoal);
    void Greet(FGreetingQueryData& TheGreeting);
    bool GetUseOptimizedEQS();
    APawn* GetReasonerPawn();
    FName GetReasonerName();
    FName GetReasonerDisplayName();
    UObject* GetReasoner();
    void GetFreeTimeMinMaxStationChangeTime(float& outMinTime, float& outMaxTime);
    FGameplayTag GetDesiredBehavior();
    FGameplayTag GetCurrentBehavior();
    void FinishSettingGhostStoryInterestFactor(EStandardManagedPriority InPriority, UObject* InCaller);
    void FinishActivateLookAtTrigger(EStandardManagedPriority InPriority, FName InReason);
    void EndTheGhostStory();
    bool CreateSocialInteractionForChat(FStationQueryData& ProvidedStationData, ESpawnedStationTypes SpawnedStationType, float TimeAvailable, bool IsDynamic);
    bool CreateSocialInteraction(int32_t MinimumInteractors, FStationQueryData& ProvidedStationData, ESpawnedStationTypes SpawnedStationType, float TimeAvailable, bool IsDynamic);
    bool AvailableToTellAGhostStory();
    void AbandonTheGhostStory();
}; // Size: 0x530
#pragma pack(pop)
