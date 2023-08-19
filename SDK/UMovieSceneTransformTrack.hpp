#pragma once
#include <cstdint>
#include "UMovieScenePropertyTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack {
public:
    static UMovieSceneTransformTrack* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
