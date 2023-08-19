#include "UMovieSceneAkAudioEventTrack.hpp"
#include "UMovieSceneAkTrack.hpp"
UMovieSceneAkAudioEventTrack* UMovieSceneAkAudioEventTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.MovieSceneAkAudioEventTrack");
    return (UMovieSceneAkAudioEventTrack*)res;
}
