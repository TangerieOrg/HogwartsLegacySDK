#include "EMovieSceneCompletionMode.hpp"
#include "EMovieSceneSequenceFlags.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "UFunction.hpp"
#include "UMovieSceneCompiledData.hpp"
#include "UMovieSceneSequence.hpp"
#include "UMovieSceneSignedObject.hpp"
UMovieSceneSequence* UMovieSceneSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSequence");
    return (UMovieSceneSequence*)res;
}
TArray<FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(FName InBindingName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequence.FindBindingsByTag"));
    struct Params_FindBindingsByTag {
        FName InBindingName; // 0x0
        TArray<FMovieSceneObjectBindingID> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_FindBindingsByTag params{};
    params.InBindingName = (FName)InBindingName;
    ProcessEvent(func, &params);
    return (TArray<FMovieSceneObjectBindingID>)params.ReturnValue;
}
FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(FName InBindingName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequence.FindBindingByTag"));
    struct Params_FindBindingByTag {
        FName InBindingName; // 0x0
        FMovieSceneObjectBindingID ReturnValue; // 0x8
    }; // Size: 0x20
    Params_FindBindingByTag params{};
    params.InBindingName = (FName)InBindingName;
    ProcessEvent(func, &params);
    return (FMovieSceneObjectBindingID)params.ReturnValue;
}
