#include "UMovieSceneMaterialTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneMaterialTrack* UMovieSceneMaterialTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneMaterialTrack");
    return (UMovieSceneMaterialTrack*)res;
}
