#include "UClass.hpp"
#include "UMovieSceneObjectPropertyTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneObjectPropertyTrack* UMovieSceneObjectPropertyTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneObjectPropertyTrack");
    return (UMovieSceneObjectPropertyTrack*)res;
}
