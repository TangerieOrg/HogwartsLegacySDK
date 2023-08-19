#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneFloatChannelSerializationHelper.hpp"
#include "FRichCurve.hpp"
#include "UAkRtpc.hpp"
#include "UMovieSceneAkAudioRTPCSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneAkAudioRTPCSection* UMovieSceneAkAudioRTPCSection::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.MovieSceneAkAudioRTPCSection");
    return (UMovieSceneAkAudioRTPCSection*)res;
}
