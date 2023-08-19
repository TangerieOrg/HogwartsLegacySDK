#include "FMovieSceneSequenceActorPointers.hpp"
#include "UMovieSceneEntitySystemLinker.hpp"
#include "UMovieSceneSequenceTickManager.hpp"
#include "UObject.hpp"
UMovieSceneSequenceTickManager* UMovieSceneSequenceTickManager::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSequenceTickManager");
    return (UMovieSceneSequenceTickManager*)res;
}
