#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UMovieSceneTrack;
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary {
public:
    static UMovieSceneTrackExtensions* StaticClass();
    static void SetSortingOrder(UMovieSceneTrack* Track, int32_t SortingOrder);
    static void SetSectionToKey(UMovieSceneTrack* Track, UMovieSceneSection* Section);
    static void SetDisplayName(UMovieSceneTrack* Track);
    static void SetColorTint(UMovieSceneTrack* Track, FColor& ColorTint);
    static void RemoveSection(UMovieSceneTrack* Track, UMovieSceneSection* Section);
    static int32_t GetSortingOrder(UMovieSceneTrack* Track);
    static UMovieSceneSection* GetSectionToKey(UMovieSceneTrack* Track);
    static TArray<UMovieSceneSection*> GetSections(UMovieSceneTrack* Track);
    static void GetDisplayName(UMovieSceneTrack* Track);
    static FColor GetColorTint(UMovieSceneTrack* Track);
    static UMovieSceneSection* AddSection(UMovieSceneTrack* Track);
}; // Size: 0x28
#pragma pack(pop)
