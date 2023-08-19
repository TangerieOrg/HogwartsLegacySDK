#include "FMovieSceneTrackInstanceInput.hpp"
#include "UMovieSceneEntitySystemLinker.hpp"
#include "UMovieSceneTrackInstance.hpp"
#include "UObject.hpp"
UMovieSceneTrackInstance* UMovieSceneTrackInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneTrackInstance");
    return (UMovieSceneTrackInstance*)res;
}
