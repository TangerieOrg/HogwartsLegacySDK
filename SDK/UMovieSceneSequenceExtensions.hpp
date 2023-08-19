#pragma once
#include <cstdint>
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
class UMovieSceneSequence;
class UMovieSceneTrack;
class UMovieSceneFolder;
class UObject;
class UMovieScene;
class UClass;
#pragma pack(push, 1)
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary {
public:
    static UMovieSceneSequenceExtensions* StaticClass();
    static void SortMarkedFrames(UMovieSceneSequence* Sequence);
    static void SetWorkRangeStart(UMovieSceneSequence* InSequence, float StartTimeInSeconds);
    static void SetWorkRangeEnd(UMovieSceneSequence* InSequence, float EndTimeInSeconds);
    static void SetViewRangeStart(UMovieSceneSequence* InSequence, float StartTimeInSeconds);
    static void SetViewRangeEnd(UMovieSceneSequence* InSequence, float EndTimeInSeconds);
    static void SetTickResolutionDirectly(UMovieSceneSequence* Sequence, FFrameRate TickResolution);
    static void SetTickResolution(UMovieSceneSequence* Sequence, FFrameRate TickResolution);
    static void SetReadOnly(UMovieSceneSequence* Sequence, bool bInReadOnly);
    static void SetPlaybackStartSeconds(UMovieSceneSequence* Sequence, float StartTime);
    static void SetPlaybackStart(UMovieSceneSequence* Sequence, int32_t StartFrame);
    static void SetPlaybackEndSeconds(UMovieSceneSequence* Sequence, float EndTime);
    static void SetPlaybackEnd(UMovieSceneSequence* Sequence, int32_t EndFrame);
    static void SetMarkedFrame(UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber);
    static void SetEvaluationType(UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);
    static void SetDisplayRate(UMovieSceneSequence* Sequence, FFrameRate DisplayRate);
    static void SetClockSource(UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);
    static FSequencerBindingProxy ResolveBindingID(UMovieSceneSequence* MasterSequence, FMovieSceneObjectBindingID InObjectBindingID);
    static bool RemoveMasterTrack(UMovieSceneSequence* Sequence, UMovieSceneTrack* MasterTrack);
    static FSequencerScriptingRange MakeRangeSeconds(UMovieSceneSequence* Sequence, float StartTime, float Duration);
    static FSequencerScriptingRange MakeRange(UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration);
    static FMovieSceneObjectBindingID MakeBindingID(UMovieSceneSequence* MasterSequence, FSequencerBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space);
    static TArray<UObject*> LocateBoundObjects(UMovieSceneSequence* Sequence, FSequencerBindingProxy& InBinding, UObject* Context);
    static bool IsReadOnly(UMovieSceneSequence* Sequence);
    static float GetWorkRangeStart(UMovieSceneSequence* InSequence);
    static float GetWorkRangeEnd(UMovieSceneSequence* InSequence);
    static float GetViewRangeStart(UMovieSceneSequence* InSequence);
    static float GetViewRangeEnd(UMovieSceneSequence* InSequence);
    static FTimecode GetTimecodeSource(UMovieSceneSequence* Sequence);
    static FFrameRate GetTickResolution(UMovieSceneSequence* Sequence);
    static TArray<FSequencerBindingProxy> GetSpawnables(UMovieSceneSequence* Sequence);
    static TArray<UMovieSceneFolder*> GetRootFoldersInSequence(UMovieSceneSequence* Sequence);
    static TArray<FSequencerBindingProxy> GetPossessables(UMovieSceneSequence* Sequence);
    static FMovieSceneObjectBindingID GetPortableBindingID(UMovieSceneSequence* MasterSequence, UMovieSceneSequence* DestinationSequence, FSequencerBindingProxy& InBinding);
    static float GetPlaybackStartSeconds(UMovieSceneSequence* Sequence);
    static int32_t GetPlaybackStart(UMovieSceneSequence* Sequence);
    static FSequencerScriptingRange GetPlaybackRange(UMovieSceneSequence* Sequence);
    static float GetPlaybackEndSeconds(UMovieSceneSequence* Sequence);
    static int32_t GetPlaybackEnd(UMovieSceneSequence* Sequence);
    static UMovieScene* GetMovieScene(UMovieSceneSequence* Sequence);
    static TArray<UMovieSceneTrack*> GetMasterTracks(UMovieSceneSequence* Sequence);
    static TArray<FMovieSceneMarkedFrame> GetMarkedFrames(UMovieSceneSequence* Sequence);
    static EMovieSceneEvaluationType GetEvaluationType(UMovieSceneSequence* InSequence);
    static FFrameRate GetDisplayRate(UMovieSceneSequence* Sequence);
    static EUpdateClockSource GetClockSource(UMovieSceneSequence* InSequence);
    static TArray<FSequencerBindingProxy> GetBindings(UMovieSceneSequence* Sequence);
    static FMovieSceneObjectBindingID GetBindingID(FSequencerBindingProxy& InBinding);
    static int32_t FindNextMarkedFrame(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward);
    static TArray<UMovieSceneTrack*> FindMasterTracksByType(UMovieSceneSequence* Sequence, UClass* TrackType);
    static TArray<UMovieSceneTrack*> FindMasterTracksByExactType(UMovieSceneSequence* Sequence, UClass* TrackType);
    static int32_t FindMarkedFrameByLabel(UMovieSceneSequence* Sequence, FString InLabel);
    static int32_t FindMarkedFrameByFrameNumber(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber);
    static FSequencerBindingProxy FindBindingByName(UMovieSceneSequence* Sequence, FString Name);
    static FSequencerBindingProxy FindBindingById(UMovieSceneSequence* Sequence, FGuid BindingID);
    static void DeleteMarkedFrames(UMovieSceneSequence* Sequence);
    static void DeleteMarkedFrame(UMovieSceneSequence* Sequence, int32_t DeleteIndex);
    static FSequencerBindingProxy AddSpawnableFromInstance(UMovieSceneSequence* Sequence, UObject* ObjectToSpawn);
    static FSequencerBindingProxy AddSpawnableFromClass(UMovieSceneSequence* Sequence, UClass* ClassToSpawn);
    static UMovieSceneFolder* AddRootFolderToSequence(UMovieSceneSequence* Sequence, FString NewFolderName);
    static FSequencerBindingProxy AddPossessable(UMovieSceneSequence* Sequence, UObject* ObjectToPossess);
    static UMovieSceneTrack* AddMasterTrack(UMovieSceneSequence* Sequence, UClass* TrackType);
    static int32_t AddMarkedFrame(UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame);
}; // Size: 0x28
#pragma pack(pop)
