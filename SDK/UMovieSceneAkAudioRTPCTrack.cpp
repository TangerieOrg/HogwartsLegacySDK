#include "UMovieSceneAkAudioRTPCTrack.hpp"
#include "UMovieSceneAkTrack.hpp"
UMovieSceneAkAudioRTPCTrack* UMovieSceneAkAudioRTPCTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack");
    return (UMovieSceneAkAudioRTPCTrack*)res;
}
