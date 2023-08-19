#include "UMovieSceneAkTrack.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneTrack.hpp"
UMovieSceneAkTrack* UMovieSceneAkTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.MovieSceneAkTrack");
    return (UMovieSceneAkTrack*)res;
}
