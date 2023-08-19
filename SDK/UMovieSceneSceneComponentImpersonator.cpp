#include "UInterface.hpp"
#include "UMovieSceneSceneComponentImpersonator.hpp"
UMovieSceneSceneComponentImpersonator* UMovieSceneSceneComponentImpersonator::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSceneComponentImpersonator");
    return (UMovieSceneSceneComponentImpersonator*)res;
}
