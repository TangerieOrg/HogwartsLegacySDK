#pragma once
#include <cstdint>
#include "AmbientChatterTopicIDs.hpp"
#include "EStandardManagedPriority.hpp"
#include "FSocialConversationData.hpp"
#include "SocialActionTypes.hpp"
#include "SocialInteractionTypeIDs.hpp"
#include "SocialSemanticIDs.hpp"
#include "UObject.hpp"
class AActor;
class APawn;
class UAblAbilityContext;
#pragma pack(push, 1)
class USocialReactor : public UObject {
public:
    char pad_28[0x500];
    static USocialReactor* StaticClass();
    bool ValidateInteractionType(FName InTargetName, AActor* InTargetActor, SocialInteractionTypeIDs InInteractionType);
    void ToggleAmbientChatterTopic(AmbientChatterTopicIDs InTopic, bool bInTurnOn);
    void StartSettingMissionGossipCalloutsMuted(bool InMuted, EStandardManagedPriority InPriority, UObject* InCaller);
    void StartEmoAbility(APawn* InActorPawn);
    void SetEmotionalState(FName InActorName, SocialSemanticIDs InSocialEmotion, int32_t InMagnitude);
    void ReportSocialAction(SocialActionTypes inActionID, FString inActionData, FString inLocationName, FString InTargetName);
    void PerformNewDay();
    void PerformEndOfDayCleanup();
    void OnSaveGameLoaded();
    void OnAbilityStart(int32_t ChannelIndex, UAblAbilityContext* AbilityContext);
    bool MissionGossipCalloutsMuted();
    bool HasIdentity(FName& InTargetName, SocialSemanticIDs Identity);
    static USocialReactor* GetTheSocialReactor();
    TArray<FName> GetIdentityNames(FName& InTargetName);
    TArray<FName> GetIdentityList();
    void GetConversationOptions(FName InTargetName, AActor* InTargetActor, TArray<FSocialConversationData>& outConversationOptions);
    void FinishSettingMissionGossipCalloutsMuted(EStandardManagedPriority InPriority, UObject* InCaller);
    void EndDialogInteraction(FName InTargetName);
    void BeginDialogInteraction(FName InTargetName);
    bool AllowConversation(FString InTargetName, FString inMyName);
    bool AddNewIdentity(FName& InCharacterName, FName& InIdentityName);
}; // Size: 0x528
#pragma pack(pop)
