#include "UInterface.hpp"
#include "UMovieSceneSequenceActor.hpp"
UMovieSceneSequenceActor* UMovieSceneSequenceActor::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSequenceActor");
    return (UMovieSceneSequenceActor*)res;
}
