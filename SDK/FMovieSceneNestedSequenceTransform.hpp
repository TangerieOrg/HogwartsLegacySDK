#pragma once
#include <cstdint>
#include "FMovieSceneTimeTransform.hpp"
#include "FMovieSceneTimeWarping.hpp"
#pragma pack(push, 1)
struct FMovieSceneNestedSequenceTransform {
    FMovieSceneTimeTransform LinearTransform; // 0x0
    FMovieSceneTimeWarping Warping; // 0xc
}; // Size: 0x14
#pragma pack(pop)
