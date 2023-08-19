#include "UMovieSceneAudioTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneAudioTrack* UMovieSceneAudioTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneAudioTrack");
    return (UMovieSceneAudioTrack*)res;
}
