#include "AActor.hpp"
#include "AvaAudioDialogueFlags.hpp"
#include "EGenderVoice.hpp"
#include "FAudioDialogueLineData.hpp"
#include "FAvaAudioPrepareDialogueSequenceResult.hpp"
#include "FDialogueConversationReference.hpp"
#include "FDialogueSequenceReference.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAvaAudioDialogueEvent.hpp"
#include "UAvaAudioGameplayStatics.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAvaAudioGameplayStatics::RequestDialogueCompleteNotification(int32_t DialogueHandle) {}
bool UAvaAudioGameplayStatics::SetPlayerGenderVoice(EGenderVoice NewGenderVoice) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.SetPlayerGenderVoice"));
    struct Params_SetPlayerGenderVoice {
        EGenderVoice NewGenderVoice; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetPlayerGenderVoice params{};
    params.NewGenderVoice = (EGenderVoice)NewGenderVoice;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAvaAudioGameplayStatics* UAvaAudioGameplayStatics::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaAudioGameplayStatics");
    return (UAvaAudioGameplayStatics*)res;
}
void UAvaAudioGameplayStatics::WriteStringToSpeechLog(FString LogString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.WriteStringToSpeechLog"));
    struct Params_WriteStringToSpeechLog {
        FString LogString; // 0x0
    }; // Size: 0x10
    Params_WriteStringToSpeechLog params{};
    params.LogString = (FString)LogString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioGameplayStatics::StopPlayingID(int32_t& PlayingID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.StopPlayingID"));
    struct Params_StopPlayingID {
        int32_t PlayingID; // 0x0
    }; // Size: 0x4
    Params_StopPlayingID params{};
    params.PlayingID = (int32_t)PlayingID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PlayingID = params.PlayingID;
}
void UAvaAudioGameplayStatics::StopDialogue(int32_t DialogueHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.StopDialogue"));
    struct Params_StopDialogue {
        int32_t DialogueHandle; // 0x0
    }; // Size: 0x4
    Params_StopDialogue params{};
    params.DialogueHandle = (int32_t)DialogueHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioGameplayStatics::ResumeDialogueStartedPaused(int32_t DialogueHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.ResumeDialogueStartedPaused"));
    struct Params_ResumeDialogueStartedPaused {
        int32_t DialogueHandle; // 0x0
    }; // Size: 0x4
    Params_ResumeDialogueStartedPaused params{};
    params.DialogueHandle = (int32_t)DialogueHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UAvaAudioGameplayStatics::AddStateToStack(FName stateGroup, FName State, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.AddStateToStack"));
    struct Params_AddStateToStack {
        FName stateGroup; // 0x0
        FName State; // 0x8
        int32_t Priority; // 0x10
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_AddStateToStack params{};
    params.stateGroup = (FName)stateGroup;
    params.State = (FName)State;
    params.Priority = (int32_t)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAvaAudioGameplayStatics::RemoveStateFromStackByName(FName stateGroup, FName State, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.RemoveStateFromStackByName"));
    struct Params_RemoveStateFromStackByName {
        FName stateGroup; // 0x0
        FName State; // 0x8
        int32_t Priority; // 0x10
    }; // Size: 0x14
    Params_RemoveStateFromStackByName params{};
    params.stateGroup = (FName)stateGroup;
    params.State = (FName)State;
    params.Priority = (int32_t)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioGameplayStatics::RemoveStateFromStack(int32_t StackHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.RemoveStateFromStack"));
    struct Params_RemoveStateFromStack {
        int32_t StackHandle; // 0x0
    }; // Size: 0x4
    Params_RemoveStateFromStack params{};
    params.StackHandle = (int32_t)StackHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioGameplayStatics::QueueDialogueEventWithParametersByReference(FDialogueConversationReference DialogueEventName, AActor* Actor) {}
void UAvaAudioGameplayStatics::QueueDialogueEventWithParameters(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor) {}
bool UAvaAudioGameplayStatics::GetSourcePlayPosition(int32_t DialogueHandle, float& Out_AudioSeconds, float& Out_LipsyncPrerollAdjustedSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.GetSourcePlayPosition"));
    struct Params_GetSourcePlayPosition {
        int32_t DialogueHandle; // 0x0
        float Out_AudioSeconds; // 0x4
        float Out_LipsyncPrerollAdjustedSeconds; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetSourcePlayPosition params{};
    params.DialogueHandle = (int32_t)DialogueHandle;
    params.Out_AudioSeconds = (float)Out_AudioSeconds;
    params.Out_LipsyncPrerollAdjustedSeconds = (float)Out_LipsyncPrerollAdjustedSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Out_AudioSeconds = params.Out_AudioSeconds;
    Out_LipsyncPrerollAdjustedSeconds = params.Out_LipsyncPrerollAdjustedSeconds;
    return (bool)params.ReturnValue;
}
void UAvaAudioGameplayStatics::QueueDialogueEventAtLocationWithParameters(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {}
int32_t UAvaAudioGameplayStatics::QueueDialogueEventByReference(FDialogueConversationReference DialogueEventName, AActor* Actor, int32_t QueueToHandle, float QueueWithDelaySeconds, bool bStopWhenAttachedToDestroyed, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.QueueDialogueEventByReference"));
    struct Params_QueueDialogueEventByReference {
        FDialogueConversationReference DialogueEventName; // 0x0
        AActor* Actor; // 0x10
        int32_t QueueToHandle; // 0x18
        float QueueWithDelaySeconds; // 0x1c
        bool bStopWhenAttachedToDestroyed; // 0x20
        AvaAudioDialogueFlags flags; // 0x21
        char pad_22[0x2];
        int32_t ReturnValue; // 0x24
    }; // Size: 0x28
    Params_QueueDialogueEventByReference params{};
    params.DialogueEventName = (FDialogueConversationReference)DialogueEventName;
    params.Actor = (AActor*)Actor;
    params.QueueToHandle = (int32_t)QueueToHandle;
    params.QueueWithDelaySeconds = (float)QueueWithDelaySeconds;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UAvaAudioGameplayStatics::PostDialogueEventAtLocation(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PostDialogueEventAtLocation"));
    struct Params_PostDialogueEventAtLocation {
        UAvaAudioDialogueEvent* DialogueEvent; // 0x0
        FString DialogueEventName; // 0x8
        FVector Location; // 0x18
        FRotator Orientation; // 0x24
        UObject* WorldContextObject; // 0x30
        AvaAudioDialogueFlags flags; // 0x38
        char pad_39[0x3];
        int32_t ReturnValue; // 0x3c
    }; // Size: 0x40
    Params_PostDialogueEventAtLocation params{};
    params.DialogueEvent = (UAvaAudioDialogueEvent*)DialogueEvent;
    params.DialogueEventName = (FString)DialogueEventName;
    params.Location = (FVector)Location;
    params.Orientation = (FRotator)Orientation;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAvaAudioGameplayStatics::QueueDialogueEventAtLocationWithParametersByReference(FDialogueConversationReference DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {}
void UAvaAudioGameplayStatics::DebugDialogueUnload() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.DebugDialogueUnload"));
    struct Params_DebugDialogueUnload {
    }; // Size: 0x0
    Params_DebugDialogueUnload params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UAvaAudioGameplayStatics::QueueDialogueEventAtLocationByReference(FDialogueConversationReference DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject, int32_t QueueToHandle, float QueueWithDelaySeconds, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.QueueDialogueEventAtLocationByReference"));
    struct Params_QueueDialogueEventAtLocationByReference {
        FDialogueConversationReference DialogueEventName; // 0x0
        FVector Location; // 0x10
        FRotator Orientation; // 0x1c
        UObject* WorldContextObject; // 0x28
        int32_t QueueToHandle; // 0x30
        float QueueWithDelaySeconds; // 0x34
        AvaAudioDialogueFlags flags; // 0x38
        char pad_39[0x3];
        int32_t ReturnValue; // 0x3c
    }; // Size: 0x40
    Params_QueueDialogueEventAtLocationByReference params{};
    params.DialogueEventName = (FDialogueConversationReference)DialogueEventName;
    params.Location = (FVector)Location;
    params.Orientation = (FRotator)Orientation;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.QueueToHandle = (int32_t)QueueToHandle;
    params.QueueWithDelaySeconds = (float)QueueWithDelaySeconds;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UAvaAudioGameplayStatics::QueryDialogueEventPotentialCast(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, TArray<FName>& Out_CharacterIDCast) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.QueryDialogueEventPotentialCast"));
    struct Params_QueryDialogueEventPotentialCast {
        UAvaAudioDialogueEvent* DialogueEvent; // 0x0
        FString DialogueEventName; // 0x8
        TArray<FName> Out_CharacterIDCast; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_QueryDialogueEventPotentialCast params{};
    params.DialogueEvent = (UAvaAudioDialogueEvent*)DialogueEvent;
    params.DialogueEventName = (FString)DialogueEventName;
    params.Out_CharacterIDCast = (TArray<FName>)Out_CharacterIDCast;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Out_CharacterIDCast = params.Out_CharacterIDCast;
    return (bool)params.ReturnValue;
}
int32_t UAvaAudioGameplayStatics::QueueDialogueEventAtLocation(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject, int32_t QueueToHandle, float QueueWithDelaySeconds, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.QueueDialogueEventAtLocation"));
    struct Params_QueueDialogueEventAtLocation {
        UAvaAudioDialogueEvent* DialogueEvent; // 0x0
        FString DialogueEventName; // 0x8
        FVector Location; // 0x18
        FRotator Orientation; // 0x24
        UObject* WorldContextObject; // 0x30
        int32_t QueueToHandle; // 0x38
        float QueueWithDelaySeconds; // 0x3c
        AvaAudioDialogueFlags flags; // 0x40
        char pad_41[0x3];
        int32_t ReturnValue; // 0x44
    }; // Size: 0x48
    Params_QueueDialogueEventAtLocation params{};
    params.DialogueEvent = (UAvaAudioDialogueEvent*)DialogueEvent;
    params.DialogueEventName = (FString)DialogueEventName;
    params.Location = (FVector)Location;
    params.Orientation = (FRotator)Orientation;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.QueueToHandle = (int32_t)QueueToHandle;
    params.QueueWithDelaySeconds = (float)QueueWithDelaySeconds;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UAvaAudioGameplayStatics::QueueDialogueEvent(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor, int32_t QueueToHandle, float QueueWithDelaySeconds, bool bStopWhenAttachedToDestroyed, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.QueueDialogueEvent"));
    struct Params_QueueDialogueEvent {
        UAvaAudioDialogueEvent* DialogueEvent; // 0x0
        FString DialogueEventName; // 0x8
        AActor* Actor; // 0x18
        int32_t QueueToHandle; // 0x20
        float QueueWithDelaySeconds; // 0x24
        bool bStopWhenAttachedToDestroyed; // 0x28
        AvaAudioDialogueFlags flags; // 0x29
        char pad_2a[0x2];
        int32_t ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_QueueDialogueEvent params{};
    params.DialogueEvent = (UAvaAudioDialogueEvent*)DialogueEvent;
    params.DialogueEventName = (FString)DialogueEventName;
    params.Actor = (AActor*)Actor;
    params.QueueToHandle = (int32_t)QueueToHandle;
    params.QueueWithDelaySeconds = (float)QueueWithDelaySeconds;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UAvaAudioGameplayStatics::IsDialogueEventActive(int32_t DialogueHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.IsDialogueEventActive"));
    struct Params_IsDialogueEventActive {
        int32_t DialogueHandle; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsDialogueEventActive params{};
    params.DialogueHandle = (int32_t)DialogueHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAvaAudioGameplayStatics::PrepareDialogueSequenceByReference_BP(FDialogueConversationReference DialogueEventName, TArray<AActor*>& Actors, TArray<FString>& In_AdditionalCharacterIDs, TArray<FAvaAudioPrepareDialogueSequenceResult>& Out_Results, AvaAudioDialogueFlags flags, bool bStartBuffering) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PrepareDialogueSequenceByReference_BP"));
    struct Params_PrepareDialogueSequenceByReference_BP {
        FDialogueConversationReference DialogueEventName; // 0x0
        TArray<AActor*> Actors; // 0x10
        TArray<FString> In_AdditionalCharacterIDs; // 0x20
        TArray<FAvaAudioPrepareDialogueSequenceResult> Out_Results; // 0x30
        AvaAudioDialogueFlags flags; // 0x40
        bool bStartBuffering; // 0x41
        bool ReturnValue; // 0x42
    }; // Size: 0x43
    Params_PrepareDialogueSequenceByReference_BP params{};
    params.DialogueEventName = (FDialogueConversationReference)DialogueEventName;
    params.Actors = (TArray<AActor*>)Actors;
    params.In_AdditionalCharacterIDs = (TArray<FString>)In_AdditionalCharacterIDs;
    params.Out_Results = (TArray<FAvaAudioPrepareDialogueSequenceResult>)Out_Results;
    params.flags = (AvaAudioDialogueFlags)flags;
    params.bStartBuffering = (bool)bStartBuffering;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Out_Results = params.Out_Results;
    Actors = params.Actors;
    In_AdditionalCharacterIDs = params.In_AdditionalCharacterIDs;
    return (bool)params.ReturnValue;
}
int32_t UAvaAudioGameplayStatics::DebugDialoguePlay(AActor* Actor, FName lineID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.DebugDialoguePlay"));
    struct Params_DebugDialoguePlay {
        AActor* Actor; // 0x0
        FName lineID; // 0x8
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_DebugDialoguePlay params{};
    params.Actor = (AActor*)Actor;
    params.lineID = (FName)lineID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UAvaAudioGameplayStatics::PostDialogueEvent(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor, bool bStopWhenAttachedToDestroyed, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PostDialogueEvent"));
    struct Params_PostDialogueEvent {
        UAvaAudioDialogueEvent* DialogueEvent; // 0x0
        FString DialogueEventName; // 0x8
        AActor* Actor; // 0x18
        bool bStopWhenAttachedToDestroyed; // 0x20
        AvaAudioDialogueFlags flags; // 0x21
        char pad_22[0x2];
        int32_t ReturnValue; // 0x24
    }; // Size: 0x28
    Params_PostDialogueEvent params{};
    params.DialogueEvent = (UAvaAudioDialogueEvent*)DialogueEvent;
    params.DialogueEventName = (FString)DialogueEventName;
    params.Actor = (AActor*)Actor;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UAvaAudioGameplayStatics::PrepareDialogueSequence_BP(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, TArray<AActor*>& Actors, TArray<FString>& In_AdditionalCharacterIDs, TArray<FAvaAudioPrepareDialogueSequenceResult>& Out_Results, AvaAudioDialogueFlags flags, bool bStartBuffering) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PrepareDialogueSequence_BP"));
    struct Params_PrepareDialogueSequence_BP {
        UAvaAudioDialogueEvent* DialogueEvent; // 0x0
        FString DialogueEventName; // 0x8
        TArray<AActor*> Actors; // 0x18
        TArray<FString> In_AdditionalCharacterIDs; // 0x28
        TArray<FAvaAudioPrepareDialogueSequenceResult> Out_Results; // 0x38
        AvaAudioDialogueFlags flags; // 0x48
        bool bStartBuffering; // 0x49
        bool ReturnValue; // 0x4a
    }; // Size: 0x4b
    Params_PrepareDialogueSequence_BP params{};
    params.DialogueEvent = (UAvaAudioDialogueEvent*)DialogueEvent;
    params.DialogueEventName = (FString)DialogueEventName;
    params.Actors = (TArray<AActor*>)Actors;
    params.In_AdditionalCharacterIDs = (TArray<FString>)In_AdditionalCharacterIDs;
    params.Out_Results = (TArray<FAvaAudioPrepareDialogueSequenceResult>)Out_Results;
    params.flags = (AvaAudioDialogueFlags)flags;
    params.bStartBuffering = (bool)bStartBuffering;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Actors = params.Actors;
    Out_Results = params.Out_Results;
    In_AdditionalCharacterIDs = params.In_AdditionalCharacterIDs;
    return (bool)params.ReturnValue;
}
void UAvaAudioGameplayStatics::PrepareDialogueEventWithParametersByReference_BP(FDialogueConversationReference DialogueEventName, AActor* Actor) {}
void UAvaAudioGameplayStatics::PrepareDialogueEventWithParameters_BP(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor) {}
void UAvaAudioGameplayStatics::PrepareDialogueEventByReference_BP(FDialogueConversationReference DialogueEventName, AActor* Actor) {}
void UAvaAudioGameplayStatics::InitActorAudio(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.InitActorAudio"));
    struct Params_InitActorAudio {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_InitActorAudio params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioGameplayStatics::PrepareDialogueEvent_BP(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor) {}
void UAvaAudioGameplayStatics::PostEventPlayerVoice() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PostEventPlayerVoice"));
    struct Params_PostEventPlayerVoice {
    }; // Size: 0x0
    Params_PostEventPlayerVoice params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioGameplayStatics::PostDialogueEventWithParametersByReference(FDialogueConversationReference DialogueEventName, AActor* Actor) {}
void UAvaAudioGameplayStatics::PostDialogueEventWithParameters(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, AActor* Actor) {}
int32_t UAvaAudioGameplayStatics::PostDialogueEventByReference(FDialogueConversationReference DialogueEventName, AActor* Actor, bool bStopWhenAttachedToDestroyed, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PostDialogueEventByReference"));
    struct Params_PostDialogueEventByReference {
        FDialogueConversationReference DialogueEventName; // 0x0
        AActor* Actor; // 0x10
        bool bStopWhenAttachedToDestroyed; // 0x18
        AvaAudioDialogueFlags flags; // 0x19
        char pad_1a[0x2];
        int32_t ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_PostDialogueEventByReference params{};
    params.DialogueEventName = (FDialogueConversationReference)DialogueEventName;
    params.Actor = (AActor*)Actor;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAvaAudioGameplayStatics::PostDialogueEventAtLocationWithParametersByReference(FDialogueConversationReference DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {}
void UAvaAudioGameplayStatics::PostDialogueEventAtLocationWithParameters(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {}
void UAvaAudioGameplayStatics::HermesAudioDialogueLineStartedDataDelegate__DelegateSignature(UObject* Caller, FAudioDialogueLineData& AudioDialogueLineData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.AvaAudioGameplayStatics.HermesAudioDialogueLineStartedDataDelegate__DelegateSignature"));
    struct Params_HermesAudioDialogueLineStartedDataDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FAudioDialogueLineData AudioDialogueLineData; // 0x8
    }; // Size: 0x58
    Params_HermesAudioDialogueLineStartedDataDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.AudioDialogueLineData = (FAudioDialogueLineData)AudioDialogueLineData;
    ProcessEvent(func, &params);
    AudioDialogueLineData = params.AudioDialogueLineData;
}
int32_t UAvaAudioGameplayStatics::PostDialogueEventAtLocationByReference(FDialogueConversationReference DialogueEventName, FVector Location, FRotator Orientation, UObject* WorldContextObject, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PostDialogueEventAtLocationByReference"));
    struct Params_PostDialogueEventAtLocationByReference {
        FDialogueConversationReference DialogueEventName; // 0x0
        FVector Location; // 0x10
        FRotator Orientation; // 0x1c
        UObject* WorldContextObject; // 0x28
        AvaAudioDialogueFlags flags; // 0x30
        char pad_31[0x3];
        int32_t ReturnValue; // 0x34
    }; // Size: 0x38
    Params_PostDialogueEventAtLocationByReference params{};
    params.DialogueEventName = (FDialogueConversationReference)DialogueEventName;
    params.Location = (FVector)Location;
    params.Orientation = (FRotator)Orientation;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UAvaAudioGameplayStatics::PlayDialogueSequenceWithCharacterIDsByReference(FDialogueConversationReference DialogueEventName, TArray<AActor*> Actors, TArray<FString> In_AdditionalCharacterIDs, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PlayDialogueSequenceWithCharacterIDsByReference"));
    struct Params_PlayDialogueSequenceWithCharacterIDsByReference {
        FDialogueConversationReference DialogueEventName; // 0x0
        TArray<AActor*> Actors; // 0x10
        TArray<FString> In_AdditionalCharacterIDs; // 0x20
        AvaAudioDialogueFlags flags; // 0x30
        char pad_31[0x3];
        int32_t ReturnValue; // 0x34
    }; // Size: 0x38
    Params_PlayDialogueSequenceWithCharacterIDsByReference params{};
    params.DialogueEventName = (FDialogueConversationReference)DialogueEventName;
    params.Actors = (TArray<AActor*>)Actors;
    params.In_AdditionalCharacterIDs = (TArray<FString>)In_AdditionalCharacterIDs;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAvaAudioGameplayStatics::DebugDialogueChangeLanguage(FString Language) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.DebugDialogueChangeLanguage"));
    struct Params_DebugDialogueChangeLanguage {
        FString Language; // 0x0
    }; // Size: 0x10
    Params_DebugDialogueChangeLanguage params{};
    params.Language = (FString)Language;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UAvaAudioGameplayStatics::PlayDialogueSequenceWithCharacterIDs(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, TArray<AActor*> Actors, TArray<FString> In_AdditionalCharacterIDs, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PlayDialogueSequenceWithCharacterIDs"));
    struct Params_PlayDialogueSequenceWithCharacterIDs {
        UAvaAudioDialogueEvent* DialogueEvent; // 0x0
        FString DialogueEventName; // 0x8
        TArray<AActor*> Actors; // 0x18
        TArray<FString> In_AdditionalCharacterIDs; // 0x28
        AvaAudioDialogueFlags flags; // 0x38
        char pad_39[0x3];
        int32_t ReturnValue; // 0x3c
    }; // Size: 0x40
    Params_PlayDialogueSequenceWithCharacterIDs params{};
    params.DialogueEvent = (UAvaAudioDialogueEvent*)DialogueEvent;
    params.DialogueEventName = (FString)DialogueEventName;
    params.Actors = (TArray<AActor*>)Actors;
    params.In_AdditionalCharacterIDs = (TArray<FString>)In_AdditionalCharacterIDs;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UAvaAudioGameplayStatics::PlayDialogueSequenceByReference(FDialogueConversationReference DialogueEventName, TArray<AActor*> Actors, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PlayDialogueSequenceByReference"));
    struct Params_PlayDialogueSequenceByReference {
        FDialogueConversationReference DialogueEventName; // 0x0
        TArray<AActor*> Actors; // 0x10
        AvaAudioDialogueFlags flags; // 0x20
        char pad_21[0x3];
        int32_t ReturnValue; // 0x24
    }; // Size: 0x28
    Params_PlayDialogueSequenceByReference params{};
    params.DialogueEventName = (FDialogueConversationReference)DialogueEventName;
    params.Actors = (TArray<AActor*>)Actors;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UAvaAudioGameplayStatics::PlayDialogueSequence(UAvaAudioDialogueEvent* DialogueEvent, FString DialogueEventName, TArray<AActor*> Actors, AvaAudioDialogueFlags flags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.PlayDialogueSequence"));
    struct Params_PlayDialogueSequence {
        UAvaAudioDialogueEvent* DialogueEvent; // 0x0
        FString DialogueEventName; // 0x8
        TArray<AActor*> Actors; // 0x18
        AvaAudioDialogueFlags flags; // 0x28
        char pad_29[0x3];
        int32_t ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_PlayDialogueSequence params{};
    params.DialogueEvent = (UAvaAudioDialogueEvent*)DialogueEvent;
    params.DialogueEventName = (FString)DialogueEventName;
    params.Actors = (TArray<AActor*>)Actors;
    params.flags = (AvaAudioDialogueFlags)flags;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAvaAudioGameplayStatics::MusicStackRemoveEventByName(FString EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.MusicStackRemoveEventByName"));
    struct Params_MusicStackRemoveEventByName {
        FString EventName; // 0x0
    }; // Size: 0x10
    Params_MusicStackRemoveEventByName params{};
    params.EventName = (FString)EventName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioGameplayStatics::MusicStackAddEventAtLocationByName(FString EventName, int32_t Priority, FVector Location, FRotator Orientation, UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.MusicStackAddEventAtLocationByName"));
    struct Params_MusicStackAddEventAtLocationByName {
        FString EventName; // 0x0
        int32_t Priority; // 0x10
        FVector Location; // 0x14
        FRotator Orientation; // 0x20
        char pad_2c[0x4];
        UObject* WorldContextObject; // 0x30
    }; // Size: 0x38
    Params_MusicStackAddEventAtLocationByName params{};
    params.EventName = (FString)EventName;
    params.Priority = (int32_t)Priority;
    params.Location = (FVector)Location;
    params.Orientation = (FRotator)Orientation;
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UAvaAudioGameplayStatics::DialogueReferenceIsValid(FDialogueConversationReference DialogueReference) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.DialogueReferenceIsValid"));
    struct Params_DialogueReferenceIsValid {
        FDialogueConversationReference DialogueReference; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DialogueReferenceIsValid params{};
    params.DialogueReference = (FDialogueConversationReference)DialogueReference;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAvaAudioGameplayStatics::LatchSpell(FName AudioSpellName, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.LatchSpell"));
    struct Params_LatchSpell {
        FName AudioSpellName; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_LatchSpell params{};
    params.AudioSpellName = (FName)AudioSpellName;
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UAvaAudioGameplayStatics::IsStateOnTopOfStack(FName stateGroup, FName State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.IsStateOnTopOfStack"));
    struct Params_IsStateOnTopOfStack {
        FName stateGroup; // 0x0
        FName State; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsStateOnTopOfStack params{};
    params.stateGroup = (FName)stateGroup;
    params.State = (FName)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAvaAudioGameplayStatics::HermesBindAudioDialogueLineStartedData() {}
void UAvaAudioGameplayStatics::HermesBindAudioDialogueLineEndedData() {}
void UAvaAudioGameplayStatics::HermesAudioDialogueLineEndedDataDelegate__DelegateSignature(UObject* Caller, FAudioDialogueLineData& AudioDialogueLineData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.AvaAudioGameplayStatics.HermesAudioDialogueLineEndedDataDelegate__DelegateSignature"));
    struct Params_HermesAudioDialogueLineEndedDataDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FAudioDialogueLineData AudioDialogueLineData; // 0x8
    }; // Size: 0x58
    Params_HermesAudioDialogueLineEndedDataDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.AudioDialogueLineData = (FAudioDialogueLineData)AudioDialogueLineData;
    ProcessEvent(func, &params);
    AudioDialogueLineData = params.AudioDialogueLineData;
}
EGenderVoice UAvaAudioGameplayStatics::GetPlayerGenderVoice() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.GetPlayerGenderVoice"));
    struct Params_GetPlayerGenderVoice {
        EGenderVoice ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayerGenderVoice params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGenderVoice)params.ReturnValue;
}
bool UAvaAudioGameplayStatics::DialogueSequenceReferenceIsValid(FDialogueSequenceReference& Reference) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.DialogueSequenceReferenceIsValid"));
    struct Params_DialogueSequenceReferenceIsValid {
        FDialogueSequenceReference Reference; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DialogueSequenceReferenceIsValid params{};
    params.Reference = (FDialogueSequenceReference)Reference;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Reference = params.Reference;
    return (bool)params.ReturnValue;
}
void UAvaAudioGameplayStatics::DebugDialogueLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.DebugDialogueLoad"));
    struct Params_DebugDialogueLoad {
    }; // Size: 0x0
    Params_DebugDialogueLoad params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioGameplayStatics::ClearDialogueCompleteNotification(int32_t DialogueHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioGameplayStatics.ClearDialogueCompleteNotification"));
    struct Params_ClearDialogueCompleteNotification {
        int32_t DialogueHandle; // 0x0
    }; // Size: 0x4
    Params_ClearDialogueCompleteNotification params{};
    params.DialogueHandle = (int32_t)DialogueHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
