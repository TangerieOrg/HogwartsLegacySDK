#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
#pragma pack(push, 1)
class UAvaAudioHighLevelHelpers : public UBlueprintFunctionLibrary {
public:
    static UAvaAudioHighLevelHelpers* StaticClass();
    static void UnregisterForcedACKWitness(FName CharacterID, bool bUnregisterAll);
    static void UnregisterExclusiveMissionDialogue(FName& CharacterID, FString ExclusiveEventNamePattern, FName& FromMissionID);
    static bool SetAudioToPortraitTransform(AActor* Actor, FTransform Transform);
    static bool RestoreAudioFromPortraitTransform(AActor* Actor);
    static void RegisterForcedACKWitness(FName CharacterID);
    static void RegisterExclusiveMissionDialogue(FName& CharacterID, FString ExclusiveEventNamePattern, FName& FromMissionID);
    static void PlayGreetingForPlayerChatStarted(AActor* Actor, FString AudioConversationName);
    static bool DEBUG_IsAvatarInSiteVolume(FString SiteName);
}; // Size: 0x28
#pragma pack(pop)
