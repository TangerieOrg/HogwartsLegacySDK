#pragma once
#include <cstdint>
class UMovieSceneSection;
#pragma pack(push, 1)
struct FMovieSceneTrackInstanceInput {
    UMovieSceneSection* Section; // 0x0
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
