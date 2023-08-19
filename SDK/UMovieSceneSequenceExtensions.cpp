#include "EMovieSceneEvaluationType.hpp"
#include "EMovieSceneObjectBindingSpace.hpp"
#include "EUpdateClockSource.hpp"
#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FGuid.hpp"
#include "FMovieSceneMarkedFrame.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "FSequencerBindingProxy.hpp"
#include "FSequencerScriptingRange.hpp"
#include "FTimecode.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMovieScene.hpp"
#include "UMovieSceneFolder.hpp"
#include "UMovieSceneSequence.hpp"
#include "UMovieSceneSequenceExtensions.hpp"
#include "UMovieSceneTrack.hpp"
#include "UObject.hpp"
int32_t UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(UMovieSceneSequence* Sequence, FString InLabel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel"));
    struct Params_FindMarkedFrameByLabel {
        UMovieSceneSequence* Sequence; // 0x0
        FString InLabel; // 0x8
        int32_t ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_FindMarkedFrameByLabel params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.InLabel = (FString)InLabel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UMovieSceneSequenceExtensions* UMovieSceneSequenceExtensions::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneSequenceExtensions");
    return (UMovieSceneSequenceExtensions*)res;
}
void UMovieSceneSequenceExtensions::SetViewRangeStart(UMovieSceneSequence* InSequence, float StartTimeInSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart"));
    struct Params_SetViewRangeStart {
        UMovieSceneSequence* InSequence; // 0x0
        float StartTimeInSeconds; // 0x8
    }; // Size: 0xc
    Params_SetViewRangeStart params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    params.StartTimeInSeconds = (float)StartTimeInSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSequenceExtensions::SetTickResolution(UMovieSceneSequence* Sequence, FFrameRate TickResolution) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution"));
    struct Params_SetTickResolution {
        UMovieSceneSequence* Sequence; // 0x0
        FFrameRate TickResolution; // 0x8
    }; // Size: 0x10
    Params_SetTickResolution params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.TickResolution = (FFrameRate)TickResolution;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSequenceExtensions::DeleteMarkedFrames(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames"));
    struct Params_DeleteMarkedFrames {
        UMovieSceneSequence* Sequence; // 0x0
    }; // Size: 0x8
    Params_DeleteMarkedFrames params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSequenceExtensions::SortMarkedFrames(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames"));
    struct Params_SortMarkedFrames {
        UMovieSceneSequence* Sequence; // 0x0
    }; // Size: 0x8
    Params_SortMarkedFrames params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSequenceExtensions::SetWorkRangeEnd(UMovieSceneSequence* InSequence, float EndTimeInSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd"));
    struct Params_SetWorkRangeEnd {
        UMovieSceneSequence* InSequence; // 0x0
        float EndTimeInSeconds; // 0x8
    }; // Size: 0xc
    Params_SetWorkRangeEnd params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    params.EndTimeInSeconds = (float)EndTimeInSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSequenceExtensions::SetWorkRangeStart(UMovieSceneSequence* InSequence, float StartTimeInSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart"));
    struct Params_SetWorkRangeStart {
        UMovieSceneSequence* InSequence; // 0x0
        float StartTimeInSeconds; // 0x8
    }; // Size: 0xc
    Params_SetWorkRangeStart params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    params.StartTimeInSeconds = (float)StartTimeInSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UMovieSceneSequenceExtensions::GetPlaybackStart(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart"));
    struct Params_GetPlaybackStart {
        UMovieSceneSequence* Sequence; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPlaybackStart params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UMovieSceneSequenceExtensions::SetViewRangeEnd(UMovieSceneSequence* InSequence, float EndTimeInSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd"));
    struct Params_SetViewRangeEnd {
        UMovieSceneSequence* InSequence; // 0x0
        float EndTimeInSeconds; // 0x8
    }; // Size: 0xc
    Params_SetViewRangeEnd params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    params.EndTimeInSeconds = (float)EndTimeInSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSequenceExtensions::SetTickResolutionDirectly(UMovieSceneSequence* Sequence, FFrameRate TickResolution) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly"));
    struct Params_SetTickResolutionDirectly {
        UMovieSceneSequence* Sequence; // 0x0
        FFrameRate TickResolution; // 0x8
    }; // Size: 0x10
    Params_SetTickResolutionDirectly params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.TickResolution = (FFrameRate)TickResolution;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FSequencerBindingProxy UMovieSceneSequenceExtensions::AddPossessable(UMovieSceneSequence* Sequence, UObject* ObjectToPossess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddPossessable"));
    struct Params_AddPossessable {
        UMovieSceneSequence* Sequence; // 0x0
        UObject* ObjectToPossess; // 0x8
        FSequencerBindingProxy ReturnValue; // 0x10
    }; // Size: 0x28
    Params_AddPossessable params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.ObjectToPossess = (UObject*)ObjectToPossess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSequencerBindingProxy)params.ReturnValue;
}
void UMovieSceneSequenceExtensions::SetReadOnly(UMovieSceneSequence* Sequence, bool bInReadOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly"));
    struct Params_SetReadOnly {
        UMovieSceneSequence* Sequence; // 0x0
        bool bInReadOnly; // 0x8
    }; // Size: 0x9
    Params_SetReadOnly params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.bInReadOnly = (bool)bInReadOnly;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UMovieSceneSequenceExtensions::GetViewRangeEnd(UMovieSceneSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd"));
    struct Params_GetViewRangeEnd {
        UMovieSceneSequence* InSequence; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetViewRangeEnd params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(UMovieSceneSequence* Sequence, float StartTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds"));
    struct Params_SetPlaybackStartSeconds {
        UMovieSceneSequence* Sequence; // 0x0
        float StartTime; // 0x8
    }; // Size: 0xc
    Params_SetPlaybackStartSeconds params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.StartTime = (float)StartTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UMovieSceneSequenceExtensions::GetWorkRangeEnd(UMovieSceneSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd"));
    struct Params_GetWorkRangeEnd {
        UMovieSceneSequence* InSequence; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetWorkRangeEnd params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMovieSceneSequenceExtensions::SetPlaybackStart(UMovieSceneSequence* Sequence, int32_t StartFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart"));
    struct Params_SetPlaybackStart {
        UMovieSceneSequence* Sequence; // 0x0
        int32_t StartFrame; // 0x8
    }; // Size: 0xc
    Params_SetPlaybackStart params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.StartFrame = (int32_t)StartFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSequenceExtensions::SetClockSource(UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetClockSource"));
    struct Params_SetClockSource {
        UMovieSceneSequence* InSequence; // 0x0
        EUpdateClockSource InClockSource; // 0x8
    }; // Size: 0x9
    Params_SetClockSource params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    params.InClockSource = (EUpdateClockSource)InClockSource;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(UMovieSceneSequence* Sequence, float EndTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds"));
    struct Params_SetPlaybackEndSeconds {
        UMovieSceneSequence* Sequence; // 0x0
        float EndTime; // 0x8
    }; // Size: 0xc
    Params_SetPlaybackEndSeconds params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.EndTime = (float)EndTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UMovieSceneSequenceExtensions::IsReadOnly(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly"));
    struct Params_IsReadOnly {
        UMovieSceneSequence* Sequence; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsReadOnly params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMovieSceneSequenceExtensions::SetMarkedFrame(UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame"));
    struct Params_SetMarkedFrame {
        UMovieSceneSequence* Sequence; // 0x0
        int32_t InMarkIndex; // 0x8
        FFrameNumber InFrameNumber; // 0xc
    }; // Size: 0x10
    Params_SetMarkedFrame params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.InMarkIndex = (int32_t)InMarkIndex;
    params.InFrameNumber = (FFrameNumber)InFrameNumber;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSequenceExtensions::SetPlaybackEnd(UMovieSceneSequence* Sequence, int32_t EndFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd"));
    struct Params_SetPlaybackEnd {
        UMovieSceneSequence* Sequence; // 0x0
        int32_t EndFrame; // 0x8
    }; // Size: 0xc
    Params_SetPlaybackEnd params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.EndFrame = (int32_t)EndFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FSequencerBindingProxy UMovieSceneSequenceExtensions::FindBindingById(UMovieSceneSequence* Sequence, FGuid BindingID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingById"));
    struct Params_FindBindingById {
        UMovieSceneSequence* Sequence; // 0x0
        FGuid BindingID; // 0x8
        FSequencerBindingProxy ReturnValue; // 0x18
    }; // Size: 0x30
    Params_FindBindingById params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.BindingID = (FGuid)BindingID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSequencerBindingProxy)params.ReturnValue;
}
void UMovieSceneSequenceExtensions::SetEvaluationType(UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType"));
    struct Params_SetEvaluationType {
        UMovieSceneSequence* InSequence; // 0x0
        EMovieSceneEvaluationType InEvaluationType; // 0x8
    }; // Size: 0x9
    Params_SetEvaluationType params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    params.InEvaluationType = (EMovieSceneEvaluationType)InEvaluationType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FFrameRate UMovieSceneSequenceExtensions::GetDisplayRate(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate"));
    struct Params_GetDisplayRate {
        UMovieSceneSequence* Sequence; // 0x0
        FFrameRate ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDisplayRate params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameRate)params.ReturnValue;
}
void UMovieSceneSequenceExtensions::SetDisplayRate(UMovieSceneSequence* Sequence, FFrameRate DisplayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate"));
    struct Params_SetDisplayRate {
        UMovieSceneSequence* Sequence; // 0x0
        FFrameRate DisplayRate; // 0x8
    }; // Size: 0x10
    Params_SetDisplayRate params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.DisplayRate = (FFrameRate)DisplayRate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FSequencerBindingProxy UMovieSceneSequenceExtensions::FindBindingByName(UMovieSceneSequence* Sequence, FString Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName"));
    struct Params_FindBindingByName {
        UMovieSceneSequence* Sequence; // 0x0
        FString Name; // 0x8
        FSequencerBindingProxy ReturnValue; // 0x18
    }; // Size: 0x30
    Params_FindBindingByName params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.Name = (FString)Name;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSequencerBindingProxy)params.ReturnValue;
}
FSequencerBindingProxy UMovieSceneSequenceExtensions::ResolveBindingID(UMovieSceneSequence* MasterSequence, FMovieSceneObjectBindingID InObjectBindingID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID"));
    struct Params_ResolveBindingID {
        UMovieSceneSequence* MasterSequence; // 0x0
        FMovieSceneObjectBindingID InObjectBindingID; // 0x8
        FSequencerBindingProxy ReturnValue; // 0x20
    }; // Size: 0x38
    Params_ResolveBindingID params{};
    params.MasterSequence = (UMovieSceneSequence*)MasterSequence;
    params.InObjectBindingID = (FMovieSceneObjectBindingID)InObjectBindingID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSequencerBindingProxy)params.ReturnValue;
}
FTimecode UMovieSceneSequenceExtensions::GetTimecodeSource(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource"));
    struct Params_GetTimecodeSource {
        UMovieSceneSequence* Sequence; // 0x0
        FTimecode ReturnValue; // 0x8
    }; // Size: 0x1c
    Params_GetTimecodeSource params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimecode)params.ReturnValue;
}
bool UMovieSceneSequenceExtensions::RemoveMasterTrack(UMovieSceneSequence* Sequence, UMovieSceneTrack* MasterTrack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack"));
    struct Params_RemoveMasterTrack {
        UMovieSceneSequence* Sequence; // 0x0
        UMovieSceneTrack* MasterTrack; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RemoveMasterTrack params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.MasterTrack = (UMovieSceneTrack*)MasterTrack;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRangeSeconds(UMovieSceneSequence* Sequence, float StartTime, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds"));
    struct Params_MakeRangeSeconds {
        UMovieSceneSequence* Sequence; // 0x0
        float StartTime; // 0x8
        float Duration; // 0xc
        FSequencerScriptingRange ReturnValue; // 0x10
    }; // Size: 0x24
    Params_MakeRangeSeconds params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.StartTime = (float)StartTime;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSequencerScriptingRange)params.ReturnValue;
}
TArray<FSequencerBindingProxy> UMovieSceneSequenceExtensions::GetPossessables(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPossessables"));
    struct Params_GetPossessables {
        UMovieSceneSequence* Sequence; // 0x0
        TArray<FSequencerBindingProxy> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetPossessables params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSequencerBindingProxy>)params.ReturnValue;
}
FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRange(UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRange"));
    struct Params_MakeRange {
        UMovieSceneSequence* Sequence; // 0x0
        int32_t StartFrame; // 0x8
        int32_t Duration; // 0xc
        FSequencerScriptingRange ReturnValue; // 0x10
    }; // Size: 0x24
    Params_MakeRange params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.StartFrame = (int32_t)StartFrame;
    params.Duration = (int32_t)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSequencerScriptingRange)params.ReturnValue;
}
FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::MakeBindingID(UMovieSceneSequence* MasterSequence, FSequencerBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID"));
    struct Params_MakeBindingID {
        UMovieSceneSequence* MasterSequence; // 0x0
        FSequencerBindingProxy InBinding; // 0x8
        EMovieSceneObjectBindingSpace Space; // 0x20
        char pad_21[0x3];
        FMovieSceneObjectBindingID ReturnValue; // 0x24
    }; // Size: 0x3c
    Params_MakeBindingID params{};
    params.MasterSequence = (UMovieSceneSequence*)MasterSequence;
    params.InBinding = (FSequencerBindingProxy)InBinding;
    params.Space = (EMovieSceneObjectBindingSpace)Space;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (FMovieSceneObjectBindingID)params.ReturnValue;
}
FSequencerScriptingRange UMovieSceneSequenceExtensions::GetPlaybackRange(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange"));
    struct Params_GetPlaybackRange {
        UMovieSceneSequence* Sequence; // 0x0
        FSequencerScriptingRange ReturnValue; // 0x8
    }; // Size: 0x1c
    Params_GetPlaybackRange params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSequencerScriptingRange)params.ReturnValue;
}
TArray<UObject*> UMovieSceneSequenceExtensions::LocateBoundObjects(UMovieSceneSequence* Sequence, FSequencerBindingProxy& InBinding, UObject* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects"));
    struct Params_LocateBoundObjects {
        UMovieSceneSequence* Sequence; // 0x0
        FSequencerBindingProxy InBinding; // 0x8
        UObject* Context; // 0x20
        TArray<UObject*> ReturnValue; // 0x28
    }; // Size: 0x38
    Params_LocateBoundObjects params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.InBinding = (FSequencerBindingProxy)InBinding;
    params.Context = (UObject*)Context;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (TArray<UObject*>)params.ReturnValue;
}
float UMovieSceneSequenceExtensions::GetWorkRangeStart(UMovieSceneSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart"));
    struct Params_GetWorkRangeStart {
        UMovieSceneSequence* InSequence; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetWorkRangeStart params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<FSequencerBindingProxy> UMovieSceneSequenceExtensions::GetBindings(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindings"));
    struct Params_GetBindings {
        UMovieSceneSequence* Sequence; // 0x0
        TArray<FSequencerBindingProxy> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetBindings params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSequencerBindingProxy>)params.ReturnValue;
}
float UMovieSceneSequenceExtensions::GetViewRangeStart(UMovieSceneSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart"));
    struct Params_GetViewRangeStart {
        UMovieSceneSequence* InSequence; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetViewRangeStart params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByExactType(UMovieSceneSequence* Sequence, UClass* TrackType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType"));
    struct Params_FindMasterTracksByExactType {
        UMovieSceneSequence* Sequence; // 0x0
        UClass* TrackType; // 0x8
        TArray<UMovieSceneTrack*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_FindMasterTracksByExactType params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.TrackType = (UClass*)TrackType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UMovieSceneTrack*>)params.ReturnValue;
}
FFrameRate UMovieSceneSequenceExtensions::GetTickResolution(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution"));
    struct Params_GetTickResolution {
        UMovieSceneSequence* Sequence; // 0x0
        FFrameRate ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetTickResolution params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameRate)params.ReturnValue;
}
TArray<FSequencerBindingProxy> UMovieSceneSequenceExtensions::GetSpawnables(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables"));
    struct Params_GetSpawnables {
        UMovieSceneSequence* Sequence; // 0x0
        TArray<FSequencerBindingProxy> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSpawnables params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSequencerBindingProxy>)params.ReturnValue;
}
TArray<UMovieSceneFolder*> UMovieSceneSequenceExtensions::GetRootFoldersInSequence(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence"));
    struct Params_GetRootFoldersInSequence {
        UMovieSceneSequence* Sequence; // 0x0
        TArray<UMovieSceneFolder*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetRootFoldersInSequence params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UMovieSceneFolder*>)params.ReturnValue;
}
int32_t UMovieSceneSequenceExtensions::AddMarkedFrame(UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame"));
    struct Params_AddMarkedFrame {
        UMovieSceneSequence* Sequence; // 0x0
        FMovieSceneMarkedFrame InMarkedFrame; // 0x8
        int32_t ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_AddMarkedFrame params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.InMarkedFrame = (FMovieSceneMarkedFrame)InMarkedFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMarkedFrame = params.InMarkedFrame;
    return (int32_t)params.ReturnValue;
}
TArray<UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByType(UMovieSceneSequence* Sequence, UClass* TrackType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType"));
    struct Params_FindMasterTracksByType {
        UMovieSceneSequence* Sequence; // 0x0
        UClass* TrackType; // 0x8
        TArray<UMovieSceneTrack*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_FindMasterTracksByType params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.TrackType = (UClass*)TrackType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UMovieSceneTrack*>)params.ReturnValue;
}
FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetPortableBindingID(UMovieSceneSequence* MasterSequence, UMovieSceneSequence* DestinationSequence, FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID"));
    struct Params_GetPortableBindingID {
        UMovieSceneSequence* MasterSequence; // 0x0
        UMovieSceneSequence* DestinationSequence; // 0x8
        FSequencerBindingProxy InBinding; // 0x10
        FMovieSceneObjectBindingID ReturnValue; // 0x28
    }; // Size: 0x40
    Params_GetPortableBindingID params{};
    params.MasterSequence = (UMovieSceneSequence*)MasterSequence;
    params.DestinationSequence = (UMovieSceneSequence*)DestinationSequence;
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (FMovieSceneObjectBindingID)params.ReturnValue;
}
float UMovieSceneSequenceExtensions::GetPlaybackStartSeconds(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds"));
    struct Params_GetPlaybackStartSeconds {
        UMovieSceneSequence* Sequence; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPlaybackStartSeconds params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetBindingID(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindingID"));
    struct Params_GetBindingID {
        FSequencerBindingProxy InBinding; // 0x0
        FMovieSceneObjectBindingID ReturnValue; // 0x18
    }; // Size: 0x30
    Params_GetBindingID params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (FMovieSceneObjectBindingID)params.ReturnValue;
}
float UMovieSceneSequenceExtensions::GetPlaybackEndSeconds(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds"));
    struct Params_GetPlaybackEndSeconds {
        UMovieSceneSequence* Sequence; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPlaybackEndSeconds params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UMovieSceneSequenceExtensions::GetPlaybackEnd(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd"));
    struct Params_GetPlaybackEnd {
        UMovieSceneSequence* Sequence; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPlaybackEnd params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UMovieSceneFolder* UMovieSceneSequenceExtensions::AddRootFolderToSequence(UMovieSceneSequence* Sequence, FString NewFolderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence"));
    struct Params_AddRootFolderToSequence {
        UMovieSceneSequence* Sequence; // 0x0
        FString NewFolderName; // 0x8
        UMovieSceneFolder* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddRootFolderToSequence params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.NewFolderName = (FString)NewFolderName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieSceneFolder*)params.ReturnValue;
}
UMovieScene* UMovieSceneSequenceExtensions::GetMovieScene(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene"));
    struct Params_GetMovieScene {
        UMovieSceneSequence* Sequence; // 0x0
        UMovieScene* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMovieScene params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieScene*)params.ReturnValue;
}
TArray<UMovieSceneTrack*> UMovieSceneSequenceExtensions::GetMasterTracks(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks"));
    struct Params_GetMasterTracks {
        UMovieSceneSequence* Sequence; // 0x0
        TArray<UMovieSceneTrack*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetMasterTracks params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UMovieSceneTrack*>)params.ReturnValue;
}
void UMovieSceneSequenceExtensions::DeleteMarkedFrame(UMovieSceneSequence* Sequence, int32_t DeleteIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame"));
    struct Params_DeleteMarkedFrame {
        UMovieSceneSequence* Sequence; // 0x0
        int32_t DeleteIndex; // 0x8
    }; // Size: 0xc
    Params_DeleteMarkedFrame params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.DeleteIndex = (int32_t)DeleteIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FMovieSceneMarkedFrame> UMovieSceneSequenceExtensions::GetMarkedFrames(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames"));
    struct Params_GetMarkedFrames {
        UMovieSceneSequence* Sequence; // 0x0
        TArray<FMovieSceneMarkedFrame> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetMarkedFrames params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FMovieSceneMarkedFrame>)params.ReturnValue;
}
EMovieSceneEvaluationType UMovieSceneSequenceExtensions::GetEvaluationType(UMovieSceneSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType"));
    struct Params_GetEvaluationType {
        UMovieSceneSequence* InSequence; // 0x0
        EMovieSceneEvaluationType ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetEvaluationType params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EMovieSceneEvaluationType)params.ReturnValue;
}
EUpdateClockSource UMovieSceneSequenceExtensions::GetClockSource(UMovieSceneSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetClockSource"));
    struct Params_GetClockSource {
        UMovieSceneSequence* InSequence; // 0x0
        EUpdateClockSource ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetClockSource params{};
    params.InSequence = (UMovieSceneSequence*)InSequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EUpdateClockSource)params.ReturnValue;
}
int32_t UMovieSceneSequenceExtensions::FindNextMarkedFrame(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame"));
    struct Params_FindNextMarkedFrame {
        UMovieSceneSequence* Sequence; // 0x0
        FFrameNumber InFrameNumber; // 0x8
        bool bForward; // 0xc
        char pad_d[0x3];
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_FindNextMarkedFrame params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.InFrameNumber = (FFrameNumber)InFrameNumber;
    params.bForward = (bool)bForward;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumber(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber"));
    struct Params_FindMarkedFrameByFrameNumber {
        UMovieSceneSequence* Sequence; // 0x0
        FFrameNumber InFrameNumber; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FindMarkedFrameByFrameNumber params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.InFrameNumber = (FFrameNumber)InFrameNumber;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FSequencerBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromInstance(UMovieSceneSequence* Sequence, UObject* ObjectToSpawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance"));
    struct Params_AddSpawnableFromInstance {
        UMovieSceneSequence* Sequence; // 0x0
        UObject* ObjectToSpawn; // 0x8
        FSequencerBindingProxy ReturnValue; // 0x10
    }; // Size: 0x28
    Params_AddSpawnableFromInstance params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.ObjectToSpawn = (UObject*)ObjectToSpawn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSequencerBindingProxy)params.ReturnValue;
}
FSequencerBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromClass(UMovieSceneSequence* Sequence, UClass* ClassToSpawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass"));
    struct Params_AddSpawnableFromClass {
        UMovieSceneSequence* Sequence; // 0x0
        UClass* ClassToSpawn; // 0x8
        FSequencerBindingProxy ReturnValue; // 0x10
    }; // Size: 0x28
    Params_AddSpawnableFromClass params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.ClassToSpawn = (UClass*)ClassToSpawn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSequencerBindingProxy)params.ReturnValue;
}
UMovieSceneTrack* UMovieSceneSequenceExtensions::AddMasterTrack(UMovieSceneSequence* Sequence, UClass* TrackType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack"));
    struct Params_AddMasterTrack {
        UMovieSceneSequence* Sequence; // 0x0
        UClass* TrackType; // 0x8
        UMovieSceneTrack* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddMasterTrack params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    params.TrackType = (UClass*)TrackType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieSceneTrack*)params.ReturnValue;
}
