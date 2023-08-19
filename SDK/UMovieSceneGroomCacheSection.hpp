#pragma once
#include <cstdint>
#include "FMovieSceneGroomCacheParams.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneGroomCacheSection : public UMovieSceneSection {
public:
    FMovieSceneGroomCacheParams Params; // 0xe8
    static UMovieSceneGroomCacheSection* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
