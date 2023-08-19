#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMovieSceneVectorTrack.hpp"
#include "UMovieSceneVectorTrackExtensions.hpp"
UMovieSceneVectorTrackExtensions* UMovieSceneVectorTrackExtensions::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneVectorTrackExtensions");
    return (UMovieSceneVectorTrackExtensions*)res;
}
void UMovieSceneVectorTrackExtensions::SetNumChannelsUsed(UMovieSceneVectorTrack* Track, int32_t InNumChannelsUsed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneVectorTrackExtensions.SetNumChannelsUsed"));
    struct Params_SetNumChannelsUsed {
        UMovieSceneVectorTrack* Track; // 0x0
        int32_t InNumChannelsUsed; // 0x8
    }; // Size: 0xc
    Params_SetNumChannelsUsed params{};
    params.Track = (UMovieSceneVectorTrack*)Track;
    params.InNumChannelsUsed = (int32_t)InNumChannelsUsed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UMovieSceneVectorTrackExtensions::GetNumChannelsUsed(UMovieSceneVectorTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneVectorTrackExtensions.GetNumChannelsUsed"));
    struct Params_GetNumChannelsUsed {
        UMovieSceneVectorTrack* Track; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetNumChannelsUsed params{};
    params.Track = (UMovieSceneVectorTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
