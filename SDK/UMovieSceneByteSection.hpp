#pragma once
#include <cstdint>
#include "FMovieSceneByteChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneByteSection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    FMovieSceneByteChannel ByteCurve; // 0xf0
    static UMovieSceneByteSection* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
