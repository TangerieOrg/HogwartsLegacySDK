#include "FColor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneTrack.hpp"
#include "UMovieSceneTrackExtensions.hpp"
UMovieSceneTrackExtensions* UMovieSceneTrackExtensions::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneTrackExtensions");
    return (UMovieSceneTrackExtensions*)res;
}
void UMovieSceneTrackExtensions::SetSortingOrder(UMovieSceneTrack* Track, int32_t SortingOrder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder"));
    struct Params_SetSortingOrder {
        UMovieSceneTrack* Track; // 0x0
        int32_t SortingOrder; // 0x8
    }; // Size: 0xc
    Params_SetSortingOrder params{};
    params.Track = (UMovieSceneTrack*)Track;
    params.SortingOrder = (int32_t)SortingOrder;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneTrackExtensions::RemoveSection(UMovieSceneTrack* Track, UMovieSceneSection* Section) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneTrackExtensions.RemoveSection"));
    struct Params_RemoveSection {
        UMovieSceneTrack* Track; // 0x0
        UMovieSceneSection* Section; // 0x8
    }; // Size: 0x10
    Params_RemoveSection params{};
    params.Track = (UMovieSceneTrack*)Track;
    params.Section = (UMovieSceneSection*)Section;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneTrackExtensions::SetColorTint(UMovieSceneTrack* Track, FColor& ColorTint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetColorTint"));
    struct Params_SetColorTint {
        UMovieSceneTrack* Track; // 0x0
        FColor ColorTint; // 0x8
    }; // Size: 0xc
    Params_SetColorTint params{};
    params.Track = (UMovieSceneTrack*)Track;
    params.ColorTint = (FColor)ColorTint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ColorTint = params.ColorTint;
}
void UMovieSceneTrackExtensions::SetDisplayName(UMovieSceneTrack* Track) {}
void UMovieSceneTrackExtensions::SetSectionToKey(UMovieSceneTrack* Track, UMovieSceneSection* Section) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey"));
    struct Params_SetSectionToKey {
        UMovieSceneTrack* Track; // 0x0
        UMovieSceneSection* Section; // 0x8
    }; // Size: 0x10
    Params_SetSectionToKey params{};
    params.Track = (UMovieSceneTrack*)Track;
    params.Section = (UMovieSceneSection*)Section;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UMovieSceneTrackExtensions::GetSortingOrder(UMovieSceneTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder"));
    struct Params_GetSortingOrder {
        UMovieSceneTrack* Track; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSortingOrder params{};
    params.Track = (UMovieSceneTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UMovieSceneSection* UMovieSceneTrackExtensions::GetSectionToKey(UMovieSceneTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey"));
    struct Params_GetSectionToKey {
        UMovieSceneTrack* Track; // 0x0
        UMovieSceneSection* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSectionToKey params{};
    params.Track = (UMovieSceneTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieSceneSection*)params.ReturnValue;
}
TArray<UMovieSceneSection*> UMovieSceneTrackExtensions::GetSections(UMovieSceneTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSections"));
    struct Params_GetSections {
        UMovieSceneTrack* Track; // 0x0
        TArray<UMovieSceneSection*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSections params{};
    params.Track = (UMovieSceneTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UMovieSceneSection*>)params.ReturnValue;
}
void UMovieSceneTrackExtensions::GetDisplayName(UMovieSceneTrack* Track) {}
FColor UMovieSceneTrackExtensions::GetColorTint(UMovieSceneTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetColorTint"));
    struct Params_GetColorTint {
        UMovieSceneTrack* Track; // 0x0
        FColor ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetColorTint params{};
    params.Track = (UMovieSceneTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FColor)params.ReturnValue;
}
UMovieSceneSection* UMovieSceneTrackExtensions::AddSection(UMovieSceneTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneTrackExtensions.AddSection"));
    struct Params_AddSection {
        UMovieSceneTrack* Track; // 0x0
        UMovieSceneSection* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddSection params{};
    params.Track = (UMovieSceneTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieSceneSection*)params.ReturnValue;
}
