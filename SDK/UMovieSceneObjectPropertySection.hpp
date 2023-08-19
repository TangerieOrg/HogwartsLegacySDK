#pragma once
#include <cstdint>
#include "FMovieSceneObjectPathChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneObjectPropertySection : public UMovieSceneSection {
public:
    FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
    static UMovieSceneObjectPropertySection* StaticClass();
}; // Size: 0x1a8
#pragma pack(pop)
