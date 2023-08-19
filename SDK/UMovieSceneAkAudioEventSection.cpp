#include "UAkAudioEvent.hpp"
#include "UMovieSceneAkAudioEventSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneAkAudioEventSection* UMovieSceneAkAudioEventSection::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.MovieSceneAkAudioEventSection");
    return (UMovieSceneAkAudioEventSection*)res;
}
