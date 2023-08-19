#pragma once
#include <cstdint>
#include "FMovieSceneGeometryCollectionParams.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection {
public:
    FMovieSceneGeometryCollectionParams Params; // 0xe8
    static UMovieSceneGeometryCollectionSection* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
