#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneColorSection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    FMovieSceneFloatChannel RedCurve; // 0xf0
    FMovieSceneFloatChannel GreenCurve; // 0x190
    FMovieSceneFloatChannel BlueCurve; // 0x230
    FMovieSceneFloatChannel AlphaCurve; // 0x2d0
    static UMovieSceneColorSection* StaticClass();
}; // Size: 0x370
#pragma pack(pop)
