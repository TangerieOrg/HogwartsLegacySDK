#pragma once
#include <cstdint>
#include "EConversationType.hpp"
#include "FConversationOption.hpp"
#include "FStaticConversationRegistrationPerUser.hpp"
#include "FStaticVendorEntry.hpp"
#include "UActorComponent.hpp"
class UConversationState;
class UStationArchitectAsset;
class AActor;
class USceneRig_SimpleConversation;
class UStoryGraph_Conversation;
class UTimeRig_StoryGraphNode;
#pragma pack(push, 1)
class UConversationComponent : public UActorComponent {
public:
    char pad_c8[0xa8];
    UConversationState* ConversationState; // 0x170
    char pad_178[0x2d8];
    TArray<FStaticConversationRegistrationPerUser> StaticRegistrations; // 0x450
    char pad_460[0x8];
    UStationArchitectAsset* ConversationSceneRigs; // 0x468
    USceneRig_SimpleConversation* PresentChoicesSR; // 0x470
    UStoryGraph_Conversation* VendorStoryGraph; // 0x478
    TArray<FStaticVendorEntry> StaticVendorEntries; // 0x480
    char pad_490[0x70];
    static UConversationComponent* StaticClass();
    static void UnregisterConversation(FName CharacterID, FName ConversationID);
    static void UnregisterAllConversation(FName CharacterID);
    static bool StartConversationWithAssetBP(FName CharacterID, FName ConversationID, UStoryGraph_Conversation* ConversationAsset);
    static void StartConversationWithActorBP(AActor* interactionActor, FName ConversationID);
    static void StartConversationBP(FName CharacterID, FName ConversationID);
    void SetBranchIDStateUsed(FName BranchID);
    static void RegisterVendorConversationBP(AActor* InteractingActor, UConversationComponent* ConversationComponent);
    static void RegisterConversationNoCallbacksBP(FName CharacterID, FName ConversationID, EConversationType ConversationType);
    static void RegisterConversationBP(FName CharacterID, FName ConversationID);
    void OnSaveGameLoaded();
    static bool NewConversations();
    static UConversationState* GetCurrentConversation();
    bool GetConversationOptions(AActor* interactionActor, FName CharacterID, UTimeRig_StoryGraphNode* SGNode, TArray<FConversationOption>& UIParameters, TArray<FName>& BranchIDs);
    bool GetConversationLastLineID(UTimeRig_StoryGraphNode* SGNode, FName& LastLineID);
    static UConversationComponent* Get();
    static void BindGenericConversationStart();
    static void BindGenericConversationFinish();
    bool BeginInteraction(AActor* interactionActor);
    static bool AnyQueuedConversations();
}; // Size: 0x500
#pragma pack(pop)
