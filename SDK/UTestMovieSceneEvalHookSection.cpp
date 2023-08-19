#include "UMovieSceneHookSection.hpp"
#include "UTestMovieSceneEvalHookSection.hpp"
UTestMovieSceneEvalHookSection* UTestMovieSceneEvalHookSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.TestMovieSceneEvalHookSection");
    return (UTestMovieSceneEvalHookSection*)res;
}
