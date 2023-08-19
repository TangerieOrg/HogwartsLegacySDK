#include "FDirectoryPath.hpp"
#include "FMovieSceneSectionParameters.hpp"
#include "UFunction.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneSequence.hpp"
#include "UMovieSceneSubSection.hpp"
UMovieSceneSequence* UMovieSceneSubSection::GetSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSubSection.GetSequence"));
    struct Params_GetSequence {
        UMovieSceneSequence* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSequence params{};
    ProcessEvent(func, &params);
    return (UMovieSceneSequence*)params.ReturnValue;
}
UMovieSceneSubSection* UMovieSceneSubSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSubSection");
    return (UMovieSceneSubSection*)res;
}
void UMovieSceneSubSection::SetSequence(UMovieSceneSequence* Sequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSubSection.SetSequence"));
    struct Params_SetSequence {
        UMovieSceneSequence* Sequence; // 0x0
    }; // Size: 0x8
    Params_SetSequence params{};
    params.Sequence = (UMovieSceneSequence*)Sequence;
    ProcessEvent(func, &params);
}
