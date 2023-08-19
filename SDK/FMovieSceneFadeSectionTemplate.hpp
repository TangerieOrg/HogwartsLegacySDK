#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneFloatChannel.hpp"
#pragma pack(push, 1)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneFloatChannel FadeCurve; // 0x20
    FLinearColor FadeColor; // 0xc0
    uint8_t bFadeAudio : 1; // 0xd0
    uint8_t pad_bitfield_d0_1 : 7;
    char pad_d1[0x7];
}; // Size: 0xd8
#pragma pack(pop)
