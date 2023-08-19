#pragma once
#include <cstdint>
#include "UMovieScenePropertyTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack {
public:
    char pad_c0[0x8];
    static UMovieSceneBoolTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
