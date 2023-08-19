#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneFloatSection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    FMovieSceneFloatChannel FloatCurve; // 0xf0
    static UMovieSceneFloatSection* StaticClass();
}; // Size: 0x190
#pragma pack(pop)
