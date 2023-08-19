#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneFadeSection : public UMovieSceneSection {
public:
    FMovieSceneFloatChannel FloatCurve; // 0xe8
    FLinearColor FadeColor; // 0x188
    uint8_t bFadeAudio : 1; // 0x198
    uint8_t pad_bitfield_198_1 : 7;
    char pad_199[0x7];
    static UMovieSceneFadeSection* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
