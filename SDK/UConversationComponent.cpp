#include "AActor.hpp"
#include "EConversationType.hpp"
#include "FConversationOption.hpp"
#include "FStaticConversationRegistrationPerUser.hpp"
#include "FStaticVendorEntry.hpp"
#include "UActorComponent.hpp"
#include "UConversationComponent.hpp"
#include "UConversationState.hpp"
#include "UFunction.hpp"
#include "USceneRig_SimpleConversation.hpp"
#include "UStationArchitectAsset.hpp"
#include "UStoryGraph_Conversation.hpp"
#include "UTimeRig_StoryGraphNode.hpp"
void UConversationComponent::StartConversationBP(FName CharacterID, FName ConversationID) {}
UConversationComponent* UConversationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConversationComponent");
    return (UConversationComponent*)res;
}
void UConversationComponent::StartConversationWithActorBP(AActor* interactionActor, FName ConversationID) {}
bool UConversationComponent::StartConversationWithAssetBP(FName CharacterID, FName ConversationID, UStoryGraph_Conversation* ConversationAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.StartConversationWithAssetBP"));
    struct Params_StartConversationWithAssetBP {
        FName CharacterID; // 0x0
        FName ConversationID; // 0x8
        UStoryGraph_Conversation* ConversationAsset; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_StartConversationWithAssetBP params{};
    params.CharacterID = (FName)CharacterID;
    params.ConversationID = (FName)ConversationID;
    params.ConversationAsset = (UStoryGraph_Conversation*)ConversationAsset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UConversationComponent::UnregisterConversation(FName CharacterID, FName ConversationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.UnregisterConversation"));
    struct Params_UnregisterConversation {
        FName CharacterID; // 0x0
        FName ConversationID; // 0x8
    }; // Size: 0x10
    Params_UnregisterConversation params{};
    params.CharacterID = (FName)CharacterID;
    params.ConversationID = (FName)ConversationID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UConversationComponent::UnregisterAllConversation(FName CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.UnregisterAllConversation"));
    struct Params_UnregisterAllConversation {
        FName CharacterID; // 0x0
    }; // Size: 0x8
    Params_UnregisterAllConversation params{};
    params.CharacterID = (FName)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UConversationComponent::SetBranchIDStateUsed(FName BranchID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.SetBranchIDStateUsed"));
    struct Params_SetBranchIDStateUsed {
        FName BranchID; // 0x0
    }; // Size: 0x8
    Params_SetBranchIDStateUsed params{};
    params.BranchID = (FName)BranchID;
    ProcessEvent(func, &params);
}
void UConversationComponent::RegisterVendorConversationBP(AActor* InteractingActor, UConversationComponent* ConversationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.RegisterVendorConversationBP"));
    struct Params_RegisterVendorConversationBP {
        AActor* InteractingActor; // 0x0
        UConversationComponent* ConversationComponent; // 0x8
    }; // Size: 0x10
    Params_RegisterVendorConversationBP params{};
    params.InteractingActor = (AActor*)InteractingActor;
    params.ConversationComponent = (UConversationComponent*)ConversationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UConversationComponent::RegisterConversationNoCallbacksBP(FName CharacterID, FName ConversationID, EConversationType ConversationType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.RegisterConversationNoCallbacksBP"));
    struct Params_RegisterConversationNoCallbacksBP {
        FName CharacterID; // 0x0
        FName ConversationID; // 0x8
        EConversationType ConversationType; // 0x10
    }; // Size: 0x11
    Params_RegisterConversationNoCallbacksBP params{};
    params.CharacterID = (FName)CharacterID;
    params.ConversationID = (FName)ConversationID;
    params.ConversationType = (EConversationType)ConversationType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UConversationComponent::NewConversations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.NewConversations"));
    struct Params_NewConversations {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_NewConversations params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UConversationComponent::RegisterConversationBP(FName CharacterID, FName ConversationID) {}
void UConversationComponent::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
UConversationState* UConversationComponent::GetCurrentConversation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.GetCurrentConversation"));
    struct Params_GetCurrentConversation {
        UConversationState* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentConversation params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UConversationState*)params.ReturnValue;
}
bool UConversationComponent::AnyQueuedConversations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.AnyQueuedConversations"));
    struct Params_AnyQueuedConversations {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AnyQueuedConversations params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UConversationComponent::GetConversationOptions(AActor* interactionActor, FName CharacterID, UTimeRig_StoryGraphNode* SGNode, TArray<FConversationOption>& UIParameters, TArray<FName>& BranchIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.GetConversationOptions"));
    struct Params_GetConversationOptions {
        AActor* interactionActor; // 0x0
        FName CharacterID; // 0x8
        UTimeRig_StoryGraphNode* SGNode; // 0x10
        TArray<FConversationOption> UIParameters; // 0x18
        TArray<FName> BranchIDs; // 0x28
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_GetConversationOptions params{};
    params.interactionActor = (AActor*)interactionActor;
    params.CharacterID = (FName)CharacterID;
    params.SGNode = (UTimeRig_StoryGraphNode*)SGNode;
    params.UIParameters = (TArray<FConversationOption>)UIParameters;
    params.BranchIDs = (TArray<FName>)BranchIDs;
    ProcessEvent(func, &params);
    BranchIDs = params.BranchIDs;
    UIParameters = params.UIParameters;
    return (bool)params.ReturnValue;
}
bool UConversationComponent::GetConversationLastLineID(UTimeRig_StoryGraphNode* SGNode, FName& LastLineID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.GetConversationLastLineID"));
    struct Params_GetConversationLastLineID {
        UTimeRig_StoryGraphNode* SGNode; // 0x0
        FName LastLineID; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetConversationLastLineID params{};
    params.SGNode = (UTimeRig_StoryGraphNode*)SGNode;
    params.LastLineID = (FName)LastLineID;
    ProcessEvent(func, &params);
    LastLineID = params.LastLineID;
    return (bool)params.ReturnValue;
}
UConversationComponent* UConversationComponent::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.Get"));
    struct Params_Get {
        UConversationComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UConversationComponent*)params.ReturnValue;
}
void UConversationComponent::BindGenericConversationStart() {}
void UConversationComponent::BindGenericConversationFinish() {}
bool UConversationComponent::BeginInteraction(AActor* interactionActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConversationComponent.BeginInteraction"));
    struct Params_BeginInteraction {
        AActor* interactionActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_BeginInteraction params{};
    params.interactionActor = (AActor*)interactionActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
