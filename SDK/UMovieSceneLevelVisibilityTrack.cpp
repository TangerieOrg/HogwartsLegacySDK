#include "UMovieSceneLevelVisibilityTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneLevelVisibilityTrack* UMovieSceneLevelVisibilityTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack");
    return (UMovieSceneLevelVisibilityTrack*)res;
}
