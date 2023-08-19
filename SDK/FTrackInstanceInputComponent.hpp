#pragma once
#include <cstdint>
class UMovieSceneSection;
#pragma pack(push, 1)
struct FTrackInstanceInputComponent {
    UMovieSceneSection* Section; // 0x0
    int32_t OutputIndex; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
