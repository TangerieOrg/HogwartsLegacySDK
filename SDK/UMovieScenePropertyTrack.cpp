#include "FMovieScenePropertyBinding.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieScenePropertyTrack* UMovieScenePropertyTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePropertyTrack");
    return (UMovieScenePropertyTrack*)res;
}
