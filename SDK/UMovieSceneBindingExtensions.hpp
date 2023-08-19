#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FSequencerBindingProxy.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UMovieSceneTrack;
class UClass;
class UObject;
#pragma pack(push, 1)
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary {
public:
    static UMovieSceneBindingExtensions* StaticClass();
    static void SetParent(FSequencerBindingProxy& InBinding, FSequencerBindingProxy& InParentBinding);
    static void SetName(FSequencerBindingProxy& InBinding, FString InName);
    static void SetDisplayName(FSequencerBindingProxy& InBinding);
    static void RemoveTrack(FSequencerBindingProxy& InBinding, UMovieSceneTrack* TrackToRemove);
    static void Remove(FSequencerBindingProxy& InBinding);
    static void MoveBindingContents(FSequencerBindingProxy& SourceBindingId, FSequencerBindingProxy& DestinationBindingId);
    static bool IsValid(FSequencerBindingProxy& InBinding);
    static TArray<UMovieSceneTrack*> GetTracks(FSequencerBindingProxy& InBinding);
    static UClass* GetPossessedObjectClass(FSequencerBindingProxy& InBinding);
    static FSequencerBindingProxy GetParent(FSequencerBindingProxy& InBinding);
    static UObject* GetObjectTemplate(FSequencerBindingProxy& InBinding);
    static FString GetName(FSequencerBindingProxy& InBinding);
    static FGuid GetId(FSequencerBindingProxy& InBinding);
    static void GetDisplayName(FSequencerBindingProxy& InBinding);
    static TArray<FSequencerBindingProxy> GetChildPossessables(FSequencerBindingProxy& InBinding);
    static TArray<UMovieSceneTrack*> FindTracksByType(FSequencerBindingProxy& InBinding, UClass* TrackType);
    static TArray<UMovieSceneTrack*> FindTracksByExactType(FSequencerBindingProxy& InBinding, UClass* TrackType);
    static UMovieSceneTrack* AddTrack(FSequencerBindingProxy& InBinding, UClass* TrackType);
}; // Size: 0x28
#pragma pack(pop)
