#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneFloatChannelSerializationHelper.hpp"
#include "FRichCurve.hpp"
#include "UMovieSceneSection.hpp"
class UAkRtpc;
#pragma pack(push, 1)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection {
public:
    UAkRtpc* RTPC; // 0xe8
    FString Name; // 0xf0
    FRichCurve FloatCurve; // 0x100
    FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x180
    FMovieSceneFloatChannel RTPCChannel; // 0x1b0
    static UMovieSceneAkAudioRTPCSection* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
