#include "AActor.hpp"
#include "APawn.hpp"
#include "AmbientChatterTopicIDs.hpp"
#include "EStandardManagedPriority.hpp"
#include "FSocialConversationData.hpp"
#include "SocialActionTypes.hpp"
#include "SocialInteractionTypeIDs.hpp"
#include "SocialSemanticIDs.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USocialReactor.hpp"
void USocialReactor::SetEmotionalState(FName InActorName, SocialSemanticIDs InSocialEmotion, int32_t InMagnitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.SetEmotionalState"));
    struct Params_SetEmotionalState {
        FName InActorName; // 0x0
        SocialSemanticIDs InSocialEmotion; // 0x8
        char pad_9[0x3];
        int32_t InMagnitude; // 0xc
    }; // Size: 0x10
    Params_SetEmotionalState params{};
    params.InActorName = (FName)InActorName;
    params.InSocialEmotion = (SocialSemanticIDs)InSocialEmotion;
    params.InMagnitude = (int32_t)InMagnitude;
    ProcessEvent(func, &params);
}
USocialReactor* USocialReactor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SocialReactor");
    return (USocialReactor*)res;
}
bool USocialReactor::ValidateInteractionType(FName InTargetName, AActor* InTargetActor, SocialInteractionTypeIDs InInteractionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.ValidateInteractionType"));
    struct Params_ValidateInteractionType {
        FName InTargetName; // 0x0
        AActor* InTargetActor; // 0x8
        SocialInteractionTypeIDs InInteractionType; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_ValidateInteractionType params{};
    params.InTargetName = (FName)InTargetName;
    params.InTargetActor = (AActor*)InTargetActor;
    params.InInteractionType = (SocialInteractionTypeIDs)InInteractionType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USocialReactor::ToggleAmbientChatterTopic(AmbientChatterTopicIDs InTopic, bool bInTurnOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.ToggleAmbientChatterTopic"));
    struct Params_ToggleAmbientChatterTopic {
        AmbientChatterTopicIDs InTopic; // 0x0
        bool bInTurnOn; // 0x1
    }; // Size: 0x2
    Params_ToggleAmbientChatterTopic params{};
    params.InTopic = (AmbientChatterTopicIDs)InTopic;
    params.bInTurnOn = (bool)bInTurnOn;
    ProcessEvent(func, &params);
}
void USocialReactor::BeginDialogInteraction(FName InTargetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.BeginDialogInteraction"));
    struct Params_BeginDialogInteraction {
        FName InTargetName; // 0x0
    }; // Size: 0x8
    Params_BeginDialogInteraction params{};
    params.InTargetName = (FName)InTargetName;
    ProcessEvent(func, &params);
}
void USocialReactor::StartSettingMissionGossipCalloutsMuted(bool InMuted, EStandardManagedPriority InPriority, UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.StartSettingMissionGossipCalloutsMuted"));
    struct Params_StartSettingMissionGossipCalloutsMuted {
        bool InMuted; // 0x0
        EStandardManagedPriority InPriority; // 0x1
        char pad_2[0x6];
        UObject* InCaller; // 0x8
    }; // Size: 0x10
    Params_StartSettingMissionGossipCalloutsMuted params{};
    params.InMuted = (bool)InMuted;
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
void USocialReactor::ReportSocialAction(SocialActionTypes inActionID, FString inActionData, FString inLocationName, FString InTargetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.ReportSocialAction"));
    struct Params_ReportSocialAction {
        SocialActionTypes inActionID; // 0x0
        char pad_1[0x7];
        FString inActionData; // 0x8
        FString inLocationName; // 0x18
        FString InTargetName; // 0x28
    }; // Size: 0x38
    Params_ReportSocialAction params{};
    params.inActionID = (SocialActionTypes)inActionID;
    params.inActionData = (FString)inActionData;
    params.inLocationName = (FString)inLocationName;
    params.InTargetName = (FString)InTargetName;
    ProcessEvent(func, &params);
}
void USocialReactor::StartEmoAbility(APawn* InActorPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.StartEmoAbility"));
    struct Params_StartEmoAbility {
        APawn* InActorPawn; // 0x0
    }; // Size: 0x8
    Params_StartEmoAbility params{};
    params.InActorPawn = (APawn*)InActorPawn;
    ProcessEvent(func, &params);
}
void USocialReactor::OnAbilityStart(int32_t ChannelIndex, UAblAbilityContext* AbilityContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.OnAbilityStart"));
    struct Params_OnAbilityStart {
        int32_t ChannelIndex; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* AbilityContext; // 0x8
    }; // Size: 0x10
    Params_OnAbilityStart params{};
    params.ChannelIndex = (int32_t)ChannelIndex;
    params.AbilityContext = (UAblAbilityContext*)AbilityContext;
    ProcessEvent(func, &params);
}
void USocialReactor::PerformNewDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.PerformNewDay"));
    struct Params_PerformNewDay {
    }; // Size: 0x0
    Params_PerformNewDay params{};
    ProcessEvent(func, &params);
}
void USocialReactor::PerformEndOfDayCleanup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.PerformEndOfDayCleanup"));
    struct Params_PerformEndOfDayCleanup {
    }; // Size: 0x0
    Params_PerformEndOfDayCleanup params{};
    ProcessEvent(func, &params);
}
void USocialReactor::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
bool USocialReactor::MissionGossipCalloutsMuted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.MissionGossipCalloutsMuted"));
    struct Params_MissionGossipCalloutsMuted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_MissionGossipCalloutsMuted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USocialReactor::HasIdentity(FName& InTargetName, SocialSemanticIDs Identity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.HasIdentity"));
    struct Params_HasIdentity {
        FName InTargetName; // 0x0
        SocialSemanticIDs Identity; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_HasIdentity params{};
    params.InTargetName = (FName)InTargetName;
    params.Identity = (SocialSemanticIDs)Identity;
    ProcessEvent(func, &params);
    InTargetName = params.InTargetName;
    return (bool)params.ReturnValue;
}
USocialReactor* USocialReactor::GetTheSocialReactor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.GetTheSocialReactor"));
    struct Params_GetTheSocialReactor {
        USocialReactor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTheSocialReactor params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USocialReactor*)params.ReturnValue;
}
TArray<FName> USocialReactor::GetIdentityNames(FName& InTargetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.GetIdentityNames"));
    struct Params_GetIdentityNames {
        FName InTargetName; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetIdentityNames params{};
    params.InTargetName = (FName)InTargetName;
    ProcessEvent(func, &params);
    InTargetName = params.InTargetName;
    return (TArray<FName>)params.ReturnValue;
}
void USocialReactor::EndDialogInteraction(FName InTargetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.EndDialogInteraction"));
    struct Params_EndDialogInteraction {
        FName InTargetName; // 0x0
    }; // Size: 0x8
    Params_EndDialogInteraction params{};
    params.InTargetName = (FName)InTargetName;
    ProcessEvent(func, &params);
}
TArray<FName> USocialReactor::GetIdentityList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.GetIdentityList"));
    struct Params_GetIdentityList {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetIdentityList params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void USocialReactor::GetConversationOptions(FName InTargetName, AActor* InTargetActor, TArray<FSocialConversationData>& outConversationOptions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.GetConversationOptions"));
    struct Params_GetConversationOptions {
        FName InTargetName; // 0x0
        AActor* InTargetActor; // 0x8
        TArray<FSocialConversationData> outConversationOptions; // 0x10
    }; // Size: 0x20
    Params_GetConversationOptions params{};
    params.InTargetName = (FName)InTargetName;
    params.InTargetActor = (AActor*)InTargetActor;
    params.outConversationOptions = (TArray<FSocialConversationData>)outConversationOptions;
    ProcessEvent(func, &params);
    outConversationOptions = params.outConversationOptions;
}
void USocialReactor::FinishSettingMissionGossipCalloutsMuted(EStandardManagedPriority InPriority, UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.FinishSettingMissionGossipCalloutsMuted"));
    struct Params_FinishSettingMissionGossipCalloutsMuted {
        EStandardManagedPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* InCaller; // 0x8
    }; // Size: 0x10
    Params_FinishSettingMissionGossipCalloutsMuted params{};
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
bool USocialReactor::AllowConversation(FString InTargetName, FString inMyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.AllowConversation"));
    struct Params_AllowConversation {
        FString InTargetName; // 0x0
        FString inMyName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_AllowConversation params{};
    params.InTargetName = (FString)InTargetName;
    params.inMyName = (FString)inMyName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USocialReactor::AddNewIdentity(FName& InCharacterName, FName& InIdentityName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialReactor.AddNewIdentity"));
    struct Params_AddNewIdentity {
        FName InCharacterName; // 0x0
        FName InIdentityName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AddNewIdentity params{};
    params.InCharacterName = (FName)InCharacterName;
    params.InIdentityName = (FName)InIdentityName;
    ProcessEvent(func, &params);
    InCharacterName = params.InCharacterName;
    InIdentityName = params.InIdentityName;
    return (bool)params.ReturnValue;
}
