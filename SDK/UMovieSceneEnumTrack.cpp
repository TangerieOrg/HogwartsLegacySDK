#include "UEnum.hpp"
#include "UMovieSceneEnumTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneEnumTrack* UMovieSceneEnumTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEnumTrack");
    return (UMovieSceneEnumTrack*)res;
}
