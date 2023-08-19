#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMovieSceneTrackEvalOptions {
    uint8_t bCanEvaluateNearestSection : 1; // 0x0
    uint8_t bEvalNearestSection : 1; // 0x0
    uint8_t bEvaluateInPreroll : 1; // 0x0
    uint8_t bEvaluateInPostroll : 1; // 0x0
    uint8_t bEvaluateNearestSection : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    char pad_1[0x3];
}; // Size: 0x4
#pragma pack(pop)
