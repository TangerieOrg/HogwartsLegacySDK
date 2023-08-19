#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMovieSceneTrackDisplayOptions {
    uint8_t bShowVerticalFrames : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
}; // Size: 0x4
#pragma pack(pop)
