#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneMarginSection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    FMovieSceneFloatChannel TopCurve; // 0xf0
    FMovieSceneFloatChannel LeftCurve; // 0x190
    FMovieSceneFloatChannel RightCurve; // 0x230
    FMovieSceneFloatChannel BottomCurve; // 0x2d0
    static UMovieSceneMarginSection* StaticClass();
}; // Size: 0x370
#pragma pack(pop)
