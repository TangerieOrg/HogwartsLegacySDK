#include "FGuid.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneSpawnTrack.hpp"
#include "UMovieSceneTrack.hpp"
UMovieSceneSpawnTrack* UMovieSceneSpawnTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSpawnTrack");
    return (UMovieSceneSpawnTrack*)res;
}
