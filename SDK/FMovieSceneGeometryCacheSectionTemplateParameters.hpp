#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneGeometryCacheParams.hpp"
#pragma pack(push, 1)
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams {
    FFrameNumber SectionStartTime; // 0x40
    FFrameNumber SectionEndTime; // 0x44
}; // Size: 0x48
#pragma pack(pop)
