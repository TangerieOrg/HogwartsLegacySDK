#pragma once
#include <cstdint>
#include "FMovieSceneStringChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneStringSection : public UMovieSceneSection {
public:
    FMovieSceneStringChannel StringCurve; // 0xe8
    static UMovieSceneStringSection* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
