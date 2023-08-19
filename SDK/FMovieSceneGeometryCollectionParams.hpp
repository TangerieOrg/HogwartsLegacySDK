#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FMovieSceneGeometryCollectionParams {
    char pad_0[0x8];
    FSoftObjectPath GeometryCollectionCache; // 0x8
    FFrameNumber StartFrameOffset; // 0x20
    FFrameNumber EndFrameOffset; // 0x24
    float PlayRate; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
