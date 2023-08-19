#include "AActor.hpp"
#include "FTransform.hpp"
#include "UAvaAudioHighLevelHelpers.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
UAvaAudioHighLevelHelpers* UAvaAudioHighLevelHelpers::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaAudioHighLevelHelpers");
    return (UAvaAudioHighLevelHelpers*)res;
}
void UAvaAudioHighLevelHelpers::UnregisterForcedACKWitness(FName CharacterID, bool bUnregisterAll) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioHighLevelHelpers.UnregisterForcedACKWitness"));
    struct Params_UnregisterForcedACKWitness {
        FName CharacterID; // 0x0
        bool bUnregisterAll; // 0x8
    }; // Size: 0x9
    Params_UnregisterForcedACKWitness params{};
    params.CharacterID = (FName)CharacterID;
    params.bUnregisterAll = (bool)bUnregisterAll;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioHighLevelHelpers::UnregisterExclusiveMissionDialogue(FName& CharacterID, FString ExclusiveEventNamePattern, FName& FromMissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioHighLevelHelpers.UnregisterExclusiveMissionDialogue"));
    struct Params_UnregisterExclusiveMissionDialogue {
        FName CharacterID; // 0x0
        FString ExclusiveEventNamePattern; // 0x8
        FName FromMissionID; // 0x18
    }; // Size: 0x20
    Params_UnregisterExclusiveMissionDialogue params{};
    params.CharacterID = (FName)CharacterID;
    params.ExclusiveEventNamePattern = (FString)ExclusiveEventNamePattern;
    params.FromMissionID = (FName)FromMissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CharacterID = params.CharacterID;
    FromMissionID = params.FromMissionID;
}
bool UAvaAudioHighLevelHelpers::SetAudioToPortraitTransform(AActor* Actor, FTransform Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioHighLevelHelpers.SetAudioToPortraitTransform"));
    struct Params_SetAudioToPortraitTransform {
        AActor* Actor; // 0x0
        char pad_8[0x8];
        FTransform Transform; // 0x10
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_SetAudioToPortraitTransform params{};
    params.Actor = (AActor*)Actor;
    params.Transform = (FTransform)Transform;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAvaAudioHighLevelHelpers::PlayGreetingForPlayerChatStarted(AActor* Actor, FString AudioConversationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioHighLevelHelpers.PlayGreetingForPlayerChatStarted"));
    struct Params_PlayGreetingForPlayerChatStarted {
        AActor* Actor; // 0x0
        FString AudioConversationName; // 0x8
    }; // Size: 0x18
    Params_PlayGreetingForPlayerChatStarted params{};
    params.Actor = (AActor*)Actor;
    params.AudioConversationName = (FString)AudioConversationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UAvaAudioHighLevelHelpers::RestoreAudioFromPortraitTransform(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioHighLevelHelpers.RestoreAudioFromPortraitTransform"));
    struct Params_RestoreAudioFromPortraitTransform {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RestoreAudioFromPortraitTransform params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAvaAudioHighLevelHelpers::RegisterExclusiveMissionDialogue(FName& CharacterID, FString ExclusiveEventNamePattern, FName& FromMissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioHighLevelHelpers.RegisterExclusiveMissionDialogue"));
    struct Params_RegisterExclusiveMissionDialogue {
        FName CharacterID; // 0x0
        FString ExclusiveEventNamePattern; // 0x8
        FName FromMissionID; // 0x18
    }; // Size: 0x20
    Params_RegisterExclusiveMissionDialogue params{};
    params.CharacterID = (FName)CharacterID;
    params.ExclusiveEventNamePattern = (FString)ExclusiveEventNamePattern;
    params.FromMissionID = (FName)FromMissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CharacterID = params.CharacterID;
    FromMissionID = params.FromMissionID;
}
void UAvaAudioHighLevelHelpers::RegisterForcedACKWitness(FName CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioHighLevelHelpers.RegisterForcedACKWitness"));
    struct Params_RegisterForcedACKWitness {
        FName CharacterID; // 0x0
    }; // Size: 0x8
    Params_RegisterForcedACKWitness params{};
    params.CharacterID = (FName)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UAvaAudioHighLevelHelpers::DEBUG_IsAvatarInSiteVolume(FString SiteName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioHighLevelHelpers.DEBUG_IsAvatarInSiteVolume"));
    struct Params_DEBUG_IsAvatarInSiteVolume {
        FString SiteName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DEBUG_IsAvatarInSiteVolume params{};
    params.SiteName = (FString)SiteName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
