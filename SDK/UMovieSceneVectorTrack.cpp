#include "UMovieScenePropertyTrack.hpp"
#include "UMovieSceneVectorTrack.hpp"
UMovieSceneVectorTrack* UMovieSceneVectorTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneVectorTrack");
    return (UMovieSceneVectorTrack*)res;
}
