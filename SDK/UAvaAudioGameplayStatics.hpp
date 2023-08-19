#pragma once
#include <cstdint>
#include "AvaAudioDialogueFlags.hpp"
#include "EGenderVoice.hpp"
#include "FAvaAudioPrepareDialogueSequenceResult.hpp"
#include "FDialogueConversationReference.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
struct FAudioDialogueLineData;
class UAvaAudioDialogueEvent;
class UObject;
struct FDialogueSequenceReference;
#pragma pack(push, 1)
class UAvaAudioGameplayStatics : public UBlueprintFunctionLibrary {
public:
    static UAvaAudioGameplayStatics* StaticClass();
    static void WriteStringToSpeechLog(FString LogString);
    static void StopPlayingID(int32_t& PlayingID);
    static void StopDialogue(int32_t DialogueHandle);
    static bool SetPlayerGenderVoice(EGenderVoice NewGenderVoice);
    static void ResumeDialogueStartedPaused(int32_t DialogueHandle);
    static void RequestDialogueCompleteNotification(int32_t DialogueHandle);
    static void RemoveStateFromStackByName(FName stateGroup, FName State, int32_t Priority);
    static void RemoveStateFromStack(int32_t StackHandle);
    static void QueueDialogueEventWithParametersByReference(FDialogueConversationReference DialogueEventName, AActor* Actor);
    static void QueueDialogueEventWithParameters(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor);
    static int32_t QueueDialogueEventByReference(FDialogueConversationReference DialogueEventName, AActor* Actor, int32_t QueueToHandle, float QueueWithDelaySeconds, bool bStopWhenAttachedToDestroyed, AvaAudioDialogueFlags flags);
    static void QueueDialogueEventAtLocationWithParametersByReference(FDialogueConversationReference DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    static void QueueDialogueEventAtLocationWithParameters(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    static int32_t QueueDialogueEventAtLocationByReference(FDialogueConversationReference DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject, int32_t QueueToHandle, float QueueWithDelaySeconds, AvaAudioDialogueFlags flags);
    static int32_t QueueDialogueEventAtLocation(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject, int32_t QueueToHandle, float QueueWithDelaySeconds, AvaAudioDialogueFlags flags);
    static int32_t QueueDialogueEvent(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor, int32_t QueueToHandle, float QueueWithDelaySeconds, bool bStopWhenAttachedToDestroyed, AvaAudioDialogueFlags flags);
    static bool QueryDialogueEventPotentialCast(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, TArray<FName>& Out_CharacterIDCast);
    static bool PrepareDialogueSequenceByReference_BP(FDialogueConversationReference DialogueEventName, TArray<AActor*>& Actors, TArray<FString>& In_AdditionalCharacterIDs, TArray<FAvaAudioPrepareDialogueSequenceResult>& Out_Results, AvaAudioDialogueFlags flags, bool bStartBuffering);
    static bool PrepareDialogueSequence_BP(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, TArray<AActor*>& Actors, TArray<FString>& In_AdditionalCharacterIDs, TArray<FAvaAudioPrepareDialogueSequenceResult>& Out_Results, AvaAudioDialogueFlags flags, bool bStartBuffering);
    static void PrepareDialogueEventWithParametersByReference_BP(FDialogueConversationReference DialogueEventName, AActor* Actor);
    static void PrepareDialogueEventWithParameters_BP(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor);
    static void PrepareDialogueEventByReference_BP(FDialogueConversationReference DialogueEventName, AActor* Actor);
    static void PrepareDialogueEvent_BP(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor);
    static void PostEventPlayerVoice();
    static void PostDialogueEventWithParametersByReference(FDialogueConversationReference DialogueEventName, AActor* Actor);
    static void PostDialogueEventWithParameters(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor);
    static int32_t PostDialogueEventByReference(FDialogueConversationReference DialogueEventName, AActor* Actor, bool bStopWhenAttachedToDestroyed, AvaAudioDialogueFlags flags);
    static void PostDialogueEventAtLocationWithParametersByReference(FDialogueConversationReference DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    static void PostDialogueEventAtLocationWithParameters(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    static int32_t PostDialogueEventAtLocationByReference(FDialogueConversationReference DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject, AvaAudioDialogueFlags flags);
    static int32_t PostDialogueEventAtLocation(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject, AvaAudioDialogueFlags flags);
    static int32_t PostDialogueEvent(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor, bool bStopWhenAttachedToDestroyed, AvaAudioDialogueFlags flags);
    static int32_t PlayDialogueSequenceWithCharacterIDsByReference(FDialogueConversationReference DialogueEventName, TArray<AActor*> Actors, TArray<FString> In_AdditionalCharacterIDs, AvaAudioDialogueFlags flags);
    static int32_t PlayDialogueSequenceWithCharacterIDs(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, TArray<AActor*> Actors, TArray<FString> In_AdditionalCharacterIDs, AvaAudioDialogueFlags flags);
    static int32_t PlayDialogueSequenceByReference(FDialogueConversationReference DialogueEventName, TArray<AActor*> Actors, AvaAudioDialogueFlags flags);
    static int32_t PlayDialogueSequence(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, TArray<AActor*> Actors, AvaAudioDialogueFlags flags);
    static void MusicStackRemoveEventByName(FString EventName);
    static void MusicStackAddEventAtLocationByName(FString EventName, int32_t Priority, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    static void LatchSpell(FName AudioSpellName, AActor* Actor);
    static bool IsStateOnTopOfStack(FName stateGroup, FName State);
    static bool IsDialogueEventActive(int32_t DialogueHandle);
    static void InitActorAudio(AActor* Actor);
    static void HermesBindAudioDialogueLineStartedData();
    static void HermesBindAudioDialogueLineEndedData();
    void HermesAudioDialogueLineStartedDataDelegate__DelegateSignature(UObject* Caller, FAudioDialogueLineData& AudioDialogueLineData);
    void HermesAudioDialogueLineEndedDataDelegate__DelegateSignature(UObject* Caller, FAudioDialogueLineData& AudioDialogueLineData);
    static bool GetSourcePlayPosition(int32_t DialogueHandle, float& Out_AudioSeconds, float& Out_LipsyncPrerollAdjustedSeconds);
    static EGenderVoice GetPlayerGenderVoice();
    static bool DialogueSequenceReferenceIsValid(FDialogueSequenceReference& Reference);
    static bool DialogueReferenceIsValid(FDialogueConversationReference DialogueReference);
    static void DebugDialogueUnload();
    static int32_t DebugDialoguePlay(AActor* Actor, FName lineID);
    static void DebugDialogueLoad();
    static void DebugDialogueChangeLanguage(FString Language);
    static void ClearDialogueCompleteNotification(int32_t DialogueHandle);
    static int32_t AddStateToStack(FName stateGroup, FName State, int32_t Priority);
}; // Size: 0x28
#pragma pack(pop)
