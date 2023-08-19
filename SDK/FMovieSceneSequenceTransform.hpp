#pragma once
#include <cstdint>
#include "FMovieSceneNestedSequenceTransform.hpp"
#include "FMovieSceneTimeTransform.hpp"
#pragma pack(push, 1)
struct FMovieSceneSequenceTransform {
    FMovieSceneTimeTransform LinearTransform; // 0x0
    char pad_c[0x4];
    TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
}; // Size: 0x20
#pragma pack(pop)
