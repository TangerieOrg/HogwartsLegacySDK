#include "EFireEventsAtPosition.hpp"
#include "UMovieSceneEventTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneEventTrack* UMovieSceneEventTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEventTrack");
    return (UMovieSceneEventTrack*)res;
}
