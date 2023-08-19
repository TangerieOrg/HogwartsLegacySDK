#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#include "FMovieSceneGeometryCollectionParams.hpp"
#pragma pack(push, 1)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams {
    FFrameNumber SectionStartTime; // 0x30
    FFrameNumber SectionEndTime; // 0x34
}; // Size: 0x38
#pragma pack(pop)
