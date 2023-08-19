#pragma once
#include <cstdint>
#include "FMovieSceneGeometryCacheParams.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection {
public:
    FMovieSceneGeometryCacheParams Params; // 0xe8
    static UMovieSceneGeometryCacheSection* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
