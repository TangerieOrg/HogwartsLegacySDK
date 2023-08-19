#pragma once
#include <cstdint>
#include "UMovieScenePropertyTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack {
public:
    char pad_c0[0x8];
    static UMovieSceneStringTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
