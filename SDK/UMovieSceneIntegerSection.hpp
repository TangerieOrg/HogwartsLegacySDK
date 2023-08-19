#pragma once
#include <cstdint>
#include "FMovieSceneIntegerChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneIntegerSection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    FMovieSceneIntegerChannel IntegerCurve; // 0xf0
    static UMovieSceneIntegerSection* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
