#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneSlomoSection : public UMovieSceneSection {
public:
    FMovieSceneFloatChannel FloatCurve; // 0xe8
    static UMovieSceneSlomoSection* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
