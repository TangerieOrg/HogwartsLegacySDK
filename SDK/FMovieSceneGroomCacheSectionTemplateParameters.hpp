#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneGroomCacheParams.hpp"
#pragma pack(push, 1)
struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams {
    FFrameNumber SectionStartTime; // 0x20
    FFrameNumber SectionEndTime; // 0x24
}; // Size: 0x28
#pragma pack(pop)
