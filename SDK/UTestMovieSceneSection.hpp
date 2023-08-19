#pragma once
#include <cstdint>
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UTestMovieSceneSection : public UMovieSceneSection {
public:
    static UTestMovieSceneSection* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
