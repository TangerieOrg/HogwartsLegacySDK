#include "UEnum.hpp"
#include "UMovieSceneByteTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneByteTrack* UMovieSceneByteTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneByteTrack");
    return (UMovieSceneByteTrack*)res;
}
