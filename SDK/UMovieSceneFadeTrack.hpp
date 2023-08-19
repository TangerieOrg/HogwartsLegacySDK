#pragma once
#include <cstdint>
#include "UMovieSceneFloatTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack {
public:
    char pad_c0[0x8];
    static UMovieSceneFadeTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
