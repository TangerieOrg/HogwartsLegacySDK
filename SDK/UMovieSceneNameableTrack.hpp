#pragma once
#include <cstdint>
#include "UMovieSceneTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneNameableTrack : public UMovieSceneTrack {
public:
    static UMovieSceneNameableTrack* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
